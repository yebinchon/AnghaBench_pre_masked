
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct b43_phy_n {int* tx_rx_cal_phy_saveregs; scalar_t__ use_int_tx_iq_lo_cal; } ;


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
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;
 int FUNC_9 (struct b43_wldev*,int ,int,int) ;
 int FUNC_10 (struct b43_wldev*,int ) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int ,int,int) ;

__attribute__((used)) static void FUNC_13(struct b43_wldev *VAR_19)
{
 struct b43_phy *VAR_20 = &VAR_19->phy;
 struct b43_phy_n *VAR_21 = VAR_19->phy.n;
 u16 *VAR_22 = VAR_19->phy.n->tx_rx_cal_phy_saveregs;
 u16 VAR_23;

 VAR_22[0] = FUNC_10(VAR_19, VAR_0);
 VAR_22[1] = FUNC_10(VAR_19, VAR_1);
 if (VAR_19->phy.rev >= 3) {
  FUNC_9(VAR_19, VAR_0, 0xF0FF, 0x0A00);
  FUNC_9(VAR_19, VAR_1, 0xF0FF, 0x0A00);

  VAR_23 = FUNC_10(VAR_19, VAR_3);
  VAR_22[2] = VAR_23;
  FUNC_11(VAR_19, VAR_3, VAR_23 | 0x0600);

  VAR_23 = FUNC_10(VAR_19, VAR_2);
  VAR_22[3] = VAR_23;
  FUNC_11(VAR_19, VAR_2, VAR_23 | 0x0600);

  VAR_22[4] = FUNC_10(VAR_19, VAR_4);
  FUNC_8(VAR_19, VAR_4,
        ~VAR_5 & 0xFFFF);

  VAR_23 = FUNC_6(VAR_19, FUNC_0(8, 3));
  VAR_22[5] = VAR_23;
  FUNC_7(VAR_19, FUNC_0(8, 3), 0);

  VAR_23 = FUNC_6(VAR_19, FUNC_0(8, 19));
  VAR_22[6] = VAR_23;
  FUNC_7(VAR_19, FUNC_0(8, 19), 0);
  VAR_22[7] = FUNC_10(VAR_19, VAR_8);
  VAR_22[8] = FUNC_10(VAR_19, VAR_9);

  if (!VAR_21->use_int_tx_iq_lo_cal)
   FUNC_3(VAR_19, VAR_12,
            1, 3);
  else
   FUNC_3(VAR_19, VAR_12,
            0, 3);
  FUNC_3(VAR_19, VAR_13, 2, 1);
  FUNC_3(VAR_19, VAR_13, 8, 2);

  VAR_22[9] = FUNC_10(VAR_19, VAR_6);
  VAR_22[10] = FUNC_10(VAR_19, VAR_7);
  FUNC_8(VAR_19, VAR_6, ~0x0001);
  FUNC_8(VAR_19, VAR_7, ~0x0001);

  VAR_23 = FUNC_2(VAR_19, 0);
  if (VAR_20->rev >= 19)
   FUNC_4(VAR_19, 0x80, VAR_23, 0, 0,
             1);
  else if (VAR_20->rev >= 7)
   FUNC_5(VAR_19, 0x80, VAR_23, 0, 0,
            1);

  if (VAR_21->use_int_tx_iq_lo_cal && 1 ) {
   if (VAR_20->rev >= 19) {
    FUNC_4(VAR_19, 0x8, 0, 0x3,
              0, 0);
   } else if (VAR_20->rev >= 8) {
    FUNC_5(VAR_19, 0x8, 0, 0x3,
             0, 0);
   } else if (VAR_20->rev == 7) {
    FUNC_12(VAR_19, VAR_16, 1 << 4, 1 << 4);
    if (FUNC_1(VAR_19->wl) == VAR_10) {
     FUNC_12(VAR_19, VAR_17, ~1, 0);
     FUNC_12(VAR_19, VAR_18, ~1, 0);
    } else {
     FUNC_12(VAR_19, VAR_14, ~1, 0);
     FUNC_12(VAR_19, VAR_15, ~1, 0);
    }
   }
  }
 } else {
  FUNC_9(VAR_19, VAR_0, 0x0FFF, 0xA000);
  FUNC_9(VAR_19, VAR_1, 0x0FFF, 0xA000);
  VAR_23 = FUNC_10(VAR_19, VAR_2);
  VAR_22[2] = VAR_23;
  FUNC_11(VAR_19, VAR_2, VAR_23 | 0x3000);
  VAR_23 = FUNC_6(VAR_19, FUNC_0(8, 2));
  VAR_22[3] = VAR_23;
  VAR_23 |= 0x2000;
  FUNC_7(VAR_19, FUNC_0(8, 2), VAR_23);
  VAR_23 = FUNC_6(VAR_19, FUNC_0(8, 18));
  VAR_22[4] = VAR_23;
  VAR_23 |= 0x2000;
  FUNC_7(VAR_19, FUNC_0(8, 18), VAR_23);
  VAR_22[5] = FUNC_10(VAR_19, VAR_8);
  VAR_22[6] = FUNC_10(VAR_19, VAR_9);
  if (FUNC_1(VAR_19->wl) == VAR_11)
   VAR_23 = 0x0180;
  else
   VAR_23 = 0x0120;
  FUNC_11(VAR_19, VAR_8, VAR_23);
  FUNC_11(VAR_19, VAR_9, VAR_23);
 }
}
