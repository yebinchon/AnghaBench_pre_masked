
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_efuse {int** eeprom_chnlarea_txpwr_cck; int** eeprom_chnlarea_txpwr_ht40_1s; int** eprom_chnl_txpwr_ht40_2sdf; int** txpwrlevel_cck; int** txpwrlevel_ht40_1s; scalar_t__** txpwrlevel_ht40_2s; int* eeprom_pwrlimit_ht40; int* eeprom_pwrlimit_ht20; int** pwrgroup_ht20; int** pwrgroup_ht40; int** txpwr_ht20diff; int** txpwr_legacyhtdiff; int legacy_ht_txpowerdiff; int eeprom_regulatory; int* eeprom_tssi; int eeprom_thermalmeter; int apk_thermalmeterignore; int* thermalmeter; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_2 (int) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_20,
        bool VAR_21,
        u8 *VAR_22)
{
 struct rtl_priv *VAR_23 = FUNC_4(VAR_20);
 struct rtl_efuse *VAR_24 = FUNC_3(FUNC_4(VAR_20));
 u8 VAR_25, VAR_26, VAR_27;
 u16 VAR_28;

 for (VAR_25 = 0; VAR_25 < 1; VAR_25++) {
  for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
   if (!VAR_21) {
    VAR_24->eeprom_chnlarea_txpwr_cck[VAR_25][VAR_28] =
        VAR_22[VAR_8 + VAR_25 * 3 + VAR_28];
    VAR_24->eeprom_chnlarea_txpwr_ht40_1s[VAR_25][VAR_28] =
        VAR_22[VAR_10 + VAR_25 * 3 + VAR_28];
   } else {
    VAR_24->eeprom_chnlarea_txpwr_cck[VAR_25][VAR_28] =
        VAR_5;
    VAR_24->eeprom_chnlarea_txpwr_ht40_1s[VAR_25][VAR_28] =
        VAR_5;
   }
  }
 }

 for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
  if (!VAR_21)
   VAR_27 = VAR_22[VAR_11 + VAR_28];
  else
   VAR_27 = VAR_1;
  VAR_24->eprom_chnl_txpwr_ht40_2sdf[VAR_17][VAR_28] =
      (VAR_27 & 0xf);
  VAR_24->eprom_chnl_txpwr_ht40_2sdf[VAR_18][VAR_28] =
      ((VAR_27 & 0xf0) >> 4);
 }

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++)
  for (VAR_28 = 0; VAR_28 < 3; VAR_28++)
   FUNC_1(VAR_23, VAR_14, VAR_15,
    "RF(%d) EEPROM CCK Area(%d) = 0x%x\n", VAR_25,
     VAR_28, VAR_24->eeprom_chnlarea_txpwr_cck
     [VAR_25][VAR_28]);
 for (VAR_25 = 0; VAR_25 < 2; VAR_25++)
  for (VAR_28 = 0; VAR_28 < 3; VAR_28++)
   FUNC_1(VAR_23, VAR_14, VAR_15,
    "RF(%d) EEPROM HT40 1S Area(%d) = 0x%x\n",
    VAR_25, VAR_28,
    VAR_24->eeprom_chnlarea_txpwr_ht40_1s
     [VAR_25][VAR_28]);
 for (VAR_25 = 0; VAR_25 < 2; VAR_25++)
  for (VAR_28 = 0; VAR_28 < 3; VAR_28++)
   FUNC_1(VAR_23, VAR_14, VAR_15,
    "RF(%d) EEPROM HT40 2S Diff Area(%d) = 0x%x\n",
     VAR_25, VAR_28,
     VAR_24->eprom_chnl_txpwr_ht40_2sdf
     [VAR_25][VAR_28]);

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  for (VAR_28 = 0; VAR_28 < 14; VAR_28++) {
   VAR_26 = FUNC_2((u8)VAR_28);

   VAR_24->txpwrlevel_cck[VAR_25][VAR_28] =
    VAR_24->eeprom_chnlarea_txpwr_cck
     [VAR_25][VAR_26];
   VAR_24->txpwrlevel_ht40_1s[VAR_25][VAR_28] =
    VAR_24->eeprom_chnlarea_txpwr_ht40_1s
     [VAR_25][VAR_26];

   if ((VAR_24->eeprom_chnlarea_txpwr_ht40_1s
     [VAR_25][VAR_26] -
        VAR_24->eprom_chnl_txpwr_ht40_2sdf
     [VAR_25][VAR_26]) > 0) {
    VAR_24->txpwrlevel_ht40_2s[VAR_25][VAR_28] =
      VAR_24->eeprom_chnlarea_txpwr_ht40_1s
      [VAR_25][VAR_26] -
      VAR_24->eprom_chnl_txpwr_ht40_2sdf
      [VAR_25][VAR_26];
   } else {
    VAR_24->txpwrlevel_ht40_2s[VAR_25][VAR_28] = 0;
   }
  }

  for (VAR_28 = 0; VAR_28 < 14; VAR_28++) {
   FUNC_1(VAR_23, VAR_14, VAR_16,
    "RF(%d)-Ch(%d) [CCK / HT40_1S / HT40_2S] = [0x%x / 0x%x / 0x%x]\n",
    VAR_25, VAR_28,
    VAR_24->txpwrlevel_cck[VAR_25][VAR_28],
    VAR_24->txpwrlevel_ht40_1s[VAR_25][VAR_28],
    VAR_24->txpwrlevel_ht40_2s[VAR_25][VAR_28]);
  }
 }

 for (VAR_28 = 0; VAR_28 < 3; VAR_28++) {
  if (!VAR_21) {
   VAR_24->eeprom_pwrlimit_ht40[VAR_28] =
       VAR_22[VAR_13 + VAR_28];
   VAR_24->eeprom_pwrlimit_ht20[VAR_28] =
       VAR_22[VAR_13 + 3 + VAR_28];
  } else {
   VAR_24->eeprom_pwrlimit_ht40[VAR_28] = 0;
   VAR_24->eeprom_pwrlimit_ht20[VAR_28] = 0;
  }
 }

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  for (VAR_28 = 0; VAR_28 < 14; VAR_28++) {
   VAR_26 = FUNC_2((u8)VAR_28);

   if (VAR_25 == VAR_17) {
    VAR_24->pwrgroup_ht20[VAR_25][VAR_28] =
      (VAR_24->eeprom_pwrlimit_ht20[VAR_26] & 0xf);
    VAR_24->pwrgroup_ht40[VAR_25][VAR_28] =
      (VAR_24->eeprom_pwrlimit_ht40[VAR_26] & 0xf);
   } else if (VAR_25 == VAR_18) {
    VAR_24->pwrgroup_ht20[VAR_25][VAR_28] =
      ((VAR_24->eeprom_pwrlimit_ht20[VAR_26] &
       0xf0) >> 4);
    VAR_24->pwrgroup_ht40[VAR_25][VAR_28] =
      ((VAR_24->eeprom_pwrlimit_ht40[VAR_26] &
       0xf0) >> 4);
   }

   FUNC_1(VAR_23, VAR_14, VAR_16,
    "RF-%d pwrgroup_ht20[%d] = 0x%x\n", VAR_25, VAR_28,
    VAR_24->pwrgroup_ht20[VAR_25][VAR_28]);
   FUNC_1(VAR_23, VAR_14, VAR_16,
    "RF-%d pwrgroup_ht40[%d] = 0x%x\n", VAR_25, VAR_28,
    VAR_24->pwrgroup_ht40[VAR_25][VAR_28]);
  }
 }

 for (VAR_28 = 0; VAR_28 < 14; VAR_28++) {
  VAR_26 = FUNC_2((u8)VAR_28);

  if (!VAR_21)
   VAR_27 = VAR_22[VAR_9 + VAR_26];
  else
   VAR_27 = VAR_0;

  VAR_24->txpwr_ht20diff[VAR_17][VAR_28] = (VAR_27 & 0xF);
  VAR_24->txpwr_ht20diff[VAR_18][VAR_28] =
      ((VAR_27 >> 4) & 0xF);

  if (VAR_24->txpwr_ht20diff[VAR_17][VAR_28] & FUNC_0(3))
   VAR_24->txpwr_ht20diff[VAR_17][VAR_28] |= 0xF0;

  if (VAR_24->txpwr_ht20diff[VAR_18][VAR_28] & FUNC_0(3))
   VAR_24->txpwr_ht20diff[VAR_18][VAR_28] |= 0xF0;

  VAR_26 = FUNC_2((u8)VAR_28);

  if (!VAR_21)
   VAR_27 = VAR_22[VAR_12 + VAR_26];
  else
   VAR_27 = VAR_2;

  VAR_24->txpwr_legacyhtdiff[VAR_17][VAR_28] = (VAR_27 & 0xF);
  VAR_24->txpwr_legacyhtdiff[VAR_18][VAR_28] =
      ((VAR_27 >> 4) & 0xF);
 }

 VAR_24->legacy_ht_txpowerdiff =
     VAR_24->txpwr_legacyhtdiff[VAR_17][7];

 for (VAR_28 = 0; VAR_28 < 14; VAR_28++)
  FUNC_1(VAR_23, VAR_14, VAR_16,
   "RF-A Ht20 to HT40 Diff[%d] = 0x%x\n", VAR_28,
    VAR_24->txpwr_ht20diff[VAR_17][VAR_28]);
 for (VAR_28 = 0; VAR_28 < 14; VAR_28++)
  FUNC_1(VAR_23, VAR_14, VAR_16,
   "RF-A Legacy to Ht40 Diff[%d] = 0x%x\n", VAR_28,
    VAR_24->txpwr_legacyhtdiff[VAR_17][VAR_28]);
 for (VAR_28 = 0; VAR_28 < 14; VAR_28++)
  FUNC_1(VAR_23, VAR_14, VAR_16,
   "RF-B Ht20 to HT40 Diff[%d] = 0x%x\n", VAR_28,
    VAR_24->txpwr_ht20diff[VAR_18][VAR_28]);
 for (VAR_28 = 0; VAR_28 < 14; VAR_28++)
  FUNC_1(VAR_23, VAR_14, VAR_16,
   "RF-B Legacy to HT40 Diff[%d] = 0x%x\n", VAR_28,
    VAR_24->txpwr_legacyhtdiff[VAR_18][VAR_28]);

 if (!VAR_21)
  VAR_24->eeprom_regulatory = (VAR_22[VAR_19] & 0x7);
 else
  VAR_24->eeprom_regulatory = 0;
 FUNC_1(VAR_23, VAR_14, VAR_16,
  "eeprom_regulatory = 0x%x\n", VAR_24->eeprom_regulatory);

 if (!VAR_21)
  VAR_24->eeprom_tssi[VAR_17] = VAR_22[VAR_7];
 else
  VAR_24->eeprom_tssi[VAR_17] = VAR_4;

 FUNC_1(VAR_23, VAR_14, VAR_16,
  "TSSI_A = 0x%x, TSSI_B = 0x%x\n",
   VAR_24->eeprom_tssi[VAR_17],
   VAR_24->eeprom_tssi[VAR_18]);

 if (!VAR_21)
  VAR_27 = VAR_22[VAR_6];
 else
  VAR_27 = VAR_3;
 VAR_24->eeprom_thermalmeter = (VAR_27 & 0x1f);

 if (VAR_24->eeprom_thermalmeter == 0x1f || VAR_21)
  VAR_24->apk_thermalmeterignore = 1;

 VAR_24->thermalmeter[0] = VAR_24->eeprom_thermalmeter;
 FUNC_1(VAR_23, VAR_14, VAR_16,
  "thermalmeter = 0x%x\n", VAR_24->eeprom_thermalmeter);
}
