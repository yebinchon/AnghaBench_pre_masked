
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 scalar_t__ FUNC_0 (scalar_t__**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct b43_wldev*,scalar_t__,scalar_t__) ;
 scalar_t__** VAR_1 ;

void FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 u16 *VAR_4 = ((void*)0);
 u16 VAR_5, VAR_6;

 switch (VAR_3->rev) {
 case 1:
  VAR_4 = VAR_1[0];
  VAR_5 = FUNC_0(VAR_1);
  break;
 default:
  FUNC_1(1);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4 += 2)
  FUNC_2(VAR_2, VAR_0 | VAR_4[0], VAR_4[1]);
}
