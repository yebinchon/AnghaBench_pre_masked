
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_phy {int rev; int bbatt; scalar_t__ analog; int radio_ver; int radio_rev; int* loopback_gain; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 u16 VAR_3[15] = {0};
 u16 VAR_4[3];
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10;

 VAR_3[0] = FUNC_0(VAR_1, 0x0429);
 VAR_3[1] = FUNC_0(VAR_1, 0x0001);
 VAR_3[2] = FUNC_0(VAR_1, 0x0811);
 VAR_3[3] = FUNC_0(VAR_1, 0x0812);
 if (VAR_2->rev != 1) {
  VAR_3[4] = FUNC_0(VAR_1, 0x0814);
  VAR_3[5] = FUNC_0(VAR_1, 0x0815);
 }
 VAR_3[6] = FUNC_0(VAR_1, 0x005A);
 VAR_3[7] = FUNC_0(VAR_1, 0x0059);
 VAR_3[8] = FUNC_0(VAR_1, 0x0058);
 VAR_3[9] = FUNC_0(VAR_1, 0x000A);
 VAR_3[10] = FUNC_0(VAR_1, 0x0003);
 VAR_3[11] = FUNC_0(VAR_1, 0x080F);
 VAR_3[12] = FUNC_0(VAR_1, 0x0810);
 VAR_3[13] = FUNC_0(VAR_1, 0x002B);
 VAR_3[14] = FUNC_0(VAR_1, 0x0015);
 FUNC_0(VAR_1, 0x002D);
 VAR_5 = VAR_2->bbatt;
 VAR_4[0] = FUNC_3(VAR_1, 0x0052);
 VAR_4[1] = FUNC_3(VAR_1, 0x0043);
 VAR_4[2] = FUNC_3(VAR_1, 0x007A);

 FUNC_2(VAR_1, 0x0429,
       FUNC_0(VAR_1, 0x0429) & 0x3FFF);
 FUNC_2(VAR_1, 0x0001,
       FUNC_0(VAR_1, 0x0001) & 0x8000);
 FUNC_2(VAR_1, 0x0811,
       FUNC_0(VAR_1, 0x0811) | 0x0002);
 FUNC_2(VAR_1, 0x0812,
       FUNC_0(VAR_1, 0x0812) & 0xFFFD);
 FUNC_2(VAR_1, 0x0811,
       FUNC_0(VAR_1, 0x0811) | 0x0001);
 FUNC_2(VAR_1, 0x0812,
       FUNC_0(VAR_1, 0x0812) & 0xFFFE);
 if (VAR_2->rev != 1) {
  FUNC_2(VAR_1, 0x0814,
        FUNC_0(VAR_1, 0x0814) | 0x0001);
  FUNC_2(VAR_1, 0x0815,
        FUNC_0(VAR_1, 0x0815) & 0xFFFE);
  FUNC_2(VAR_1, 0x0814,
        FUNC_0(VAR_1, 0x0814) | 0x0002);
  FUNC_2(VAR_1, 0x0815,
        FUNC_0(VAR_1, 0x0815) & 0xFFFD);
 }
 FUNC_2(VAR_1, 0x0811, FUNC_0(VAR_1, 0x0811) |
       0x000C);
 FUNC_2(VAR_1, 0x0812, FUNC_0(VAR_1, 0x0812) |
       0x000C);

 FUNC_2(VAR_1, 0x0811, (FUNC_0(VAR_1, 0x0811)
       & 0xFFCF) | 0x0030);
 FUNC_2(VAR_1, 0x0812, (FUNC_0(VAR_1, 0x0812)
       & 0xFFCF) | 0x0010);

 FUNC_2(VAR_1, 0x005A, 0x0780);
 FUNC_2(VAR_1, 0x0059, 0xC810);
 FUNC_2(VAR_1, 0x0058, 0x000D);
 if (VAR_2->analog == 0)
  FUNC_2(VAR_1, 0x0003, 0x0122);
 else
  FUNC_2(VAR_1, 0x000A,
        FUNC_0(VAR_1, 0x000A)
        | 0x2000);
 if (VAR_2->rev != 1) {
  FUNC_2(VAR_1, 0x0814,
        FUNC_0(VAR_1, 0x0814) | 0x0004);
  FUNC_2(VAR_1, 0x0815,
        FUNC_0(VAR_1, 0x0815) & 0xFFFB);
 }
 FUNC_2(VAR_1, 0x0003,
       (FUNC_0(VAR_1, 0x0003)
        & 0xFF9F) | 0x0040);
 if (VAR_2->radio_ver == 0x2050 && VAR_2->radio_rev == 2) {
  FUNC_4(VAR_1, 0x0052, 0x0000);
  FUNC_4(VAR_1, 0x0043,
     (FUNC_3(VAR_1, 0x0043)
      & 0xFFF0) | 0x0009);
  VAR_7 = 9;
 } else if (VAR_2->radio_rev == 8) {
  FUNC_4(VAR_1, 0x0043, 0x000F);
  VAR_7 = 15;
 } else
  VAR_7 = 0;

 FUNC_1(VAR_1, 11);

 if (VAR_2->rev >= 3)
  FUNC_2(VAR_1, 0x080F, 0xC020);
 else
  FUNC_2(VAR_1, 0x080F, 0x8020);
 FUNC_2(VAR_1, 0x0810, 0x0000);

 FUNC_2(VAR_1, 0x002B,
       (FUNC_0(VAR_1, 0x002B)
        & 0xFFC0) | 0x0001);
 FUNC_2(VAR_1, 0x002B,
       (FUNC_0(VAR_1, 0x002B)
        & 0xC0FF) | 0x0800);
 FUNC_2(VAR_1, 0x0811,
       FUNC_0(VAR_1, 0x0811) | 0x0100);
 FUNC_2(VAR_1, 0x0812,
       FUNC_0(VAR_1, 0x0812) & 0xCFFF);
 if (VAR_1->dev->bus->sprom.boardflags_lo & VAR_0) {
  if (VAR_2->rev >= 7) {
   FUNC_2(VAR_1, 0x0811,
         FUNC_0(VAR_1, 0x0811)
         | 0x0800);
   FUNC_2(VAR_1, 0x0812,
         FUNC_0(VAR_1, 0x0812)
         | 0x8000);
  }
 }
 FUNC_4(VAR_1, 0x007A,
    FUNC_3(VAR_1, 0x007A)
    & 0x00F7);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_4(VAR_1, 0x0043, VAR_7);
  FUNC_2(VAR_1, 0x0812,
        (FUNC_0(VAR_1, 0x0812)
         & 0xF0FF) | (VAR_6 << 8));
  FUNC_2(VAR_1, 0x0015,
        (FUNC_0(VAR_1, 0x0015)
         & 0x0FFF) | 0xA000);
  FUNC_2(VAR_1, 0x0015,
        (FUNC_0(VAR_1, 0x0015)
         & 0x0FFF) | 0xF000);
  FUNC_5(20);
  if (FUNC_0(VAR_1, 0x002D) >= 0x0DFC)
   break;
 }
 VAR_8 = VAR_6;
 VAR_9 = VAR_7 - VAR_8;

 VAR_10 = 0;
 if (VAR_8 >= 8) {
  FUNC_2(VAR_1, 0x0812,
        FUNC_0(VAR_1, 0x0812)
        | 0x0030);
  for (VAR_6 = VAR_8 - 8; VAR_6 < 16; VAR_6++) {
   FUNC_2(VAR_1, 0x0812,
         (FUNC_0(VAR_1, 0x0812)
          & 0xF0FF) | (VAR_6 << 8));
   FUNC_2(VAR_1, 0x0015,
         (FUNC_0(VAR_1, 0x0015)
          & 0x0FFF) | 0xA000);
   FUNC_2(VAR_1, 0x0015,
         (FUNC_0(VAR_1, 0x0015)
          & 0x0FFF) | 0xF000);
   FUNC_5(20);
   if (FUNC_0(VAR_1, 0x002D) >= 0x0DFC)
    break;
  }
 }

 if (VAR_2->rev != 1) {
  FUNC_2(VAR_1, 0x0814, VAR_3[4]);
  FUNC_2(VAR_1, 0x0815, VAR_3[5]);
 }
 FUNC_2(VAR_1, 0x005A, VAR_3[6]);
 FUNC_2(VAR_1, 0x0059, VAR_3[7]);
 FUNC_2(VAR_1, 0x0058, VAR_3[8]);
 FUNC_2(VAR_1, 0x000A, VAR_3[9]);
 FUNC_2(VAR_1, 0x0003, VAR_3[10]);
 FUNC_2(VAR_1, 0x080F, VAR_3[11]);
 FUNC_2(VAR_1, 0x0810, VAR_3[12]);
 FUNC_2(VAR_1, 0x002B, VAR_3[13]);
 FUNC_2(VAR_1, 0x0015, VAR_3[14]);

 FUNC_1(VAR_1, VAR_5);

 FUNC_4(VAR_1, 0x0052, VAR_4[0]);
 FUNC_4(VAR_1, 0x0043, VAR_4[1]);
 FUNC_4(VAR_1, 0x007A, VAR_4[2]);

 FUNC_2(VAR_1, 0x0811, VAR_3[2] | 0x0003);
 FUNC_5(10);
 FUNC_2(VAR_1, 0x0811, VAR_3[2]);
 FUNC_2(VAR_1, 0x0812, VAR_3[3]);
 FUNC_2(VAR_1, 0x0429, VAR_3[0]);
 FUNC_2(VAR_1, 0x0001, VAR_3[1]);

 VAR_2->loopback_gain[0] = ((VAR_8 * 6) - (VAR_9 * 4)) - 11;
 VAR_2->loopback_gain[1] = (24 - (3 * VAR_10)) * 2;
}
