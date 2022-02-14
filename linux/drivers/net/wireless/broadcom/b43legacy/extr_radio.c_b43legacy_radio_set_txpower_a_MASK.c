
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int txpwr_offset; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (int,int ,int) ;

void FUNC_7(struct b43legacy_wldev *VAR_0, u16 VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_0->phy;
 u16 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;

 VAR_1 = FUNC_6(VAR_1, 0, 63);

 VAR_3 = FUNC_2(VAR_1);
 VAR_3 <<= 5;
 VAR_3 &= 0x00E0;
 FUNC_5(VAR_0, 0x0019, VAR_3);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 &= 0x000F;
 FUNC_5(VAR_0, 0x0017, VAR_4 | 0x0020);

 VAR_6 = FUNC_3(VAR_0, 0x3001);
 VAR_6 &= 0x0007;

 VAR_5 = FUNC_1(VAR_1);
 VAR_5 <<= 3;
 VAR_5 |= VAR_6;

 FUNC_4(VAR_0, 0x3001, VAR_5);

 VAR_2->txpwr_offset = VAR_1;


}
