
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txpower_info_5g {int** index_bw40_base; int ** bw80_diff; int ** bw40_diff; int ** bw20_diff; int ** ofdm_diff; } ;
struct txpower_info_2g {int ** bw40_diff; int ** bw20_diff; int ** ofdm_diff; int ** cck_diff; int ** index_bw40_base; int ** index_cck_base; } ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int** txpwr_5g_bw40base; int** txpwr_5g_bw80base; int eeprom_regulatory; int ** txpwr_5g_bw80diff; int ** txpwr_5g_bw40diff; int ** txpwr_5g_bw20diff; int ** txpwr_5g_ofdmdiff; int ** txpwr_ht40diff; int ** txpwr_ht20diff; int ** txpwr_legacyhtdiff; int ** txpwr_cckdiff; int ** txpwrlevel_ht40_1s; int ** txpwrlevel_cck; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,struct txpower_info_2g*,struct txpower_info_5g*,int,int*) ;
 int* VAR_7 ;
 int* VAR_8 ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9,
       bool VAR_10,
       u8 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_4(VAR_9);
 struct rtl_efuse *VAR_13 = FUNC_3(FUNC_4(VAR_9));
 struct txpower_info_2g VAR_14;
 struct txpower_info_5g VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18;

 FUNC_2(VAR_9, &VAR_14,
  &VAR_15, VAR_10, VAR_11);

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
   VAR_17 = FUNC_1(VAR_18 + 1);

   if (VAR_18 == VAR_0 - 1) {
    VAR_13->txpwrlevel_cck[VAR_16][VAR_18] =
     VAR_14.index_cck_base[VAR_16][5];
    VAR_13->txpwrlevel_ht40_1s[VAR_16][VAR_18] =
     VAR_14.index_bw40_base[VAR_16][VAR_17];
   } else {
    VAR_13->txpwrlevel_cck[VAR_16][VAR_18] =
     VAR_14.index_cck_base[VAR_16][VAR_17];
    VAR_13->txpwrlevel_ht40_1s[VAR_16][VAR_18] =
     VAR_14.index_bw40_base[VAR_16][VAR_17];
   }
  }

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
   VAR_17 = FUNC_1(VAR_7[VAR_18]);
   VAR_13->txpwr_5g_bw40base[VAR_16][VAR_18] =
    VAR_15.index_bw40_base[VAR_16][VAR_17];
  }
  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   u8 VAR_19, VAR_20;
   VAR_17 = FUNC_1(VAR_8[VAR_18]);
   VAR_19 = VAR_15.index_bw40_base[VAR_16][VAR_17];
   VAR_20 = VAR_15.index_bw40_base[VAR_16][VAR_17 + 1];

   VAR_13->txpwr_5g_bw80base[VAR_16][VAR_18] = (VAR_19 + VAR_20) / 2;
  }
  for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
   VAR_13->txpwr_cckdiff[VAR_16][VAR_18] =
    VAR_14.cck_diff[VAR_16][VAR_18];
   VAR_13->txpwr_legacyhtdiff[VAR_16][VAR_18] =
    VAR_14.ofdm_diff[VAR_16][VAR_18];
   VAR_13->txpwr_ht20diff[VAR_16][VAR_18] =
    VAR_14.bw20_diff[VAR_16][VAR_18];
   VAR_13->txpwr_ht40diff[VAR_16][VAR_18] =
    VAR_14.bw40_diff[VAR_16][VAR_18];

   VAR_13->txpwr_5g_ofdmdiff[VAR_16][VAR_18] =
    VAR_15.ofdm_diff[VAR_16][VAR_18];
   VAR_13->txpwr_5g_bw20diff[VAR_16][VAR_18] =
    VAR_15.bw20_diff[VAR_16][VAR_18];
   VAR_13->txpwr_5g_bw40diff[VAR_16][VAR_18] =
    VAR_15.bw40_diff[VAR_16][VAR_18];
   VAR_13->txpwr_5g_bw80diff[VAR_16][VAR_18] =
    VAR_15.bw80_diff[VAR_16][VAR_18];
  }
 }

 if (!VAR_10) {
  VAR_13->eeprom_regulatory = VAR_11[VAR_3] & 0x07;
  if (VAR_11[VAR_3] == 0xFF)
   VAR_13->eeprom_regulatory = 0;
 } else {
  VAR_13->eeprom_regulatory = 0;
 }

 FUNC_0(VAR_12, VAR_4, VAR_5,
 "eeprom_regulatory = 0x%x\n", VAR_13->eeprom_regulatory);
}
