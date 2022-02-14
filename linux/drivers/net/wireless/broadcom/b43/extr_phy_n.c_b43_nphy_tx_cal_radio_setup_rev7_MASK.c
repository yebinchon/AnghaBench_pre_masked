
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int radio_rev; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct b43_phy_n {int* tx_rx_cal_radio_saveregs; scalar_t__ use_int_tx_iq_lo_cal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_9->phy;
 struct b43_phy_n *VAR_11 = VAR_9->phy.n;
 u16 *VAR_12 = VAR_11->tx_rx_cal_radio_saveregs;
 int VAR_13, VAR_14;
 u16 VAR_15, VAR_16;

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  VAR_15 = VAR_13 ? 0x20 : 0;
  VAR_14 = VAR_13 * 11;

  VAR_12[VAR_14 + 0] = FUNC_1(VAR_9, VAR_15 + VAR_7);
  VAR_12[VAR_14 + 1] = FUNC_1(VAR_9, VAR_15 + VAR_2);
  VAR_12[VAR_14 + 2] = FUNC_1(VAR_9, VAR_15 + VAR_1);
  VAR_12[VAR_14 + 3] = FUNC_1(VAR_9, VAR_15 + VAR_6);
  VAR_12[VAR_14 + 4] = 0;
  VAR_12[VAR_14 + 5] = FUNC_1(VAR_9, VAR_15 + VAR_8);
  if (VAR_10->radio_rev != 5)
   VAR_12[VAR_14 + 6] = FUNC_1(VAR_9, VAR_15 + VAR_3);
  VAR_12[VAR_14 + 7] = FUNC_1(VAR_9, VAR_15 + VAR_4);
  VAR_12[VAR_14 + 8] = FUNC_1(VAR_9, VAR_15 + VAR_5);

  if (FUNC_0(VAR_9->wl) == VAR_0) {
   FUNC_2(VAR_9, VAR_15 + VAR_7, 0xA);
   FUNC_2(VAR_9, VAR_15 + VAR_2, 0x43);
   FUNC_2(VAR_9, VAR_15 + VAR_1, 0x55);
   FUNC_2(VAR_9, VAR_15 + VAR_6, 0);
   FUNC_2(VAR_9, VAR_15 + VAR_4, 0);
   if (VAR_11->use_int_tx_iq_lo_cal) {
    FUNC_2(VAR_9, VAR_15 + VAR_8, 0x4);
    VAR_16 = 1 ? 0x31 : 0x21;
    FUNC_2(VAR_9, VAR_15 + VAR_3, VAR_16);
   }
   FUNC_2(VAR_9, VAR_15 + VAR_5, 0x00);
  } else {
   FUNC_2(VAR_9, VAR_15 + VAR_7, 0x6);
   FUNC_2(VAR_9, VAR_15 + VAR_2, 0x43);
   FUNC_2(VAR_9, VAR_15 + VAR_1, 0x55);
   FUNC_2(VAR_9, VAR_15 + VAR_6, 0);

   if (VAR_10->radio_rev != 5)
    FUNC_2(VAR_9, VAR_15 + VAR_3, 0);
   if (VAR_11->use_int_tx_iq_lo_cal) {
    FUNC_2(VAR_9, VAR_15 + VAR_8, 0x6);
    VAR_16 = 1 ? 0x31 : 0x21;
    FUNC_2(VAR_9, VAR_15 + VAR_4, VAR_16);
   }
   FUNC_2(VAR_9, VAR_15 + VAR_5, 0);
  }
 }
}
