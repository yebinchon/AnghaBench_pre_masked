
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int** txpwr_legacyhtdiff; int** txpwr_ht20diff; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char,int) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3,
          u8 *VAR_4, u8 VAR_5,
          u32 *VAR_6, u32 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_3);
 struct rtl_phy *VAR_9 = &(VAR_8->phy);
 struct rtl_efuse *VAR_10 = FUNC_1(FUNC_2(VAR_3));
 u32 VAR_11, VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15, VAR_16[2];

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_16[VAR_15] = VAR_4[VAR_15];
  VAR_13 = VAR_10->txpwr_legacyhtdiff[VAR_15][VAR_5 - 1];
  VAR_11 = VAR_16[VAR_15] + VAR_13;

  VAR_11 = (VAR_11 << 24) | (VAR_11 << 16) |
      (VAR_11 << 8) | VAR_11;
  *(VAR_6 + VAR_15) = VAR_11;
  FUNC_0(VAR_8, VAR_0, VAR_2,
   " [OFDM power base index rf(%c) = 0x%x]\n",
   VAR_15 == 0 ? 'A' : 'B', *(VAR_6 + VAR_15));
 }

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  if (VAR_9->current_chan_bw == VAR_1) {
   VAR_14 = VAR_10->txpwr_ht20diff[VAR_15][VAR_5 - 1];
   VAR_16[VAR_15] += VAR_14;
  }
  VAR_12 = VAR_16[VAR_15];
  VAR_12 = (VAR_12 << 24) |
      (VAR_12 << 16) | (VAR_12 << 8) | VAR_12;

  *(VAR_7 + VAR_15) = VAR_12;

  FUNC_0(VAR_8, VAR_0, VAR_2,
   " [MCS power base index rf(%c) = 0x%x]\n",
   VAR_15 == 0 ? 'A' : 'B', *(VAR_7 + VAR_15));
 }
}
