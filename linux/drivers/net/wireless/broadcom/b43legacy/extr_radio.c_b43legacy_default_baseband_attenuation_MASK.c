
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int radio_ver; int radio_rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;



u16 FUNC_0(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;

 if (VAR_1->radio_ver == 0x2050 && VAR_1->radio_rev < 6)
  return 0;
 return 2;
}
