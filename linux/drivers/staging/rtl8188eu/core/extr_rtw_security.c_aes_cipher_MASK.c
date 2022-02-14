
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*,int*) ;
 int FUNC_4 (int*,int,int,int*,int*,int) ;
 int FUNC_5 (int*,int,int*) ;
 int FUNC_6 (int*,int*,int,int) ;
 int FUNC_7 (int*,int,int,int*,int,int*) ;
 int FUNC_8 (int*,int ,int) ;

__attribute__((used)) static int FUNC_9(u8 *VAR_6, uint VAR_7, u8 *VAR_8, uint VAR_9)
{
 uint VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
  VAR_15, VAR_16;

 u8 VAR_17[6];
 u8 VAR_18[16];
 u8 VAR_19[16];
 u8 VAR_20[16];
 u8 VAR_21[16];


 u8 VAR_22[16];
 u8 VAR_23[16];
 u8 VAR_24[16];
 u8 VAR_25[8];
 uint VAR_26 = FUNC_1(VAR_8);
 uint VAR_27 = FUNC_0(VAR_8);

 VAR_27 >>= 4;

 FUNC_8(VAR_18, 0, 16);
 FUNC_8(VAR_19, 0, 16);
 FUNC_8(VAR_20, 0, 16);
 FUNC_8(VAR_21, 0, 16);
 FUNC_8(VAR_22, 0, 16);
 FUNC_8(VAR_23, 0, 16);
 FUNC_8(VAR_24, 0, 16);

 if ((VAR_7 == VAR_3) || (VAR_7 == VAR_4))
  VAR_11 = 0;
 else
  VAR_11 = 1;

 if ((VAR_26 == VAR_0) || (VAR_26 == VAR_2) || (VAR_26 == VAR_1)) {
  VAR_10 = 1;
  if (VAR_7 != VAR_4)
   VAR_7 += 2;
 } else if ((VAR_27 == 0x08) || (VAR_27 == 0x09) || (VAR_27 == 0x0a) || (VAR_27 == 0x0b)) {
  if (VAR_7 != VAR_4)
   VAR_7 += 2;
  VAR_10 = 1;
 } else {
  VAR_10 = 0;
 }

 VAR_17[0] = VAR_8[VAR_7];
 VAR_17[1] = VAR_8[VAR_7+1];
 VAR_17[2] = VAR_8[VAR_7+4];
 VAR_17[3] = VAR_8[VAR_7+5];
 VAR_17[4] = VAR_8[VAR_7+6];
 VAR_17[5] = VAR_8[VAR_7+7];

 FUNC_7(VAR_18, VAR_10, VAR_11, VAR_8, VAR_9, VAR_17);

 FUNC_5(VAR_19, VAR_7, VAR_8);
 FUNC_6(VAR_20, VAR_8, VAR_11, VAR_10);

 VAR_14 = VAR_9 % 16;
 VAR_15 = VAR_9 / 16;


 VAR_16 = VAR_7 + 8;


 FUNC_2(VAR_6, VAR_18, VAR_23);
 FUNC_3(VAR_23, VAR_19, VAR_22);
 FUNC_2(VAR_6, VAR_22, VAR_23);
 FUNC_3(VAR_23, VAR_20, VAR_22);
 FUNC_2(VAR_6, VAR_22, VAR_23);

 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
  FUNC_3(VAR_23, &VAR_8[VAR_16], VAR_22);

  VAR_16 += 16;
  FUNC_2(VAR_6, VAR_22, VAR_23);
 }


 if (VAR_14 > 0) {
  for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
   VAR_24[VAR_13] = 0x00;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_24[VAR_13] = VAR_8[VAR_16++];
  FUNC_3(VAR_23, VAR_24, VAR_22);
  FUNC_2(VAR_6, VAR_22, VAR_23);
 }

 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_25[VAR_13] = VAR_23[VAR_13];


 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_8[VAR_16+VAR_13] = VAR_25[VAR_13];

 VAR_16 = VAR_7 + 8;
 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
  FUNC_4(VAR_21, VAR_11, VAR_10, VAR_8, VAR_17, VAR_12+1);
  FUNC_2(VAR_6, VAR_21, VAR_23);
  FUNC_3(VAR_23, &VAR_8[VAR_16], VAR_22);
  for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
   VAR_8[VAR_16++] = VAR_22[VAR_13];
 }

 if (VAR_14 > 0) {

  FUNC_4(VAR_21, VAR_11, VAR_10, VAR_8, VAR_17, VAR_15+1);

  for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
   VAR_24[VAR_13] = 0x00;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_24[VAR_13] = VAR_8[VAR_16+VAR_13];
  FUNC_2(VAR_6, VAR_21, VAR_23);
  FUNC_3(VAR_23, VAR_24, VAR_22);
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_8[VAR_16++] = VAR_22[VAR_13];
 }

 FUNC_4(VAR_21, VAR_11, VAR_10, VAR_8, VAR_17, 0);

 for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
  VAR_24[VAR_13] = 0x00;
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_24[VAR_13] = VAR_8[VAR_13+VAR_7+8+VAR_9];

 FUNC_2(VAR_6, VAR_21, VAR_23);
 FUNC_3(VAR_23, VAR_24, VAR_22);
 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_8[VAR_16++] = VAR_22[VAR_13];
 return VAR_5;
}
