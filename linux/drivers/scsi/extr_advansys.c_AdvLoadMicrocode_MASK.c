
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int AdvPortAddr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned short) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(AdvPortAddr VAR_2, const unsigned char *VAR_3,
       int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11;

 FUNC_2(VAR_2, VAR_1, 0);

 for (VAR_7 = 253 * 2; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7] == 0xff) {
   unsigned short VAR_12 = (VAR_3[VAR_7 + 3] << 8) | VAR_3[VAR_7 + 2];
   for (VAR_8 = 0; VAR_8 < VAR_3[VAR_7 + 1]; VAR_8++) {
    FUNC_1(VAR_2, VAR_12);
    VAR_10 += 2;
   }
   VAR_7 += 3;
  } else if (VAR_3[VAR_7] == 0xfe) {
   unsigned short VAR_13 = (VAR_3[VAR_7 + 2] << 8) | VAR_3[VAR_7 + 1];
   FUNC_1(VAR_2, VAR_13);
   VAR_7 += 2;
   VAR_10 += 2;
  } else {
   unsigned int VAR_14 = VAR_3[VAR_7] * 2;
   unsigned short VAR_15 = (VAR_3[VAR_14 + 1] << 8) | VAR_3[VAR_14];
   FUNC_1(VAR_2, VAR_15);
   VAR_10 += 2;
  }
 }

 VAR_9 = VAR_10;

 while (VAR_10 < VAR_5) {
  FUNC_1(VAR_2, 0);
  VAR_10 += 2;
 }


 VAR_11 = 0;
 FUNC_2(VAR_2, VAR_1, 0);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2) {
  VAR_11 += FUNC_0(VAR_2);
 }

 if (VAR_11 != VAR_6)
  return VAR_0;

 return 0;
}
