
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int radio_ver; int channel; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_8(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 u16 VAR_3;
 int VAR_4;

 FUNC_7(VAR_1, 0x03EC, 0x3F22);
 FUNC_2(VAR_1, 0x0020, 0x301C);
 FUNC_2(VAR_1, 0x0026, 0x0000);
 FUNC_2(VAR_1, 0x0030, 0x00C6);
 FUNC_2(VAR_1, 0x0088, 0x3E00);
 VAR_4 = 0x3C3D;
 for (VAR_3 = 0x0089; VAR_3 < 0x00A7; VAR_3++) {
  FUNC_2(VAR_1, VAR_3, VAR_4);
  VAR_4 -= 0x0202;
 }
 FUNC_2(VAR_1, 0x03E4, 0x3000);
 FUNC_4(VAR_1, VAR_2->channel, 0);
 if (VAR_2->radio_ver != 0x2050) {
  FUNC_6(VAR_1, 0x0075, 0x0080);
  FUNC_6(VAR_1, 0x0079, 0x0081);
 }
 FUNC_6(VAR_1, 0x0050, 0x0020);
 FUNC_6(VAR_1, 0x0050, 0x0023);
 if (VAR_2->radio_ver == 0x2050) {
  FUNC_6(VAR_1, 0x0050, 0x0020);
  FUNC_6(VAR_1, 0x005A, 0x0070);
  FUNC_6(VAR_1, 0x005B, 0x007B);
  FUNC_6(VAR_1, 0x005C, 0x00B0);
  FUNC_6(VAR_1, 0x007A, 0x000F);
  FUNC_2(VAR_1, 0x0038, 0x0677);
  FUNC_3(VAR_1);
 }
 FUNC_2(VAR_1, 0x0014, 0x0080);
 FUNC_2(VAR_1, 0x0032, 0x00CA);
 FUNC_2(VAR_1, 0x0032, 0x00CC);
 FUNC_2(VAR_1, 0x0035, 0x07C2);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, 0x0026, 0xCC00);
 if (VAR_2->radio_ver != 0x2050)
  FUNC_2(VAR_1, 0x0026, 0xCE00);
 FUNC_7(VAR_1, VAR_0, 0x1000);
 FUNC_2(VAR_1, 0x002A, 0x88A3);
 if (VAR_2->radio_ver != 0x2050)
  FUNC_2(VAR_1, 0x002A, 0x88C2);
 FUNC_5(VAR_1, 0xFFFF, 0xFFFF, 0xFFFF);
 FUNC_0(VAR_1);
}
