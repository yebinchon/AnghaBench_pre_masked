
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txpower_info_5g {int dummy; } ;
struct txpower_info_2g {int ** ofdm_diff; int ** bw40_diff; int ** bw20_diff; int ** index_bw40_base; int ** index_cck_base; } ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int eeprom_thermalmeter; int apk_thermalmeterignore; int* thermalmeter; int eeprom_regulatory; int ** txpwrlevel_ht40_1s; int ** txpwrlevel_cck; int ** txpwr_legacyhtdiff; int ** txpwr_ht40diff; int ** txpwr_ht20diff; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,struct txpower_info_2g*,struct txpower_info_5g*,int,int*) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6,
         bool VAR_7,
         u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_6);
 struct rtl_efuse *VAR_10 = FUNC_3(FUNC_4(VAR_6));
 struct txpower_info_2g VAR_11;
 struct txpower_info_5g VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15;

 FUNC_2(VAR_6, &VAR_11, &VAR_12, VAR_7,
          VAR_8);

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  for (VAR_15 = 0; VAR_15 < 14; VAR_15++) {
   VAR_14 = FUNC_1(VAR_15+1);

   VAR_10->txpwrlevel_cck[VAR_13][VAR_15] =
     VAR_11.index_cck_base[VAR_13][VAR_14];
   VAR_10->txpwrlevel_ht40_1s[VAR_13][VAR_15] =
     VAR_11.index_bw40_base[VAR_13][VAR_14];
  }
  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
   VAR_10->txpwr_ht20diff[VAR_13][VAR_15] =
      VAR_11.bw20_diff[VAR_13][VAR_15];
   VAR_10->txpwr_ht40diff[VAR_13][VAR_15] =
      VAR_11.bw40_diff[VAR_13][VAR_15];
   VAR_10->txpwr_legacyhtdiff[VAR_13][VAR_15] =
      VAR_11.ofdm_diff[VAR_13][VAR_15];
  }

  for (VAR_15 = 0; VAR_15 < 14; VAR_15++) {
   FUNC_0(VAR_9, VAR_3, VAR_4,
    "RF(%d)-Ch(%d) [CCK / HT40_1S ] = [0x%x / 0x%x ]\n",
    VAR_13, VAR_15,
    VAR_10->txpwrlevel_cck[VAR_13][VAR_15],
    VAR_10->txpwrlevel_ht40_1s[VAR_13][VAR_15]);
  }
 }

 if (!VAR_7)
  VAR_10->eeprom_thermalmeter =
     VAR_8[VAR_2];
 else
  VAR_10->eeprom_thermalmeter = VAR_0;

 if (VAR_10->eeprom_thermalmeter == 0xff || VAR_7) {
  VAR_10->apk_thermalmeterignore = 1;
  VAR_10->eeprom_thermalmeter = VAR_0;
 }

 VAR_10->thermalmeter[0] = VAR_10->eeprom_thermalmeter;
 FUNC_0(VAR_9, VAR_3, VAR_4,
  "thermalmeter = 0x%x\n", VAR_10->eeprom_thermalmeter);

 if (!VAR_7) {
  VAR_10->eeprom_regulatory =
   VAR_8[VAR_1] & 0x07;
  if (VAR_8[VAR_1] == 0xFF)
   VAR_10->eeprom_regulatory = 0;
 } else {
  VAR_10->eeprom_regulatory = 0;
 }
 FUNC_0(VAR_9, VAR_3, VAR_4,
  "eeprom_regulatory = 0x%x\n", VAR_10->eeprom_regulatory);
}
