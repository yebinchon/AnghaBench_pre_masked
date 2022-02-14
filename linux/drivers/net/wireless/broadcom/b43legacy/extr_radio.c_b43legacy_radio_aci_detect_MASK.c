
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_phy {scalar_t__ aci_hw_rssi; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int ) ;

u8 FUNC_3(struct b43legacy_wldev *VAR_0, u8 VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_0->phy;
 u8 VAR_3 = 0;
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_4 = FUNC_0(VAR_0, 0x0403);
 FUNC_2(VAR_0, VAR_1, 0);
 FUNC_1(VAR_0, 0x0403, (VAR_4 & 0xFFF8) | 5);
 if (VAR_2->aci_hw_rssi)
  VAR_5 = FUNC_0(VAR_0, 0x048A) & 0x3F;
 else
  VAR_5 = VAR_4 & 0x3F;

 if (VAR_5 > 32)
  VAR_5 -= 64;
 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  VAR_6 = (FUNC_0(VAR_0, 0x047F) >> 8) & 0x3F;
  if (VAR_6 > 32)
   VAR_6 -= 64;
  if (VAR_6 < VAR_5)
   VAR_8++;
  if (VAR_8 >= 20)
   VAR_3 = 1;
 }
 FUNC_1(VAR_0, 0x0403, VAR_4);

 return VAR_3;
}
