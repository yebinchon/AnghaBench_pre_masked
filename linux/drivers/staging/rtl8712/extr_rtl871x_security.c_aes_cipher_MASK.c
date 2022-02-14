
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*,int*) ;
 int FUNC_4 (int*,int,int,int*,int*,int) ;
 int FUNC_5 (int*,int,int*) ;
 int FUNC_6 (int*,int*,int,int) ;
 int FUNC_7 (int*,int,int,int*,int,int*) ;
 int FUNC_8 (void*,int ,int) ;

__attribute__((used)) static void FUNC_9(u8 *VAR_5, uint VAR_6,
         u8 *VAR_7, uint VAR_8)
{
 uint VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 uint VAR_14, VAR_15;

 u8 VAR_16[6];
 u8 VAR_17[16];
 u8 VAR_18[16];
 u8 VAR_19[16];
 u8 VAR_20[16];


 u8 VAR_21[16];
 u8 VAR_22[16];
 u8 VAR_23[16];
 u8 VAR_24[8];
 u16 VAR_25 = FUNC_1(VAR_7);
 u16 VAR_26 = FUNC_0(VAR_7);

 VAR_26 >>= 4;
 FUNC_8((void *)VAR_17, 0, 16);
 FUNC_8((void *)VAR_18, 0, 16);
 FUNC_8((void *)VAR_19, 0, 16);
 FUNC_8((void *)VAR_20, 0, 16);
 FUNC_8((void *)VAR_21, 0, 16);
 FUNC_8((void *)VAR_22, 0, 16);
 FUNC_8((void *)VAR_23, 0, 16);

 if ((VAR_6 == VAR_3) || (VAR_6 == VAR_4))
  VAR_10 = 0;
 else
  VAR_10 = 1;

 if ((VAR_25 == VAR_0) ||
      (VAR_25 == VAR_2) ||
      (VAR_25 == VAR_1)) {
  VAR_9 = 1;
  if (VAR_6 != VAR_4)
   VAR_6 += 2;
 } else if ((VAR_26 == 0x08) ||
     (VAR_26 == 0x09) ||
     (VAR_26 == 0x0a) ||
     (VAR_26 == 0x0b)) {
  if (VAR_6 != VAR_4)
   VAR_6 += 2;
  VAR_9 = 1;
 } else {
  VAR_9 = 0;
 }
 VAR_16[0] = VAR_7[VAR_6];
 VAR_16[1] = VAR_7[VAR_6 + 1];
 VAR_16[2] = VAR_7[VAR_6 + 4];
 VAR_16[3] = VAR_7[VAR_6 + 5];
 VAR_16[4] = VAR_7[VAR_6 + 6];
 VAR_16[5] = VAR_7[VAR_6 + 7];
 FUNC_7(VAR_17, VAR_9, VAR_10, VAR_7, VAR_8, VAR_16);
 FUNC_5(VAR_18, VAR_6, VAR_7);
 FUNC_6(VAR_19, VAR_7, VAR_10, VAR_9);
 VAR_13 = VAR_8 % 16;
 VAR_14 = VAR_8 / 16;

 VAR_15 = VAR_6 + 8;

 FUNC_2(VAR_5, VAR_17, VAR_22);
 FUNC_3(VAR_22, VAR_18, VAR_21);
 FUNC_2(VAR_5, VAR_21, VAR_22);
 FUNC_3(VAR_22, VAR_19, VAR_21);
 FUNC_2(VAR_5, VAR_21, VAR_22);
 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
  FUNC_3(VAR_22, &VAR_7[VAR_15], VAR_21);
  VAR_15 += 16;
  FUNC_2(VAR_5, VAR_21, VAR_22);
 }

 if (VAR_13 > 0) {
  for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
   VAR_23[VAR_12] = 0x00;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_23[VAR_12] = VAR_7[VAR_15++];
  FUNC_3(VAR_22, VAR_23, VAR_21);
  FUNC_2(VAR_5, VAR_21, VAR_22);
 }
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  VAR_24[VAR_12] = VAR_22[VAR_12];

 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  VAR_7[VAR_15 + VAR_12] = VAR_24[VAR_12];
 VAR_15 = VAR_6 + 8;
 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
  FUNC_4(VAR_20, VAR_10, VAR_9,
          VAR_7, VAR_16, VAR_11 + 1);
  FUNC_2(VAR_5, VAR_20, VAR_22);
  FUNC_3(VAR_22, &VAR_7[VAR_15], VAR_21);
  for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
   VAR_7[VAR_15++] = VAR_21[VAR_12];
 }
 if (VAR_13 > 0) {

  FUNC_4(VAR_20, VAR_10, VAR_9,
          VAR_7, VAR_16, VAR_14 + 1);
  for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
   VAR_23[VAR_12] = 0x00;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_23[VAR_12] = VAR_7[VAR_15 + VAR_12];
  FUNC_2(VAR_5, VAR_20, VAR_22);
  FUNC_3(VAR_22, VAR_23, VAR_21);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_7[VAR_15++] = VAR_21[VAR_12];
 }

 FUNC_4(VAR_20, VAR_10, VAR_9,
         VAR_7, VAR_16, 0);
 for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
  VAR_23[VAR_12] = 0x00;
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  VAR_23[VAR_12] = VAR_7[VAR_12 + VAR_6 + 8 + VAR_8];
 FUNC_2(VAR_5, VAR_20, VAR_22);
 FUNC_3(VAR_22, VAR_23, VAR_21);
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  VAR_7[VAR_15++] = VAR_21[VAR_12];
}
