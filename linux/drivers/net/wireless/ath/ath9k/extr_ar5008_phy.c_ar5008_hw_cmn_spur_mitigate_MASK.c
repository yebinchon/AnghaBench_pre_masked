
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
typedef int int8_t ;


 int FUNC_0 (int*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;


 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;






 int const VAR_15 ;
 int FUNC_1 (struct ath_hw*,int const,int) ;
 size_t FUNC_2 (int) ;

void FUNC_3(struct ath_hw *VAR_16,
     struct ath9k_channel *VAR_17, int VAR_18)
{
 int VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;
 int8_t VAR_24[123] = {0};
 int8_t VAR_25[123] = {0};
 int8_t VAR_26;
 int VAR_27;
 static const int VAR_28[4] = {
  130, 129,
  133, 132
 };
 static const int VAR_29[4] = {
  128, 131,
  135, 134
 };
 static const int VAR_30[4] = { 0, 100, 0, 0 };

 VAR_19 = -6000;
 VAR_20 = VAR_18 + 100;
 VAR_21 = VAR_18 - 100;

 for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
  int VAR_31 = 0;
  int VAR_32 = 0;
  int VAR_33 = 0;

  for (VAR_33 = 0; VAR_33 < 30; VAR_33++) {
   if ((VAR_19 > VAR_21) && (VAR_19 < VAR_20)) {
    VAR_31 = VAR_31 | 0x1 << VAR_33;
    VAR_32 = VAR_32 | 0x1 << VAR_33;
   }
   VAR_19 += 100;
  }
  VAR_19 += VAR_30[VAR_23];
  FUNC_1(VAR_16, VAR_28[VAR_23], VAR_31);
  FUNC_1(VAR_16, VAR_29[VAR_23], VAR_32);
 }

 VAR_22 = 6100;
 VAR_20 = VAR_18 + 120;
 VAR_21 = VAR_18 - 120;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_24); VAR_23++) {
  if ((VAR_22 > VAR_21) && (VAR_22 < VAR_20)) {

   volatile int VAR_34 = FUNC_2(VAR_22 - VAR_18);

   if (VAR_34 < 75)
    VAR_26 = 1;
   else
    VAR_26 = 0;
   if (VAR_22 < 0)
    VAR_24[FUNC_2(VAR_22 / 100)] = VAR_26;
   else
    VAR_25[VAR_22 / 100] = VAR_26;
  }
  VAR_22 -= 100;
 }

 VAR_27 = (VAR_24[46] << 30) | (VAR_24[47] << 28)
  | (VAR_24[48] << 26) | (VAR_24[49] << 24)
  | (VAR_24[50] << 22) | (VAR_24[51] << 20)
  | (VAR_24[52] << 18) | (VAR_24[53] << 16)
  | (VAR_24[54] << 14) | (VAR_24[55] << 12)
  | (VAR_24[56] << 10) | (VAR_24[57] << 8)
  | (VAR_24[58] << 6) | (VAR_24[59] << 4)
  | (VAR_24[60] << 2) | (VAR_24[61] << 0);
 FUNC_1(VAR_16, VAR_4, VAR_27);
 FUNC_1(VAR_16, VAR_15, VAR_27);

 VAR_27 = (VAR_24[31] << 28)
  | (VAR_24[32] << 26) | (VAR_24[33] << 24)
  | (VAR_24[34] << 22) | (VAR_24[35] << 20)
  | (VAR_24[36] << 18) | (VAR_24[37] << 16)
  | (VAR_24[48] << 14) | (VAR_24[39] << 12)
  | (VAR_24[40] << 10) | (VAR_24[41] << 8)
  | (VAR_24[42] << 6) | (VAR_24[43] << 4)
  | (VAR_24[44] << 2) | (VAR_24[45] << 0);
 FUNC_1(VAR_16, VAR_5, VAR_27);
 FUNC_1(VAR_16, VAR_9, VAR_27);

 VAR_27 = (VAR_24[16] << 30) | (VAR_24[16] << 28)
  | (VAR_24[18] << 26) | (VAR_24[18] << 24)
  | (VAR_24[20] << 22) | (VAR_24[20] << 20)
  | (VAR_24[22] << 18) | (VAR_24[22] << 16)
  | (VAR_24[24] << 14) | (VAR_24[24] << 12)
  | (VAR_24[25] << 10) | (VAR_24[26] << 8)
  | (VAR_24[27] << 6) | (VAR_24[28] << 4)
  | (VAR_24[29] << 2) | (VAR_24[30] << 0);
 FUNC_1(VAR_16, VAR_6, VAR_27);
 FUNC_1(VAR_16, VAR_8, VAR_27);

 VAR_27 = (VAR_24[0] << 30) | (VAR_24[1] << 28)
  | (VAR_24[2] << 26) | (VAR_24[3] << 24)
  | (VAR_24[4] << 22) | (VAR_24[5] << 20)
  | (VAR_24[6] << 18) | (VAR_24[7] << 16)
  | (VAR_24[8] << 14) | (VAR_24[9] << 12)
  | (VAR_24[10] << 10) | (VAR_24[11] << 8)
  | (VAR_24[12] << 6) | (VAR_24[13] << 4)
  | (VAR_24[14] << 2) | (VAR_24[15] << 0);
 FUNC_1(VAR_16, VAR_14, VAR_27);
 FUNC_1(VAR_16, VAR_7, VAR_27);

 VAR_27 = (VAR_25[15] << 28)
  | (VAR_25[14] << 26) | (VAR_25[13] << 24)
  | (VAR_25[12] << 22) | (VAR_25[11] << 20)
  | (VAR_25[10] << 18) | (VAR_25[9] << 16)
  | (VAR_25[8] << 14) | (VAR_25[7] << 12)
  | (VAR_25[6] << 10) | (VAR_25[5] << 8)
  | (VAR_25[4] << 6) | (VAR_25[3] << 4)
  | (VAR_25[2] << 2) | (VAR_25[1] << 0);
 FUNC_1(VAR_16, VAR_0, VAR_27);
 FUNC_1(VAR_16, VAR_10, VAR_27);

 VAR_27 = (VAR_25[30] << 28)
  | (VAR_25[29] << 26) | (VAR_25[28] << 24)
  | (VAR_25[27] << 22) | (VAR_25[26] << 20)
  | (VAR_25[25] << 18) | (VAR_25[24] << 16)
  | (VAR_25[23] << 14) | (VAR_25[22] << 12)
  | (VAR_25[21] << 10) | (VAR_25[20] << 8)
  | (VAR_25[19] << 6) | (VAR_25[18] << 4)
  | (VAR_25[17] << 2) | (VAR_25[16] << 0);
 FUNC_1(VAR_16, VAR_1, VAR_27);
 FUNC_1(VAR_16, VAR_11, VAR_27);

 VAR_27 = (VAR_25[45] << 28)
  | (VAR_25[44] << 26) | (VAR_25[43] << 24)
  | (VAR_25[42] << 22) | (VAR_25[41] << 20)
  | (VAR_25[40] << 18) | (VAR_25[39] << 16)
  | (VAR_25[38] << 14) | (VAR_25[37] << 12)
  | (VAR_25[36] << 10) | (VAR_25[35] << 8)
  | (VAR_25[34] << 6) | (VAR_25[33] << 4)
  | (VAR_25[32] << 2) | (VAR_25[31] << 0);
 FUNC_1(VAR_16, VAR_2, VAR_27);
 FUNC_1(VAR_16, VAR_12, VAR_27);

 VAR_27 = (VAR_25[61] << 30) | (VAR_25[60] << 28)
  | (VAR_25[59] << 26) | (VAR_25[58] << 24)
  | (VAR_25[57] << 22) | (VAR_25[56] << 20)
  | (VAR_25[55] << 18) | (VAR_25[54] << 16)
  | (VAR_25[53] << 14) | (VAR_25[52] << 12)
  | (VAR_25[51] << 10) | (VAR_25[50] << 8)
  | (VAR_25[49] << 6) | (VAR_25[48] << 4)
  | (VAR_25[47] << 2) | (VAR_25[46] << 0);
 FUNC_1(VAR_16, VAR_3, VAR_27);
 FUNC_1(VAR_16, VAR_13, VAR_27);
}
