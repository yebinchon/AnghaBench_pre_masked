
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, u8 *VAR_3, s32 VAR_4)
{
 char VAR_5[VAR_1 + 1];
 s32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_4 > VAR_0) {
  FUNC_0("Export: key = \"%s\", %d bits, value = HEX\n",
       VAR_2, VAR_4);
  VAR_10 = (VAR_4 + (VAR_0 - 1)) / VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
   if (VAR_9 < (VAR_10 - 1)) {
    VAR_11 = VAR_0;
    VAR_8 = VAR_1;
    VAR_7 = VAR_4 - ((VAR_9 + 1) * VAR_0);
   } else {
    VAR_11 =
     VAR_4 - ((VAR_10 - 1) * VAR_0);
    VAR_8 = (VAR_11 + 3) / 4;
    VAR_7 = 0L;
   }

   VAR_5[VAR_8] = '\0';
   VAR_13 = VAR_8 - 1;
   VAR_12 = 0;

   for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14) {
    VAR_6 = VAR_14 + VAR_7;
    if (VAR_3[VAR_6 >> 3] & (1 << (VAR_6 & 7)))
     VAR_12 |= (1 << (VAR_6 & 3));
    if ((VAR_6 & 3) == 3) {
     FUNC_1(&VAR_5[VAR_13], "%1x", VAR_12);
     VAR_12 = 0;
     --VAR_13;
    }
   }
   if ((VAR_14 & 3) > 0)
    FUNC_1(&VAR_5[VAR_13], "%1x", VAR_12);

   FUNC_0("%s\n", VAR_5);
  }

 } else {
  VAR_8 = (VAR_4 + 3) / 4;
  VAR_5[VAR_8] = '\0';
  VAR_13 = VAR_8 - 1;
  VAR_12 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
   if (VAR_3[VAR_6 >> 3] & (1 << (VAR_6 & 7)))
    VAR_12 |= (1 << (VAR_6 & 3));
   if ((VAR_6 & 3) == 3) {
    FUNC_1(&VAR_5[VAR_13], "%1x", VAR_12);
    VAR_12 = 0;
    --VAR_13;
   }
  }
  if ((VAR_6 & 3) > 0)
   FUNC_1(&VAR_5[VAR_13], "%1x", VAR_12);

  FUNC_0("Export: key = \"%s\", %d bits, value = HEX %s\n",
   VAR_2, VAR_4, VAR_5);
 }
}
