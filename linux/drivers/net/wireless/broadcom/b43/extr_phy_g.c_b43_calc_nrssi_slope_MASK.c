
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {scalar_t__ type; int radio_rev; int rev; int channel; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int nrssislope; int* nrssi; } ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (struct b43_wldev*,int) ;
 int FUNC_14 (struct b43_wldev*,int,int,int) ;
 int FUNC_15 (struct b43_wldev*) ;
 int FUNC_16 (struct b43_wldev*,int ) ;
 int FUNC_17 (struct b43_wldev*,int,int) ;
 int FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 u16 VAR_7[18] = { 0 };
 u16 VAR_8;
 s16 VAR_9, VAR_10;

 FUNC_0(VAR_5->type != VAR_1);

 if (VAR_5->radio_rev >= 9)
  return;
 if (VAR_5->radio_rev == 8)
  FUNC_1(VAR_4);

 FUNC_4(VAR_4, VAR_2, 0x7FFF);
 FUNC_4(VAR_4, 0x0802, 0xFFFC);
 VAR_7[7] = FUNC_13(VAR_4, 0x03E2);
 FUNC_17(VAR_4, 0x03E2, FUNC_13(VAR_4, 0x03E2) | 0x8000);
 VAR_7[0] = FUNC_10(VAR_4, 0x007A);
 VAR_7[1] = FUNC_10(VAR_4, 0x0052);
 VAR_7[2] = FUNC_10(VAR_4, 0x0043);
 VAR_7[3] = FUNC_6(VAR_4, 0x0015);
 VAR_7[4] = FUNC_6(VAR_4, 0x005A);
 VAR_7[5] = FUNC_6(VAR_4, 0x0059);
 VAR_7[6] = FUNC_6(VAR_4, 0x0058);
 VAR_7[8] = FUNC_13(VAR_4, 0x03E6);
 VAR_7[9] = FUNC_13(VAR_4, VAR_0);
 if (VAR_5->rev >= 3) {
  VAR_7[10] = FUNC_6(VAR_4, 0x002E);
  VAR_7[11] = FUNC_6(VAR_4, 0x002F);
  VAR_7[12] = FUNC_6(VAR_4, 0x080F);
  VAR_7[13] = FUNC_6(VAR_4, VAR_3);
  VAR_7[14] = FUNC_6(VAR_4, 0x0801);
  VAR_7[15] = FUNC_6(VAR_4, 0x0060);
  VAR_7[16] = FUNC_6(VAR_4, 0x0014);
  VAR_7[17] = FUNC_6(VAR_4, 0x0478);
  FUNC_8(VAR_4, 0x002E, 0);
  FUNC_8(VAR_4, VAR_3, 0);
  switch (VAR_5->rev) {
  case 4:
  case 6:
  case 7:
   FUNC_7(VAR_4, 0x0478, 0x0100);
   FUNC_7(VAR_4, 0x0801, 0x0040);
   break;
  case 3:
  case 5:
   FUNC_4(VAR_4, 0x0801, 0xFFBF);
   break;
  }
  FUNC_7(VAR_4, 0x0060, 0x0040);
  FUNC_7(VAR_4, 0x0014, 0x0200);
 }
 FUNC_11(VAR_4, 0x007A, 0x0070);
 FUNC_14(VAR_4, 0, 8, 0);
 FUNC_9(VAR_4, 0x007A, 0x00F7);
 if (VAR_5->rev >= 2) {
  FUNC_5(VAR_4, 0x0811, 0xFFCF, 0x0030);
  FUNC_5(VAR_4, 0x0812, 0xFFCF, 0x0010);
 }
 FUNC_11(VAR_4, 0x007A, 0x0080);
 FUNC_18(20);

 VAR_9 = (s16) ((FUNC_6(VAR_4, 0x047F) >> 8) & 0x003F);
 if (VAR_9 >= 0x0020)
  VAR_9 -= 0x0040;

 FUNC_9(VAR_4, 0x007A, 0x007F);
 if (VAR_5->rev >= 2) {
  FUNC_5(VAR_4, 0x0003, 0xFF9F, 0x0040);
 }

 FUNC_17(VAR_4, VAR_0,
      FUNC_13(VAR_4, VAR_0)
      | 0x2000);
 FUNC_11(VAR_4, 0x007A, 0x000F);
 FUNC_8(VAR_4, 0x0015, 0xF330);
 if (VAR_5->rev >= 2) {
  FUNC_5(VAR_4, 0x0812, 0xFFCF, 0x0020);
  FUNC_5(VAR_4, 0x0811, 0xFFCF, 0x0020);
 }

 FUNC_14(VAR_4, 3, 0, 1);
 if (VAR_5->radio_rev == 8) {
  FUNC_12(VAR_4, 0x0043, 0x001F);
 } else {
  VAR_8 = FUNC_10(VAR_4, 0x0052) & 0xFF0F;
  FUNC_12(VAR_4, 0x0052, VAR_8 | 0x0060);
  VAR_8 = FUNC_10(VAR_4, 0x0043) & 0xFFF0;
  FUNC_12(VAR_4, 0x0043, VAR_8 | 0x0009);
 }
 FUNC_8(VAR_4, 0x005A, 0x0480);
 FUNC_8(VAR_4, 0x0059, 0x0810);
 FUNC_8(VAR_4, 0x0058, 0x000D);
 FUNC_18(20);
 VAR_10 = (s16) ((FUNC_6(VAR_4, 0x047F) >> 8) & 0x003F);
 if (VAR_10 >= 0x0020)
  VAR_10 -= 0x0040;
 if (VAR_9 == VAR_10)
  VAR_6->nrssislope = 0x00010000;
 else
  VAR_6->nrssislope = 0x00400000 / (VAR_9 - VAR_10);
 if (VAR_9 >= -4) {
  VAR_6->nrssi[0] = VAR_10;
  VAR_6->nrssi[1] = VAR_9;
 }
 if (VAR_5->rev >= 3) {
  FUNC_8(VAR_4, 0x002E, VAR_7[10]);
  FUNC_8(VAR_4, 0x002F, VAR_7[11]);
  FUNC_8(VAR_4, 0x080F, VAR_7[12]);
  FUNC_8(VAR_4, VAR_3, VAR_7[13]);
 }
 if (VAR_5->rev >= 2) {
  FUNC_4(VAR_4, 0x0812, 0xFFCF);
  FUNC_4(VAR_4, 0x0811, 0xFFCF);
 }

 FUNC_12(VAR_4, 0x007A, VAR_7[0]);
 FUNC_12(VAR_4, 0x0052, VAR_7[1]);
 FUNC_12(VAR_4, 0x0043, VAR_7[2]);
 FUNC_17(VAR_4, 0x03E2, VAR_7[7]);
 FUNC_17(VAR_4, 0x03E6, VAR_7[8]);
 FUNC_17(VAR_4, VAR_0, VAR_7[9]);
 FUNC_8(VAR_4, 0x0015, VAR_7[3]);
 FUNC_8(VAR_4, 0x005A, VAR_7[4]);
 FUNC_8(VAR_4, 0x0059, VAR_7[5]);
 FUNC_8(VAR_4, 0x0058, VAR_7[6]);
 FUNC_16(VAR_4, VAR_5->channel);
 FUNC_7(VAR_4, 0x0802, (0x0001 | 0x0002));
 FUNC_15(VAR_4);
 FUNC_7(VAR_4, VAR_2, 0x8000);
 if (VAR_5->rev >= 3) {
  FUNC_8(VAR_4, 0x0801, VAR_7[14]);
  FUNC_8(VAR_4, 0x0060, VAR_7[15]);
  FUNC_8(VAR_4, 0x0014, VAR_7[16]);
  FUNC_8(VAR_4, 0x0478, VAR_7[17]);
 }
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
