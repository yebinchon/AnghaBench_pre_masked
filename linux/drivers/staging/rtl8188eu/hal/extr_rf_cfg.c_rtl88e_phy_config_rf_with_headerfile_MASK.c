
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,int,int) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = FUNC_0(VAR_0);
 u32 *VAR_4 = VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2 += 2) {
  u32 VAR_5 = VAR_4[VAR_2];
  u32 VAR_6 = VAR_4[VAR_2+1];

  if (VAR_5 < 0xCDCDCDCD) {
   FUNC_3(VAR_1, VAR_5, VAR_6);
   continue;
  } else {
   if (!FUNC_2(VAR_1, VAR_4[VAR_2])) {
    FUNC_1(VAR_5, VAR_6, VAR_2);
    while (VAR_6 != 0xDEAD && VAR_6 != 0xCDEF &&
           VAR_6 != 0xCDCD && VAR_2 < VAR_3 - 2)
     FUNC_1(VAR_5, VAR_6, VAR_2);
    VAR_2 -= 2;
   } else {
    FUNC_1(VAR_5, VAR_6, VAR_2);
    while (VAR_6 != 0xDEAD && VAR_6 != 0xCDEF &&
           VAR_6 != 0xCDCD && VAR_2 < VAR_3 - 2) {
      FUNC_3(VAR_1, VAR_5, VAR_6);
      FUNC_1(VAR_5, VAR_6, VAR_2);
    }

    while (VAR_6 != 0xDEAD && VAR_2 < VAR_3 - 2)
     FUNC_1(VAR_5, VAR_6, VAR_2);
   }
  }
 }
 return 1;
}
