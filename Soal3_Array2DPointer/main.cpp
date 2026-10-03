#include <iostream>

using namespace std;

void tampilkanArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray2D(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int *pA, *pB;

    cout << "=== ARRAY A (KONDISI AWAL) ===" << endl;
    tampilkanArray2D(A);
    cout << "\n=== ARRAY B (KONDISI AWAL) ===" << endl;
    tampilkanArray2D(B);

    cout << "\n=============================================";
    cout << "\nMenukarkan isi Array 2D pada indeks [0][0]...\n";
    tukarArray2D(A, B, 0, 0);

    cout << "\n=== ARRAY A (SETELAH TUKAR [0][0]) ===" << endl;
    tampilkanArray2D(A);
    cout << "\n=== ARRAY B (SETELAH TUKAR [0][0]) ===" << endl;
    tampilkanArray2D(B);

    pA = &A[1][1];
    pB = &B[1][1];

    cout << "\n=============================================";
    cout << "\nMenukarkan isi via Pointer (*pA = A[1][1], *pB = B[1][1])...\n";
    tukarPointer(pA, pB);

    cout << "\n=== ARRAY A (SETELAH TUKAR POINTER) ===" << endl;
    tampilkanArray2D(A);
    cout << "\n=== ARRAY B (SETELAH TUKAR POINTER) ===" << endl;
    tampilkanArray2D(B);

    return 0;
}