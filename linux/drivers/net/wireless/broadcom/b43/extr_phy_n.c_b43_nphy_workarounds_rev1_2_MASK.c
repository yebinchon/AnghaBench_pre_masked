
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ssb_sprom {int boardflags2_lo; } ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; TYPE_1__* dev; } ;
struct b43_phy_n {scalar_t__ band5g_pwrgain; } ;
struct TYPE_2__ {scalar_t__ board_type; struct ssb_sprom* bus_sprom; } ;


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
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int,int*,int*,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ) ;
 int FUNC_9 (struct b43_wldev*,int ,int ) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct b43_wldev *VAR_28)
{
 struct ssb_sprom *VAR_29 = VAR_28->dev->bus_sprom;
 struct b43_phy *VAR_30 = &VAR_28->phy;
 struct b43_phy_n *VAR_31 = VAR_30->n;

 u8 VAR_32[7] = { 0x0, 0x1, 0x2, 0x8, 0x4, 0x5, 0x3 };
 u8 VAR_33[7] = { 0x8, 0x6, 0x6, 0x2, 0x4, 0x3C, 0x1 };

 u8 VAR_34[7] = { 0x0, 0x3, 0x5, 0x4, 0x2, 0x1, 0x8 };
 u8 VAR_35[7] = { 0x8, 0x6, 0x2, 0x4, 0x4, 0x6, 0x1 };

 if (VAR_29->boardflags2_lo & VAR_2 ||
     VAR_28->dev->board_type == VAR_26) {
  VAR_33[0] = 0x1;
  VAR_33[5] = 0x14;
 }

 if (FUNC_1(VAR_28->wl) == VAR_27 &&
     VAR_31->band5g_pwrgain) {
  FUNC_11(VAR_28, VAR_0, ~0x8);
  FUNC_11(VAR_28, VAR_1, ~0x8);
 } else {
  FUNC_12(VAR_28, VAR_0, 0x8);
  FUNC_12(VAR_28, VAR_1, 0x8);
 }

 FUNC_6(VAR_28, FUNC_0(8, 0x00), 0x000A);
 FUNC_6(VAR_28, FUNC_0(8, 0x10), 0x000A);
 if (VAR_28->phy.rev < 3) {
  FUNC_6(VAR_28, FUNC_0(8, 0x02), 0xCDAA);
  FUNC_6(VAR_28, FUNC_0(8, 0x12), 0xCDAA);
 }

 if (VAR_28->phy.rev < 2) {
  FUNC_6(VAR_28, FUNC_0(8, 0x08), 0x0000);
  FUNC_6(VAR_28, FUNC_0(8, 0x18), 0x0000);
  FUNC_6(VAR_28, FUNC_0(8, 0x07), 0x7AAB);
  FUNC_6(VAR_28, FUNC_0(8, 0x17), 0x7AAB);
  FUNC_6(VAR_28, FUNC_0(8, 0x06), 0x0800);
  FUNC_6(VAR_28, FUNC_0(8, 0x16), 0x0800);
 }

 FUNC_10(VAR_28, VAR_16, 0x2D8);
 FUNC_10(VAR_28, VAR_18, 0x301);
 FUNC_10(VAR_28, VAR_17, 0x2D8);
 FUNC_10(VAR_28, VAR_19, 0x301);

 FUNC_5(VAR_28, 0, VAR_32, VAR_33, 7);
 FUNC_5(VAR_28, 1, VAR_34, VAR_35, 7);

 FUNC_4(VAR_28);

 if (VAR_28->phy.rev < 2) {
  if (FUNC_8(VAR_28, VAR_20) & 0x2)
   FUNC_3(VAR_28, FUNC_2(VAR_28) |
     VAR_3);
 } else if (VAR_28->phy.rev == 2) {
  FUNC_10(VAR_28, VAR_4, 0);
  FUNC_10(VAR_28, VAR_5, 0);
 }

 if (VAR_28->phy.rev < 2)
  FUNC_7(VAR_28, VAR_21,
    ~VAR_22);


 FUNC_10(VAR_28, VAR_8, 0x125);
 FUNC_10(VAR_28, VAR_9, 0x1B3);
 FUNC_10(VAR_28, VAR_10, 0x105);
 FUNC_10(VAR_28, VAR_11, 0x16E);
 FUNC_10(VAR_28, VAR_12, 0xCD);
 FUNC_10(VAR_28, VAR_13, 0x20);

 if (VAR_28->phy.rev < 3) {
  FUNC_7(VAR_28, VAR_14,
        ~VAR_15 & 0xFFFF);
  FUNC_10(VAR_28, VAR_23, 0xB5);
  FUNC_10(VAR_28, VAR_24, 0xA4);
  FUNC_10(VAR_28, VAR_25, 0x00);
 }

 if (VAR_28->phy.rev == 2)
  FUNC_9(VAR_28, VAR_6,
    VAR_7);
}
