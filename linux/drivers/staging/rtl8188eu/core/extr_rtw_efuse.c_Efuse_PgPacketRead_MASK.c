
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct adapter*,scalar_t__,int*) ;
 int FUNC_6 (int,int*,int*) ;
 int FUNC_7 (int*,int,int) ;

int FUNC_8(struct adapter *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 u8 VAR_7 = VAR_3;
 int VAR_8 = 1;
 int VAR_9 = 1;
 u8 VAR_10, VAR_11 = 0;
 u16 VAR_12 = 0;
 u8 VAR_13 = 0, VAR_14 = 0;
 u8 VAR_15 = 0;
 u8 VAR_16[8];
 u8 VAR_17 = 0;

 if (!VAR_6)
  return 0;
 if (VAR_5 > VAR_0)
  return 0;

 FUNC_7(VAR_6, 0xff, sizeof(u8) * VAR_1);
 FUNC_7(VAR_16, 0xff, sizeof(u8) * VAR_1);




 while (VAR_8 && FUNC_1(VAR_12)) {

  if (VAR_7 & VAR_3) {
   if (FUNC_5(VAR_4, VAR_12, &VAR_10) && (VAR_10 != 0xFF)) {
    if (FUNC_3(VAR_10)) {
     VAR_17 = VAR_10;
     VAR_12++;
     FUNC_5(VAR_4, VAR_12, &VAR_10);
     if (!FUNC_0(VAR_10)) {
      VAR_13 = ((VAR_17 & 0xE0) >> 5) | ((VAR_10 & 0xF0) >> 1);
      VAR_14 = VAR_10 & 0x0F;
     } else {
      FUNC_2("Error, All words disabled\n");
      VAR_12++;
      continue;
     }
    } else {
     VAR_13 = (VAR_10 >> 4) & 0x0F;
     VAR_14 = VAR_10 & 0x0F;
    }
    VAR_11 = FUNC_4(VAR_14);
    VAR_9 = 1;

    if (VAR_13 == VAR_5) {
     for (VAR_15 = 0; VAR_15 < VAR_11 * 2; VAR_15++) {
      if (FUNC_5(VAR_4, VAR_12 + 1 + VAR_15, &VAR_10)) {
       VAR_16[VAR_15] = VAR_10;
       if (VAR_10 != 0xff)
        VAR_9 = 0;
      }
     }
     if (!VAR_9) {
      VAR_7 = VAR_2;
     } else {
      VAR_12 = VAR_12 + (VAR_11 * 2) + 1;
      VAR_7 = VAR_3;
     }
    } else {
     VAR_12 = VAR_12 + (VAR_11 * 2) + 1;
     VAR_7 = VAR_3;
    }
   } else {
    VAR_8 = 0;
   }
  } else if (VAR_7 & VAR_2) {

   FUNC_6(VAR_14, VAR_16, VAR_6);
   VAR_12 = VAR_12 + (VAR_11 * 2) + 1;
   VAR_7 = VAR_3;
  }
 }

 if ((VAR_6[0] == 0xff) && (VAR_6[1] == 0xff) && (VAR_6[2] == 0xff) && (VAR_6[3] == 0xff) &&
     (VAR_6[4] == 0xff) && (VAR_6[5] == 0xff) && (VAR_6[6] == 0xff) && (VAR_6[7] == 0xff))
  return 0;
 else
  return 1;
}
