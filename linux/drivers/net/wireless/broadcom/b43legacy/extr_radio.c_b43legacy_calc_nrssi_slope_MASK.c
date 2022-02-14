
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int type; int rev; int analog; int nrssislope; int* nrssi; int radio_rev; int channel; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
typedef int s16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_10 (struct b43legacy_wldev*) ;
 int FUNC_11 (struct b43legacy_wldev*,int ) ;
 int FUNC_12 (struct b43legacy_wldev*,int,int) ;
 int FUNC_13 (int) ;

void FUNC_14(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_3->phy;
 u16 VAR_5[18] = { 0 };
 u16 VAR_6;
 s16 VAR_7;
 s16 VAR_8;

 switch (VAR_4->type) {
 case 129:
  VAR_5[0] = FUNC_6(VAR_3, 0x007A);
  VAR_5[1] = FUNC_6(VAR_3, 0x0052);
  VAR_5[2] = FUNC_6(VAR_3, 0x0043);
  VAR_5[3] = FUNC_4(VAR_3, 0x0030);
  VAR_5[4] = FUNC_4(VAR_3, 0x0026);
  VAR_5[5] = FUNC_4(VAR_3, 0x0015);
  VAR_5[6] = FUNC_4(VAR_3, 0x002A);
  VAR_5[7] = FUNC_4(VAR_3, 0x0020);
  VAR_5[8] = FUNC_4(VAR_3, 0x005A);
  VAR_5[9] = FUNC_4(VAR_3, 0x0059);
  VAR_5[10] = FUNC_4(VAR_3, 0x0058);
  VAR_5[11] = FUNC_8(VAR_3, 0x03E2);
  VAR_5[12] = FUNC_8(VAR_3, 0x03E6);
  VAR_5[13] = FUNC_8(VAR_3, VAR_0);

  VAR_6 = FUNC_6(VAR_3, 0x007A);
  VAR_6 &= (VAR_4->rev >= 5) ? 0x007F : 0x000F;
  FUNC_7(VAR_3, 0x007A, VAR_6);
  FUNC_5(VAR_3, 0x0030, 0x00FF);
  FUNC_12(VAR_3, 0x03EC, 0x7F7F);
  FUNC_5(VAR_3, 0x0026, 0x0000);
  FUNC_5(VAR_3, 0x0015,
        FUNC_4(VAR_3, 0x0015) | 0x0020);
  FUNC_5(VAR_3, 0x002A, 0x08A3);
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     | 0x0080);

  VAR_7 = (s16)FUNC_4(VAR_3, 0x0027);
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     & 0x007F);
  if (VAR_4->analog >= 2)
   FUNC_12(VAR_3, 0x03E6, 0x0040);
  else if (VAR_4->analog == 0)
   FUNC_12(VAR_3, 0x03E6, 0x0122);
  else
   FUNC_12(VAR_3, VAR_0,
       FUNC_8(VAR_3,
       VAR_0) & 0x2000);
  FUNC_5(VAR_3, 0x0020, 0x3F3F);
  FUNC_5(VAR_3, 0x0015, 0xF330);
  FUNC_7(VAR_3, 0x005A, 0x0060);
  FUNC_7(VAR_3, 0x0043,
     FUNC_6(VAR_3, 0x0043)
     & 0x00F0);
  FUNC_5(VAR_3, 0x005A, 0x0480);
  FUNC_5(VAR_3, 0x0059, 0x0810);
  FUNC_5(VAR_3, 0x0058, 0x000D);
  FUNC_13(20);

  VAR_8 = (s16)FUNC_4(VAR_3, 0x0027);
  FUNC_5(VAR_3, 0x0030, VAR_5[3]);
  FUNC_7(VAR_3, 0x007A, VAR_5[0]);
  FUNC_12(VAR_3, 0x03E2, VAR_5[11]);
  FUNC_5(VAR_3, 0x0026, VAR_5[4]);
  FUNC_5(VAR_3, 0x0015, VAR_5[5]);
  FUNC_5(VAR_3, 0x002A, VAR_5[6]);
  FUNC_11(VAR_3, VAR_4->channel);
  if (VAR_4->analog != 0)
   FUNC_12(VAR_3, 0x03F4, VAR_5[13]);

  FUNC_5(VAR_3, 0x0020, VAR_5[7]);
  FUNC_5(VAR_3, 0x005A, VAR_5[8]);
  FUNC_5(VAR_3, 0x0059, VAR_5[9]);
  FUNC_5(VAR_3, 0x0058, VAR_5[10]);
  FUNC_7(VAR_3, 0x0052, VAR_5[1]);
  FUNC_7(VAR_3, 0x0043, VAR_5[2]);

  if (VAR_7 == VAR_8)
   VAR_4->nrssislope = 0x00010000;
  else
   VAR_4->nrssislope = 0x00400000 / (VAR_7 - VAR_8);

  if (VAR_7 <= -4) {
   VAR_4->nrssi[0] = VAR_7;
   VAR_4->nrssi[1] = VAR_8;
  }
  break;
 case 128:
  if (VAR_4->radio_rev >= 9)
   return;
  if (VAR_4->radio_rev == 8)
   FUNC_1(VAR_3);

  FUNC_5(VAR_3, VAR_1,
        FUNC_4(VAR_3, VAR_1)
        & 0x7FFF);
  FUNC_5(VAR_3, 0x0802,
        FUNC_4(VAR_3, 0x0802) & 0xFFFC);
  VAR_5[7] = FUNC_8(VAR_3, 0x03E2);
  FUNC_12(VAR_3, 0x03E2,
      FUNC_8(VAR_3, 0x03E2) | 0x8000);
  VAR_5[0] = FUNC_6(VAR_3, 0x007A);
  VAR_5[1] = FUNC_6(VAR_3, 0x0052);
  VAR_5[2] = FUNC_6(VAR_3, 0x0043);
  VAR_5[3] = FUNC_4(VAR_3, 0x0015);
  VAR_5[4] = FUNC_4(VAR_3, 0x005A);
  VAR_5[5] = FUNC_4(VAR_3, 0x0059);
  VAR_5[6] = FUNC_4(VAR_3, 0x0058);
  VAR_5[8] = FUNC_8(VAR_3, 0x03E6);
  VAR_5[9] = FUNC_8(VAR_3, VAR_0);
  if (VAR_4->rev >= 3) {
   VAR_5[10] = FUNC_4(VAR_3, 0x002E);
   VAR_5[11] = FUNC_4(VAR_3, 0x002F);
   VAR_5[12] = FUNC_4(VAR_3, 0x080F);
   VAR_5[13] = FUNC_4(VAR_3,
      VAR_2);
   VAR_5[14] = FUNC_4(VAR_3, 0x0801);
   VAR_5[15] = FUNC_4(VAR_3, 0x0060);
   VAR_5[16] = FUNC_4(VAR_3, 0x0014);
   VAR_5[17] = FUNC_4(VAR_3, 0x0478);
   FUNC_5(VAR_3, 0x002E, 0);
   FUNC_5(VAR_3, VAR_2, 0);
   switch (VAR_4->rev) {
   case 4: case 6: case 7:
    FUNC_5(VAR_3, 0x0478,
          FUNC_4(VAR_3,
          0x0478) | 0x0100);
    FUNC_5(VAR_3, 0x0801,
          FUNC_4(VAR_3,
          0x0801) | 0x0040);
    break;
   case 3: case 5:
    FUNC_5(VAR_3, 0x0801,
          FUNC_4(VAR_3,
          0x0801) & 0xFFBF);
    break;
   }
   FUNC_5(VAR_3, 0x0060,
         FUNC_4(VAR_3, 0x0060)
         | 0x0040);
   FUNC_5(VAR_3, 0x0014,
         FUNC_4(VAR_3, 0x0014)
         | 0x0200);
  }
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     | 0x0070);
  FUNC_9(VAR_3, 0, 8, 0);
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     & 0x00F7);
  if (VAR_4->rev >= 2) {
   FUNC_5(VAR_3, 0x0811,
         (FUNC_4(VAR_3, 0x0811)
         & 0xFFCF) | 0x0030);
   FUNC_5(VAR_3, 0x0812,
         (FUNC_4(VAR_3, 0x0812)
         & 0xFFCF) | 0x0010);
  }
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     | 0x0080);
  FUNC_13(20);

  VAR_7 = (s16)((FUNC_4(VAR_3, 0x047F) >> 8) & 0x003F);
  if (VAR_7 >= 0x0020)
   VAR_7 -= 0x0040;

  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     & 0x007F);
  if (VAR_4->analog >= 2)
   FUNC_5(VAR_3, 0x0003,
         (FUNC_4(VAR_3, 0x0003)
         & 0xFF9F) | 0x0040);

  FUNC_12(VAR_3, VAR_0,
      FUNC_8(VAR_3,
      VAR_0) | 0x2000);
  FUNC_7(VAR_3, 0x007A,
     FUNC_6(VAR_3, 0x007A)
     | 0x000F);
  FUNC_5(VAR_3, 0x0015, 0xF330);
  if (VAR_4->rev >= 2) {
   FUNC_5(VAR_3, 0x0812,
         (FUNC_4(VAR_3, 0x0812)
         & 0xFFCF) | 0x0020);
   FUNC_5(VAR_3, 0x0811,
         (FUNC_4(VAR_3, 0x0811)
         & 0xFFCF) | 0x0020);
  }

  FUNC_9(VAR_3, 3, 0, 1);
  if (VAR_4->radio_rev == 8)
   FUNC_7(VAR_3, 0x0043, 0x001F);
  else {
   VAR_6 = FUNC_6(VAR_3, 0x0052) & 0xFF0F;
   FUNC_7(VAR_3, 0x0052, VAR_6 | 0x0060);
   VAR_6 = FUNC_6(VAR_3, 0x0043) & 0xFFF0;
   FUNC_7(VAR_3, 0x0043, VAR_6 | 0x0009);
  }
  FUNC_5(VAR_3, 0x005A, 0x0480);
  FUNC_5(VAR_3, 0x0059, 0x0810);
  FUNC_5(VAR_3, 0x0058, 0x000D);
  FUNC_13(20);
  VAR_8 = (s16)((FUNC_4(VAR_3, 0x047F) >> 8) & 0x003F);
  if (VAR_8 >= 0x0020)
   VAR_8 -= 0x0040;
  if (VAR_7 == VAR_8)
   VAR_4->nrssislope = 0x00010000;
  else
   VAR_4->nrssislope = 0x00400000 / (VAR_7 - VAR_8);
  if (VAR_7 >= -4) {
   VAR_4->nrssi[0] = VAR_8;
   VAR_4->nrssi[1] = VAR_7;
  }
  if (VAR_4->rev >= 3) {
   FUNC_5(VAR_3, 0x002E, VAR_5[10]);
   FUNC_5(VAR_3, 0x002F, VAR_5[11]);
   FUNC_5(VAR_3, 0x080F, VAR_5[12]);
   FUNC_5(VAR_3, VAR_2,
         VAR_5[13]);
  }
  if (VAR_4->rev >= 2) {
   FUNC_5(VAR_3, 0x0812,
         FUNC_4(VAR_3, 0x0812)
         & 0xFFCF);
   FUNC_5(VAR_3, 0x0811,
         FUNC_4(VAR_3, 0x0811)
         & 0xFFCF);
  }

  FUNC_7(VAR_3, 0x007A, VAR_5[0]);
  FUNC_7(VAR_3, 0x0052, VAR_5[1]);
  FUNC_7(VAR_3, 0x0043, VAR_5[2]);
  FUNC_12(VAR_3, 0x03E2, VAR_5[7]);
  FUNC_12(VAR_3, 0x03E6, VAR_5[8]);
  FUNC_12(VAR_3, VAR_0, VAR_5[9]);
  FUNC_5(VAR_3, 0x0015, VAR_5[3]);
  FUNC_5(VAR_3, 0x005A, VAR_5[4]);
  FUNC_5(VAR_3, 0x0059, VAR_5[5]);
  FUNC_5(VAR_3, 0x0058, VAR_5[6]);
  FUNC_11(VAR_3, VAR_4->channel);
  FUNC_5(VAR_3, 0x0802,
        FUNC_4(VAR_3, 0x0802) | 0x0003);
  FUNC_10(VAR_3);
  FUNC_5(VAR_3, VAR_1,
        FUNC_4(VAR_3, VAR_1)
        | 0x8000);
  if (VAR_4->rev >= 3) {
   FUNC_5(VAR_3, 0x0801, VAR_5[14]);
   FUNC_5(VAR_3, 0x0060, VAR_5[15]);
   FUNC_5(VAR_3, 0x0014, VAR_5[16]);
   FUNC_5(VAR_3, 0x0478, VAR_5[17]);
  }
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(1);
 }
}
