
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int type; int radio_ver; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int) ;

u16 FUNC_4(struct b43legacy_wldev *VAR_2, u16 VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_2->phy;

 switch (VAR_4->type) {
 case 129:
  if (VAR_4->radio_ver == 0x2053) {
   if (VAR_3 < 0x70)
    VAR_3 += 0x80;
   else if (VAR_3 < 0x80)
    VAR_3 += 0x70;
  } else if (VAR_4->radio_ver == 0x2050)
   VAR_3 |= 0x80;
  else
   FUNC_1(1);
  break;
 case 128:
  VAR_3 |= 0x80;
  break;
 default:
  FUNC_0(1);
 }

 FUNC_3(VAR_2, VAR_0, VAR_3);
 return FUNC_2(VAR_2, VAR_1);
}
