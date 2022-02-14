
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1,
       u8 *VAR_2,
       u8 *VAR_3)
{
 uint VAR_4;
 u8 VAR_5[8], VAR_6[8], VAR_7[8];
 u8 VAR_8[8], VAR_9[8], VAR_10[8];
 u8 VAR_11[24];
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 uint VAR_14 = 0;
 int VAR_15;

 VAR_15 = ((*(u32 *)VAR_1 & 0xFFFFFF) == 0xFFFFFF);

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 <= 2; VAR_4++) {
  *(VAR_1 + VAR_4) = ~(*(VAR_1 + VAR_4));
  *(VAR_2 + VAR_4) = ~(*(VAR_2 + VAR_4));
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_5[VAR_4] = *VAR_1 % 2;
  *VAR_1 = *VAR_1 / 2;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_6[VAR_4] = *(VAR_1 + 1) % 2;
  *(VAR_1 + 1) = *(VAR_1 + 1) / 2;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_7[VAR_4] = *(VAR_1 + 2) % 2;
  *(VAR_1 + 2) = *(VAR_1 + 2) / 2;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_8[VAR_4] = *VAR_2 % 2;
  *VAR_2 = *VAR_2 / 2;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_9[VAR_4] = *(VAR_2 + 1) % 2;
  *(VAR_2 + 1) = *(VAR_2 + 1) / 2;
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_10[VAR_4] = *(VAR_2 + 2) % 2;
  *(VAR_2 + 2) = *(VAR_2 + 2) / 2;
 }

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_11[VAR_4] = VAR_7[VAR_4 + 2] ^ VAR_10[VAR_4 + 2];

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  VAR_11[VAR_4 + 6] = VAR_5[VAR_4] ^ VAR_8[VAR_4];

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  VAR_11[VAR_4 + 14] = VAR_6[VAR_4] ^ VAR_9[VAR_4];

 VAR_11[22] = VAR_7[0] ^ VAR_10[0];
 VAR_11[23] = VAR_7[1] ^ VAR_10[1];

 for (VAR_4 = 0; VAR_4 < 24; VAR_4++)
  VAR_12 += VAR_11[VAR_4];

 switch (VAR_12) {
 case 0:



  return 0;

 case 1:

  FUNC_1("ECC UNCORRECTED_ERROR 1\n");
  return -VAR_0;

 case 11:

  FUNC_1("ECC UNCORRECTED_ERROR B\n");
  return -VAR_0;

 case 12:

  VAR_14 = (VAR_11[23] << 8) +
       (VAR_11[21] << 7) +
       (VAR_11[19] << 6) +
       (VAR_11[17] << 5) +
       (VAR_11[15] << 4) +
       (VAR_11[13] << 3) +
       (VAR_11[11] << 2) +
       (VAR_11[9] << 1) +
       VAR_11[7];

  VAR_13 = (VAR_11[5] << 2) + (VAR_11[3] << 1) + VAR_11[1];

  FUNC_1("Correcting single bit ECC error at offset: "
    "%d, bit: %d\n", VAR_14, VAR_13);

  VAR_3[VAR_14] ^= (1 << VAR_13);

  return 1;
 default:
  if (VAR_15) {
   if (VAR_2[0] == 0 &&
       VAR_2[1] == 0 &&
       VAR_2[2] == 0)
    return 0;
  }
  FUNC_1("UNCORRECTED_ERROR default\n");
  return -VAR_0;
 }
}
