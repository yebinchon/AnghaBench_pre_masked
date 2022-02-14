
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_0(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;

 if (VAR_3->radio_ver != 0x2050)
  return 0;
 if (VAR_3->radio_rev == 1)
  return VAR_0 | VAR_1;
 if (VAR_3->radio_rev < 6)
  return VAR_0;
 if (VAR_3->radio_rev == 8)
  return VAR_1;
 return 0;
}
