
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {scalar_t__ aci_hw_rssi; } ;


 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int) ;

__attribute__((used)) static u8 FUNC_3(struct b43_wldev *VAR_0, u8 VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;
 struct b43_phy_g *VAR_3 = VAR_2->g;
 u8 VAR_4 = 0;
 u16 VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_5 = FUNC_0(VAR_0, 0x0403);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, 0x0403, (VAR_5 & 0xFFF8) | 5);
 if (VAR_3->aci_hw_rssi)
  VAR_6 = FUNC_0(VAR_0, 0x048A) & 0x3F;
 else
  VAR_6 = VAR_5 & 0x3F;

 if (VAR_6 > 32)
  VAR_6 -= 64;
 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  VAR_7 = (FUNC_0(VAR_0, 0x047F) >> 8) & 0x3F;
  if (VAR_7 > 32)
   VAR_7 -= 64;
  if (VAR_7 < VAR_6)
   VAR_9++;
  if (VAR_9 >= 20)
   VAR_4 = 1;
 }
 FUNC_1(VAR_0, 0x0403, VAR_5);

 return VAR_4;
}
