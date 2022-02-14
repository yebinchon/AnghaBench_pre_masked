
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43_phy {int rev; int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct TYPE_6__ {int att; } ;
struct b43_phy_g {int max_lb_gain; int trsw_rx_gain; TYPE_3__ bbatt; } ;
struct TYPE_5__ {TYPE_1__* bus_sprom; } ;
struct TYPE_4__ {int boardflags_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_11)
{
 struct b43_phy *VAR_12 = &VAR_11->phy;
 struct b43_phy_g *VAR_13 = VAR_12->g;
 u16 VAR_14[16] = { 0 };
 u16 VAR_15[3];
 u16 VAR_16;
 u16 VAR_17, VAR_18, VAR_19;
 u16 VAR_20;
 u16 VAR_21, VAR_22;

 VAR_14[0] = FUNC_4(VAR_11, VAR_4);
 VAR_14[1] = FUNC_4(VAR_11, VAR_3);
 VAR_14[2] = FUNC_4(VAR_11, VAR_9);
 VAR_14[3] = FUNC_4(VAR_11, VAR_10);
 if (VAR_12->rev != 1) {
  VAR_14[4] = FUNC_4(VAR_11, VAR_1);
  VAR_14[5] = FUNC_4(VAR_11, VAR_2);
 }
 VAR_14[6] = FUNC_4(VAR_11, FUNC_0(0x5A));
 VAR_14[7] = FUNC_4(VAR_11, FUNC_0(0x59));
 VAR_14[8] = FUNC_4(VAR_11, FUNC_0(0x58));
 VAR_14[9] = FUNC_4(VAR_11, FUNC_0(0x0A));
 VAR_14[10] = FUNC_4(VAR_11, FUNC_0(0x03));
 VAR_14[11] = FUNC_4(VAR_11, VAR_7);
 VAR_14[12] = FUNC_4(VAR_11, VAR_5);
 VAR_14[13] = FUNC_4(VAR_11, FUNC_0(0x2B));
 VAR_14[14] = FUNC_4(VAR_11, VAR_8);
 VAR_14[15] = FUNC_4(VAR_11, VAR_6);
 VAR_16 = VAR_13->bbatt.att;
 VAR_15[0] = FUNC_9(VAR_11, 0x52);
 VAR_15[1] = FUNC_9(VAR_11, 0x43);
 VAR_15[2] = FUNC_9(VAR_11, 0x7A);

 FUNC_2(VAR_11, VAR_4, 0x3FFF);
 FUNC_5(VAR_11, VAR_3, 0x8000);
 FUNC_5(VAR_11, VAR_9, 0x0002);
 FUNC_2(VAR_11, VAR_10, 0xFFFD);
 FUNC_5(VAR_11, VAR_9, 0x0001);
 FUNC_2(VAR_11, VAR_10, 0xFFFE);
 if (VAR_12->rev != 1) {
  FUNC_5(VAR_11, VAR_1, 0x0001);
  FUNC_2(VAR_11, VAR_2, 0xFFFE);
  FUNC_5(VAR_11, VAR_1, 0x0002);
  FUNC_2(VAR_11, VAR_2, 0xFFFD);
 }
 FUNC_5(VAR_11, VAR_9, 0x000C);
 FUNC_5(VAR_11, VAR_10, 0x000C);
 FUNC_5(VAR_11, VAR_9, 0x0030);
 FUNC_3(VAR_11, VAR_10, 0xFFCF, 0x10);

 FUNC_6(VAR_11, FUNC_0(0x5A), 0x0780);
 FUNC_6(VAR_11, FUNC_0(0x59), 0xC810);
 FUNC_6(VAR_11, FUNC_0(0x58), 0x000D);

 FUNC_5(VAR_11, FUNC_0(0x0A), 0x2000);
 if (VAR_12->rev != 1) {
  FUNC_5(VAR_11, VAR_1, 0x0004);
  FUNC_2(VAR_11, VAR_2, 0xFFFB);
 }
 FUNC_3(VAR_11, FUNC_0(0x03), 0xFF9F, 0x40);

 if (VAR_12->radio_rev == 8) {
  FUNC_10(VAR_11, 0x43, 0x000F);
 } else {
  FUNC_10(VAR_11, 0x52, 0);
  FUNC_8(VAR_11, 0x43, 0xFFF0, 0x9);
 }
 FUNC_1(VAR_11, 11);

 if (VAR_12->rev >= 3)
  FUNC_6(VAR_11, VAR_7, 0xC020);
 else
  FUNC_6(VAR_11, VAR_7, 0x8020);
 FUNC_6(VAR_11, VAR_5, 0);

 FUNC_3(VAR_11, FUNC_0(0x2B), 0xFFC0, 0x01);
 FUNC_3(VAR_11, FUNC_0(0x2B), 0xC0FF, 0x800);

 FUNC_5(VAR_11, VAR_9, 0x0100);
 FUNC_2(VAR_11, VAR_10, 0xCFFF);

 if (VAR_11->dev->bus_sprom->boardflags_lo & VAR_0) {
  if (VAR_12->rev >= 7) {
   FUNC_5(VAR_11, VAR_9, 0x0800);
   FUNC_5(VAR_11, VAR_10, 0x8000);
  }
 }
 FUNC_7(VAR_11, 0x7A, 0x00F7);

 VAR_18 = 0;
 VAR_19 = (VAR_12->radio_rev == 8) ? 15 : 9;
 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
  for (VAR_18 = 0; VAR_18 < 16; VAR_18++) {
   FUNC_10(VAR_11, 0x43, VAR_17);
   FUNC_3(VAR_11, VAR_10, 0xF0FF, (VAR_18 << 8));
   FUNC_3(VAR_11, VAR_8, 0x0FFF, 0xA000);
   FUNC_5(VAR_11, VAR_8, 0xF000);
   FUNC_11(20);
   if (FUNC_4(VAR_11, VAR_6) >= 0xDFC)
    goto exit_loop1;
  }
 }
      exit_loop1:
 VAR_21 = VAR_17;
 VAR_22 = VAR_18;
 if (VAR_18 >= 8) {
  FUNC_5(VAR_11, VAR_10, 0x30);
  VAR_20 = 0x1B;
  for (VAR_18 = VAR_18 - 8; VAR_18 < 16; VAR_18++) {
   FUNC_3(VAR_11, VAR_10, 0xF0FF, (VAR_18 << 8));
   FUNC_3(VAR_11, VAR_8, 0x0FFF, 0xA000);
   FUNC_5(VAR_11, VAR_8, 0xF000);
   FUNC_11(20);
   VAR_20 -= 3;
   if (FUNC_4(VAR_11, VAR_6) >= 0xDFC)
    goto exit_loop2;
  }
 } else
  VAR_20 = 0x18;
      exit_loop2:

 if (VAR_12->rev != 1) {
  FUNC_6(VAR_11, VAR_1, VAR_14[4]);
  FUNC_6(VAR_11, VAR_2, VAR_14[5]);
 }
 FUNC_6(VAR_11, FUNC_0(0x5A), VAR_14[6]);
 FUNC_6(VAR_11, FUNC_0(0x59), VAR_14[7]);
 FUNC_6(VAR_11, FUNC_0(0x58), VAR_14[8]);
 FUNC_6(VAR_11, FUNC_0(0x0A), VAR_14[9]);
 FUNC_6(VAR_11, FUNC_0(0x03), VAR_14[10]);
 FUNC_6(VAR_11, VAR_7, VAR_14[11]);
 FUNC_6(VAR_11, VAR_5, VAR_14[12]);
 FUNC_6(VAR_11, FUNC_0(0x2B), VAR_14[13]);
 FUNC_6(VAR_11, VAR_8, VAR_14[14]);

 FUNC_1(VAR_11, VAR_16);

 FUNC_10(VAR_11, 0x52, VAR_15[0]);
 FUNC_10(VAR_11, 0x43, VAR_15[1]);
 FUNC_10(VAR_11, 0x7A, VAR_15[2]);

 FUNC_6(VAR_11, VAR_9, VAR_14[2] | 0x0003);
 FUNC_11(10);
 FUNC_6(VAR_11, VAR_9, VAR_14[2]);
 FUNC_6(VAR_11, VAR_10, VAR_14[3]);
 FUNC_6(VAR_11, VAR_4, VAR_14[0]);
 FUNC_6(VAR_11, VAR_3, VAR_14[1]);

 VAR_13->max_lb_gain =
     ((VAR_22 * 6) - (VAR_21 * 4)) - 11;
 VAR_13->trsw_rx_gain = VAR_20 * 2;
}
