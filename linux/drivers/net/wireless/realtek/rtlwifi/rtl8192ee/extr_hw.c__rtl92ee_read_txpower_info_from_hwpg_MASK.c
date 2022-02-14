
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txpower_info_5g {int** index_bw40_base; int ** bw80_diff; int ** bw40_diff; int ** bw20_diff; int ** ofdm_diff; } ;
struct txpower_info_2g {int ** bw40_diff; int ** bw20_diff; int ** ofdm_diff; int ** cck_diff; int ** index_bw40_base; int ** index_cck_base; } ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int** txpwr_5g_bw40base; int** txpwr_5g_bw80base; int eeprom_thermalmeter; int apk_thermalmeterignore; int* thermalmeter; int eeprom_regulatory; int ** txpwr_5g_bw80diff; int ** txpwr_5g_bw40diff; int ** txpwr_5g_bw20diff; int ** txpwr_5g_ofdmdiff; int ** txpwr_ht40diff; int ** txpwr_ht20diff; int ** txpwr_legacyhtdiff; int ** txpwr_cckdiff; int ** txpwrlevel_ht40_1s; int ** txpwrlevel_cck; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,struct txpower_info_2g*,struct txpower_info_5g*,int,int*) ;
 int FUNC_2 (int) ;
 int* VAR_10 ;
 int* VAR_11 ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_12,
       bool VAR_13, u8 *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_4(VAR_12);
 struct rtl_efuse *VAR_16 = FUNC_3(FUNC_4(VAR_12));
 struct txpower_info_2g VAR_17;
 struct txpower_info_5g VAR_18;
 u8 VAR_19, VAR_20;
 u8 VAR_21;

 FUNC_1(VAR_12, &VAR_17, &VAR_18,
          VAR_13, VAR_14);

 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
  for (VAR_21 = 0; VAR_21 < 14; VAR_21++) {
   VAR_20 = FUNC_2(VAR_21 + 1);

   if (VAR_21 == VAR_0 - 1) {
    VAR_16->txpwrlevel_cck[VAR_19][VAR_21] =
      VAR_17.index_cck_base[VAR_19][5];
    VAR_16->txpwrlevel_ht40_1s[VAR_19][VAR_21] =
      VAR_17.index_bw40_base[VAR_19][VAR_20];
   } else {
    VAR_16->txpwrlevel_cck[VAR_19][VAR_21] =
      VAR_17.index_cck_base[VAR_19][VAR_20];
    VAR_16->txpwrlevel_ht40_1s[VAR_19][VAR_21] =
      VAR_17.index_bw40_base[VAR_19][VAR_20];
   }
  }
  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {
   VAR_20 = FUNC_2(VAR_10[VAR_21]);
   VAR_16->txpwr_5g_bw40base[VAR_19][VAR_21] =
     VAR_18.index_bw40_base[VAR_19][VAR_20];
  }
  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
   u8 VAR_22, VAR_23;

   VAR_20 = FUNC_2(VAR_11[VAR_21]);
   VAR_22 = VAR_18.index_bw40_base[VAR_19][VAR_20];
   VAR_23 = VAR_18.index_bw40_base[VAR_19][VAR_20 + 1];

   VAR_16->txpwr_5g_bw80base[VAR_19][VAR_21] = (VAR_22 + VAR_23) / 2;
  }
  for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
   VAR_16->txpwr_cckdiff[VAR_19][VAR_21] = VAR_17.cck_diff[VAR_19][VAR_21];
   VAR_16->txpwr_legacyhtdiff[VAR_19][VAR_21] = VAR_17.ofdm_diff[VAR_19][VAR_21];
   VAR_16->txpwr_ht20diff[VAR_19][VAR_21] = VAR_17.bw20_diff[VAR_19][VAR_21];
   VAR_16->txpwr_ht40diff[VAR_19][VAR_21] = VAR_17.bw40_diff[VAR_19][VAR_21];

   VAR_16->txpwr_5g_ofdmdiff[VAR_19][VAR_21] = VAR_18.ofdm_diff[VAR_19][VAR_21];
   VAR_16->txpwr_5g_bw20diff[VAR_19][VAR_21] = VAR_18.bw20_diff[VAR_19][VAR_21];
   VAR_16->txpwr_5g_bw40diff[VAR_19][VAR_21] = VAR_18.bw40_diff[VAR_19][VAR_21];
   VAR_16->txpwr_5g_bw80diff[VAR_19][VAR_21] = VAR_18.bw80_diff[VAR_19][VAR_21];
  }
 }

 if (!VAR_13)
  VAR_16->eeprom_thermalmeter = VAR_14[VAR_5];
 else
  VAR_16->eeprom_thermalmeter = VAR_3;

 if (VAR_16->eeprom_thermalmeter == 0xff || VAR_13) {
  VAR_16->apk_thermalmeterignore = 1;
  VAR_16->eeprom_thermalmeter = VAR_3;
 }

 VAR_16->thermalmeter[0] = VAR_16->eeprom_thermalmeter;
 FUNC_0(VAR_15, VAR_6, VAR_7,
  "thermalmeter = 0x%x\n", VAR_16->eeprom_thermalmeter);

 if (!VAR_13) {
  VAR_16->eeprom_regulatory = VAR_14[VAR_4]
      & 0x07;
  if (VAR_14[VAR_4] == 0xFF)
   VAR_16->eeprom_regulatory = 0;
 } else {
  VAR_16->eeprom_regulatory = 0;
 }
 FUNC_0(VAR_15, VAR_6, VAR_7,
  "eeprom_regulatory = 0x%x\n", VAR_16->eeprom_regulatory);
}
