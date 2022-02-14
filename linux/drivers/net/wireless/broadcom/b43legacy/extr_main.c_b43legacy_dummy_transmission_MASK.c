
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int type; int radio_ver; int radio_rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,unsigned int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int ) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 unsigned int VAR_3;
 unsigned int VAR_4;
 u16 VAR_5;
 u32 VAR_6[5] = {
  0x00000000,
  0x00D40000,
  0x00000000,
  0x01000000,
  0x00000000,
 };

 switch (VAR_2->type) {
 case 129:
 case 128:
  VAR_4 = 0xFA;
  VAR_6[0] = 0x000B846E;
  break;
 default:
  FUNC_0(1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
  FUNC_2(VAR_1, VAR_3 * 4, VAR_6[VAR_3]);


 FUNC_4(VAR_1, VAR_0);

 FUNC_5(VAR_1, 0x0568, 0x0000);
 FUNC_5(VAR_1, 0x07C0, 0x0000);
 FUNC_5(VAR_1, 0x050C, 0x0000);
 FUNC_5(VAR_1, 0x0508, 0x0000);
 FUNC_5(VAR_1, 0x050A, 0x0000);
 FUNC_5(VAR_1, 0x054C, 0x0000);
 FUNC_5(VAR_1, 0x056A, 0x0014);
 FUNC_5(VAR_1, 0x0568, 0x0826);
 FUNC_5(VAR_1, 0x0500, 0x0000);
 FUNC_5(VAR_1, 0x0502, 0x0030);

 if (VAR_2->radio_ver == 0x2050 && VAR_2->radio_rev <= 0x5)
  FUNC_1(VAR_1, 0x0051, 0x0017);
 for (VAR_3 = 0x00; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_3(VAR_1, 0x050E);
  if (VAR_5 & 0x0080)
   break;
  FUNC_6(10);
 }
 for (VAR_3 = 0x00; VAR_3 < 0x0A; VAR_3++) {
  VAR_5 = FUNC_3(VAR_1, 0x050E);
  if (VAR_5 & 0x0400)
   break;
  FUNC_6(10);
 }
 for (VAR_3 = 0x00; VAR_3 < 0x0A; VAR_3++) {
  VAR_5 = FUNC_3(VAR_1, 0x0690);
  if (!(VAR_5 & 0x0100))
   break;
  FUNC_6(10);
 }
 if (VAR_2->radio_ver == 0x2050 && VAR_2->radio_rev <= 0x5)
  FUNC_1(VAR_1, 0x0051, 0x0037);
}
