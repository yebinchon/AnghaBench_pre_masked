
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1, u16 VAR_2,
     u16 VAR_3, int VAR_4, int VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += VAR_4) {
  VAR_6 = FUNC_0(VAR_0, VAR_1);
  if ((VAR_6 & VAR_2) == VAR_3)
   return 1;
  FUNC_1(VAR_4);
 }
 return 0;
}
