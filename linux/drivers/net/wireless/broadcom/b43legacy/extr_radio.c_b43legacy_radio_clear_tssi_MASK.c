
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int type; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;




 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int,int) ;

void FUNC_1(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;

 switch (VAR_2->type) {
 case 129:
 case 128:
  FUNC_0(VAR_1, VAR_0, 0x0058,
          0x7F7F);
  FUNC_0(VAR_1, VAR_0, 0x005a,
          0x7F7F);
  FUNC_0(VAR_1, VAR_0, 0x0070,
          0x7F7F);
  FUNC_0(VAR_1, VAR_0, 0x0072,
          0x7F7F);
  break;
 }
}
