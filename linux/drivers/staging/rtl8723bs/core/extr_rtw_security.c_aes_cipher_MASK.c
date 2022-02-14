
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int sint ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*,int*) ;
 int FUNC_4 (int*,int,int,int*,int*,int,int) ;
 int FUNC_5 (int*,int,int*,int) ;
 int FUNC_6 (int*,int*,int,int) ;
 int FUNC_7 (int*,int,int,int*,int,int*,int) ;
 int FUNC_8 (void*,int ,int) ;

__attribute__((used)) static sint FUNC_9(u8 *VAR_7, uint VAR_8,
   u8 *VAR_9, uint VAR_10)
{
 uint VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
  VAR_16, VAR_17;

 u8 VAR_18[6];
 u8 VAR_19[16];
 u8 VAR_20[16];
 u8 VAR_21[16];
 u8 VAR_22[16];


 u8 VAR_23[16];
 u8 VAR_24[16];
 u8 VAR_25[16];
 u8 VAR_26[8];
 uint VAR_27 = FUNC_1(VAR_9);
 uint VAR_28 = FUNC_0(VAR_9);

 VAR_28 = VAR_28>>4;


 FUNC_8((void *)VAR_19, 0, 16);
 FUNC_8((void *)VAR_20, 0, 16);
 FUNC_8((void *)VAR_21, 0, 16);
 FUNC_8((void *)VAR_22, 0, 16);
 FUNC_8((void *)VAR_23, 0, 16);
 FUNC_8((void *)VAR_24, 0, 16);
 FUNC_8((void *)VAR_25, 0, 16);

 if ((VAR_8 == VAR_4) || (VAR_8 == VAR_5))
  VAR_12 = 0;
 else
  VAR_12 = 1;

 if (((VAR_27|VAR_28) == VAR_1) ||
     ((VAR_27|VAR_28) == VAR_3) ||
     ((VAR_27|VAR_28) == VAR_2)) {
  VAR_11 = 1;
  if (VAR_8 != VAR_5)
   VAR_8 += 2;

 } else if ((VAR_27 == VAR_0) &&
     ((VAR_28 == 0x08) ||
     (VAR_28 == 0x09) ||
     (VAR_28 == 0x0a) ||
     (VAR_28 == 0x0b))) {
  if (VAR_8 != VAR_5)
   VAR_8 += 2;

  VAR_11 = 1;
 } else
  VAR_11 = 0;

 VAR_18[0] = VAR_9[VAR_8];
 VAR_18[1] = VAR_9[VAR_8+1];
 VAR_18[2] = VAR_9[VAR_8+4];
 VAR_18[3] = VAR_9[VAR_8+5];
 VAR_18[4] = VAR_9[VAR_8+6];
 VAR_18[5] = VAR_9[VAR_8+7];

 FUNC_7(
   VAR_19,
   VAR_11,
   VAR_12,
   VAR_9,
   VAR_10,
   VAR_18,
   VAR_27
 );

 FUNC_5(
  VAR_20,
  VAR_8,
  VAR_9,
  VAR_27
 );
 FUNC_6(
  VAR_21,
  VAR_9,
  VAR_12,
  VAR_11
 );


 VAR_15 = VAR_10 % 16;
 VAR_16 = VAR_10 / 16;


 VAR_17 = (VAR_8 + 8);


 FUNC_2(VAR_7, VAR_19, VAR_24);
 FUNC_3(VAR_24, VAR_20, VAR_23);
 FUNC_2(VAR_7, VAR_23, VAR_24);
 FUNC_3(VAR_24, VAR_21, VAR_23);
 FUNC_2(VAR_7, VAR_23, VAR_24);

 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  FUNC_3(VAR_24, &VAR_9[VAR_17], VAR_23);

  VAR_17 += 16;
  FUNC_2(VAR_7, VAR_23, VAR_24);
 }


 if (VAR_15 > 0) {
  for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
   VAR_25[VAR_14] = 0x00;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_25[VAR_14] = VAR_9[VAR_17++];
  }
  FUNC_3(VAR_24, VAR_25, VAR_23);
  FUNC_2(VAR_7, VAR_23, VAR_24);

 }

 for (VAR_14 = 0 ; VAR_14 < 8; VAR_14++)
  VAR_26[VAR_14] = VAR_24[VAR_14];


 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  VAR_9[VAR_17+VAR_14] = VAR_26[VAR_14];

 VAR_17 = VAR_8 + 8;
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
  FUNC_4(
   VAR_22,
   VAR_12,
   VAR_11,
   VAR_9,
   VAR_18,
   VAR_13+1,
   VAR_27
  );
  FUNC_2(VAR_7, VAR_22, VAR_24);
  FUNC_3(VAR_24, &VAR_9[VAR_17], VAR_23);
  for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
   VAR_9[VAR_17++] = VAR_23[VAR_14];
 }

 if (VAR_15 > 0) {


  FUNC_4(
   VAR_22,
   VAR_12,
   VAR_11,
   VAR_9,
   VAR_18,
   VAR_16+1,
   VAR_27
  );

  for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
   VAR_25[VAR_14] = 0x00;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
   VAR_25[VAR_14] = VAR_9[VAR_17+VAR_14];

  FUNC_2(VAR_7, VAR_22, VAR_24);
  FUNC_3(VAR_24, VAR_25, VAR_23);
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
   VAR_9[VAR_17++] = VAR_23[VAR_14];
 }


 FUNC_4(
  VAR_22,
  VAR_12,
  VAR_11,
  VAR_9,
  VAR_18,
  0,
  VAR_27
 );

 for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
  VAR_25[VAR_14] = 0x00;
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  VAR_25[VAR_14] = VAR_9[VAR_14+VAR_8+8+VAR_10];

 FUNC_2(VAR_7, VAR_22, VAR_24);
 FUNC_3(VAR_24, VAR_25, VAR_23);
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
   VAR_9[VAR_17++] = VAR_23[VAR_14];

 return VAR_6;
}
