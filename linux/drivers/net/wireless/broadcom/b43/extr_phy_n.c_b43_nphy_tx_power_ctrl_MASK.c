
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;
struct b43_phy_n {int txpwrctrl; int* tx_pwr_idx; scalar_t__ hang_avoid; int adj_pwr_tbl; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


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
 int FUNC_0 (int,int) ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 scalar_t__ FUNC_4 (struct b43_wldev*) ;
 scalar_t__ FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int,int ) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;
 int FUNC_9 (struct b43_wldev*,int ,int,int) ;
 int FUNC_10 (struct b43_wldev*,int ) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct b43_wldev *VAR_19, bool VAR_20)
{
 struct b43_phy *VAR_21 = &VAR_19->phy;
 struct b43_phy_n *VAR_22 = VAR_19->phy.n;
 u8 VAR_23;
 u16 VAR_24, VAR_25, VAR_26;
 enum nl80211_band VAR_27 = FUNC_1(VAR_19->wl);

 if (VAR_22->hang_avoid)
  FUNC_6(VAR_19, 1);

 VAR_22->txpwrctrl = VAR_20;
 if (!VAR_20) {
  if (VAR_19->phy.rev >= 3 &&
      (FUNC_10(VAR_19, VAR_11) &
       (VAR_12 |
        VAR_13 |
        VAR_15))) {

   VAR_22->tx_pwr_idx[0] = FUNC_10(VAR_19,
      VAR_5) & 0x7f;
   VAR_22->tx_pwr_idx[1] = FUNC_10(VAR_19,
      VAR_6) & 0x7f;
  }

  FUNC_12(VAR_19, VAR_9, 0x6840);
  for (VAR_23 = 0; VAR_23 < 84; VAR_23++)
   FUNC_12(VAR_19, VAR_10, 0);

  FUNC_12(VAR_19, VAR_9, 0x6C40);
  for (VAR_23 = 0; VAR_23 < 84; VAR_23++)
   FUNC_12(VAR_19, VAR_10, 0);

  VAR_26 = VAR_12 | VAR_13;
  if (VAR_19->phy.rev >= 3)
   VAR_26 |= VAR_15;
  FUNC_8(VAR_19, VAR_11, ~VAR_26);

  if (VAR_19->phy.rev >= 3) {
   FUNC_11(VAR_19, VAR_2, 0x0100);
   FUNC_11(VAR_19, VAR_1, 0x0100);
  } else {
   FUNC_11(VAR_19, VAR_1, 0x4000);
  }

  if (VAR_19->phy.rev == 2)
   FUNC_9(VAR_19, VAR_3,
    ~VAR_4, 0x53);
  else if (VAR_19->phy.rev < 2)
   FUNC_9(VAR_19, VAR_3,
    ~VAR_4, 0x5A);

  if (VAR_19->phy.rev < 2 && FUNC_4(VAR_19))
   FUNC_3(VAR_19, FUNC_2(VAR_19) | VAR_0);
 } else {
  FUNC_7(VAR_19, FUNC_0(26, 64), 84,
        VAR_22->adj_pwr_tbl);
  FUNC_7(VAR_19, FUNC_0(27, 64), 84,
        VAR_22->adj_pwr_tbl);

  VAR_24 = VAR_12 |
   VAR_13;

  VAR_25 = VAR_12 | VAR_13;
  if (VAR_19->phy.rev >= 3) {
   VAR_24 |= VAR_15;
   if (VAR_25)
    VAR_25 |= VAR_15;
  }
  FUNC_9(VAR_19, VAR_11, ~(VAR_24), VAR_25);

  if (VAR_27 == VAR_18) {
   if (VAR_21->rev >= 19) {

   } else if (VAR_21->rev >= 7) {
    FUNC_9(VAR_19, VAR_11,
      ~VAR_14,
      0x32);
    FUNC_9(VAR_19, VAR_16,
      ~VAR_17,
      0x32);
   } else {
    FUNC_9(VAR_19, VAR_11,
      ~VAR_14,
      0x64);
    if (VAR_21->rev > 1)
     FUNC_9(VAR_19,
       VAR_16,
       ~VAR_17,
       0x64);
   }
  }

  if (VAR_19->phy.rev >= 3) {
   if (VAR_22->tx_pwr_idx[0] != 128 &&
       VAR_22->tx_pwr_idx[1] != 128) {

    FUNC_9(VAR_19, VAR_11,
      ~VAR_14,
      VAR_22->tx_pwr_idx[0]);
    if (VAR_19->phy.rev > 1)
     FUNC_9(VAR_19,
      VAR_16,
      ~0xff, VAR_22->tx_pwr_idx[1]);
   }
  }

  if (VAR_21->rev >= 7) {

  }

  if (VAR_19->phy.rev >= 3) {
   FUNC_8(VAR_19, VAR_2, ~0x100);
   FUNC_8(VAR_19, VAR_1, ~0x100);
  } else {
   FUNC_8(VAR_19, VAR_1, ~0x4000);
  }

  if (VAR_19->phy.rev == 2)
   FUNC_9(VAR_19, VAR_3, ~0xFF, 0x3b);
  else if (VAR_19->phy.rev < 2)
   FUNC_9(VAR_19, VAR_3, ~0xFF, 0x40);

  if (VAR_19->phy.rev < 2 && FUNC_4(VAR_19))
   FUNC_3(VAR_19, FUNC_2(VAR_19) & ~VAR_0);

  if (FUNC_5(VAR_19)) {
   FUNC_8(VAR_19, VAR_7, ~0x4);
   FUNC_8(VAR_19, VAR_8, ~0x4);
  }
 }

 if (VAR_22->hang_avoid)
  FUNC_6(VAR_19, 0);
}
