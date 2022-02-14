
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_2__* dev; int wl; TYPE_1__ phy; } ;
struct b43_phy_lp {int rx_pwr_offset; int rssi_vf; scalar_t__ rssi_vc; scalar_t__ rssi_gs; } ;
struct TYPE_4__ {int board_rev; int chip_id; scalar_t__ chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;
 int FUNC_9 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_10(struct b43_wldev *VAR_31)
{
 struct b43_phy_lp *VAR_32 = VAR_31->phy.lp;

 FUNC_8(VAR_31, VAR_6, 0x50);
 FUNC_8(VAR_31, VAR_3, 0x8800);
 FUNC_8(VAR_31, VAR_4, 0);
 FUNC_8(VAR_31, VAR_5, 0);
 FUNC_8(VAR_31, VAR_25, 0);
 FUNC_8(VAR_31, VAR_26, 0);
 FUNC_8(VAR_31, FUNC_2(0xF9), 0);
 FUNC_8(VAR_31, VAR_28, 0);
 FUNC_7(VAR_31, VAR_0, 0x10);
 FUNC_6(VAR_31, VAR_21, 0xFF00, 0xB4);
 FUNC_6(VAR_31, VAR_13, 0xF8FF, 0x200);
 FUNC_6(VAR_31, VAR_13, 0xFF00, 0x7F);
 FUNC_6(VAR_31, VAR_14, 0xFF0F, 0x40);
 FUNC_6(VAR_31, VAR_22, 0xFF00, 0x2);
 FUNC_5(VAR_31, VAR_11, ~0x4000);
 FUNC_5(VAR_31, VAR_11, ~0x2000);
 FUNC_7(VAR_31, FUNC_2(0x10A), 0x1);
 if (VAR_31->dev->board_rev >= 0x18) {
  FUNC_4(VAR_31, FUNC_1(17, 65), 0xEC);
  FUNC_6(VAR_31, FUNC_2(0x10A), 0xFF01, 0x14);
 } else {
  FUNC_6(VAR_31, FUNC_2(0x10A), 0xFF01, 0x10);
 }
 FUNC_6(VAR_31, FUNC_2(0xDF), 0xFF00, 0xF4);
 FUNC_6(VAR_31, FUNC_2(0xDF), 0x00FF, 0xF100);
 FUNC_8(VAR_31, VAR_10, 0x48);
 FUNC_6(VAR_31, VAR_16, 0xFF00, 0x46);
 FUNC_6(VAR_31, FUNC_2(0xE4), 0xFF00, 0x10);
 FUNC_6(VAR_31, VAR_23, 0xFFF0, 0x9);
 FUNC_5(VAR_31, VAR_14, ~0xF);
 FUNC_6(VAR_31, VAR_29, 0x00FF, 0x5500);
 FUNC_6(VAR_31, VAR_9, 0xFC1F, 0xA0);
 FUNC_6(VAR_31, VAR_14, 0xE0FF, 0x300);
 FUNC_6(VAR_31, VAR_16, 0x00FF, 0x2A00);
 if ((VAR_31->dev->chip_id == 0x4325) && (VAR_31->dev->chip_rev == 0)) {
  FUNC_6(VAR_31, VAR_19, 0x00FF, 0x2100);
  FUNC_6(VAR_31, VAR_29, 0xFF00, 0xA);
 } else {
  FUNC_6(VAR_31, VAR_19, 0x00FF, 0x1E00);
  FUNC_6(VAR_31, VAR_29, 0xFF00, 0xD);
 }
 FUNC_6(VAR_31, FUNC_2(0xFE), 0xFFE0, 0x1F);
 FUNC_6(VAR_31, FUNC_2(0xFF), 0xFFE0, 0xC);
 FUNC_6(VAR_31, FUNC_2(0x100), 0xFF00, 0x19);
 FUNC_6(VAR_31, FUNC_2(0xFF), 0x03FF, 0x3C00);
 FUNC_6(VAR_31, FUNC_2(0xFE), 0xFC1F, 0x3E0);
 FUNC_6(VAR_31, FUNC_2(0xFF), 0xFFE0, 0xC);
 FUNC_6(VAR_31, FUNC_2(0x100), 0x00FF, 0x1900);
 FUNC_6(VAR_31, VAR_9, 0x83FF, 0x5800);
 FUNC_6(VAR_31, VAR_9, 0xFFE0, 0x12);
 FUNC_6(VAR_31, VAR_15, 0x0FFF, 0x9000);

 if ((VAR_31->dev->chip_id == 0x4325) && (VAR_31->dev->chip_rev == 0)) {
  FUNC_4(VAR_31, FUNC_0(0x08, 0x14), 0);
  FUNC_4(VAR_31, FUNC_0(0x08, 0x12), 0x40);
 }

 if (FUNC_3(VAR_31->wl) == VAR_30) {
  FUNC_7(VAR_31, VAR_11, 0x40);
  FUNC_6(VAR_31, VAR_11, 0xF0FF, 0xB00);
  FUNC_6(VAR_31, VAR_27, 0xFFF8, 0x6);
  FUNC_6(VAR_31, VAR_20, 0x00FF, 0x9D00);
  FUNC_6(VAR_31, VAR_20, 0xFF00, 0xA1);
  FUNC_5(VAR_31, VAR_17, 0x00FF);
 } else
  FUNC_5(VAR_31, VAR_11, ~0x40);

 FUNC_6(VAR_31, VAR_12, 0xFF00, 0xB3);
 FUNC_6(VAR_31, VAR_12, 0x00FF, 0xAD00);
 FUNC_6(VAR_31, VAR_18, 0xFF00, VAR_32->rx_pwr_offset);
 FUNC_7(VAR_31, VAR_24, 0x44);
 FUNC_8(VAR_31, VAR_24, 0x80);
 FUNC_8(VAR_31, VAR_7, 0xA954);
 FUNC_8(VAR_31, VAR_8,
        0x2000 | ((u16)VAR_32->rssi_gs << 10) |
        ((u16)VAR_32->rssi_vc << 4) | VAR_32->rssi_vf);

 if ((VAR_31->dev->chip_id == 0x4325) && (VAR_31->dev->chip_rev == 0)) {
  FUNC_7(VAR_31, VAR_1, 0x1C);
  FUNC_6(VAR_31, VAR_3, 0x00FF, 0x8800);
  FUNC_6(VAR_31, VAR_2, 0xFC3C, 0x0400);
 }

 FUNC_9(VAR_31);
}
