
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
 void* VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_2 (int) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_21,
       bool VAR_22,
       u8 *VAR_23)
{
 struct rtl_priv *VAR_24 = FUNC_4(VAR_21);
 struct rtl_efuse *VAR_25 = FUNC_3(FUNC_4(VAR_21));
 u8 VAR_26, VAR_27, VAR_28;
 u16 VAR_29;

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
   if (!VAR_22) {
    VAR_25->
        eeprom_chnlarea_txpwr_cck[VAR_26][VAR_29] =
        VAR_23[VAR_9 + VAR_26 * 3 + VAR_29];
    VAR_25->
        eeprom_chnlarea_txpwr_ht40_1s[VAR_26][VAR_29] =
        VAR_23[VAR_11 + VAR_26 * 3 +
        VAR_29];
   } else {
    VAR_25->
        eeprom_chnlarea_txpwr_cck[VAR_26][VAR_29] =
        VAR_5;
    VAR_25->
        eeprom_chnlarea_txpwr_ht40_1s[VAR_26][VAR_29] =
        VAR_5;
   }
  }
 }

 for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
  if (!VAR_22)
   VAR_28 = VAR_23[VAR_12 + VAR_29];
  else
   VAR_28 = VAR_1;
  VAR_25->eprom_chnl_txpwr_ht40_2sdf[VAR_18][VAR_29] =
      (VAR_28 & 0xf);
  VAR_25->eprom_chnl_txpwr_ht40_2sdf[VAR_19][VAR_29] =
      ((VAR_28 & 0xf0) >> 4);
 }

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++)
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++)
   FUNC_1(VAR_24, VAR_15, VAR_16,
    "RF(%d) EEPROM CCK Area(%d) = 0x%x\n",
    VAR_26, VAR_29,
    VAR_25->
    eeprom_chnlarea_txpwr_cck[VAR_26][VAR_29]);
 for (VAR_26 = 0; VAR_26 < 2; VAR_26++)
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++)
   FUNC_1(VAR_24, VAR_15, VAR_16,
    "RF(%d) EEPROM HT40 1S Area(%d) = 0x%x\n",
    VAR_26, VAR_29,
    VAR_25->
    eeprom_chnlarea_txpwr_ht40_1s[VAR_26][VAR_29]);
 for (VAR_26 = 0; VAR_26 < 2; VAR_26++)
  for (VAR_29 = 0; VAR_29 < 3; VAR_29++)
   FUNC_1(VAR_24, VAR_15, VAR_16,
    "RF(%d) EEPROM HT40 2S Diff Area(%d) = 0x%x\n",
    VAR_26, VAR_29,
    VAR_25->
    eprom_chnl_txpwr_ht40_2sdf[VAR_26][VAR_29]);

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  for (VAR_29 = 0; VAR_29 < 14; VAR_29++) {
   VAR_27 = FUNC_2((u8)VAR_29);

   VAR_25->txpwrlevel_cck[VAR_26][VAR_29] =
       VAR_25->eeprom_chnlarea_txpwr_cck[VAR_26][VAR_27];
   VAR_25->txpwrlevel_ht40_1s[VAR_26][VAR_29] =
       VAR_25->
       eeprom_chnlarea_txpwr_ht40_1s[VAR_26][VAR_27];

   if ((VAR_25->
        eeprom_chnlarea_txpwr_ht40_1s[VAR_26][VAR_27] -
        VAR_25->
        eprom_chnl_txpwr_ht40_2sdf[VAR_26][VAR_27])
       > 0) {
    VAR_25->txpwrlevel_ht40_2s[VAR_26][VAR_29] =
        VAR_25->
        eeprom_chnlarea_txpwr_ht40_1s[VAR_26]
        [VAR_27] -
        VAR_25->
        eprom_chnl_txpwr_ht40_2sdf[VAR_26]
        [VAR_27];
   } else {
    VAR_25->txpwrlevel_ht40_2s[VAR_26][VAR_29] = 0;
   }
  }

  for (VAR_29 = 0; VAR_29 < 14; VAR_29++) {
   FUNC_1(VAR_24, VAR_15, VAR_17,
    "RF(%d)-Ch(%d) [CCK / HT40_1S / HT40_2S] = [0x%x / 0x%x / 0x%x]\n",
    VAR_26, VAR_29,
    VAR_25->txpwrlevel_cck[VAR_26][VAR_29],
    VAR_25->txpwrlevel_ht40_1s[VAR_26][VAR_29],
    VAR_25->txpwrlevel_ht40_2s[VAR_26][VAR_29]);
  }
 }

 for (VAR_29 = 0; VAR_29 < 3; VAR_29++) {
  if (!VAR_22) {
   VAR_25->eeprom_pwrlimit_ht40[VAR_29] =
       VAR_23[VAR_14 + VAR_29];
   VAR_25->eeprom_pwrlimit_ht20[VAR_29] =
       VAR_23[VAR_14 + 3 + VAR_29];
  } else {
   VAR_25->eeprom_pwrlimit_ht40[VAR_29] = 0;
   VAR_25->eeprom_pwrlimit_ht20[VAR_29] = 0;
  }
 }

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  for (VAR_29 = 0; VAR_29 < 14; VAR_29++) {
   VAR_27 = FUNC_2((u8)VAR_29);

   if (VAR_26 == VAR_18) {
    VAR_25->pwrgroup_ht20[VAR_26][VAR_29] =
        (VAR_25->eeprom_pwrlimit_ht20[VAR_27]
         & 0xf);
    VAR_25->pwrgroup_ht40[VAR_26][VAR_29] =
        (VAR_25->eeprom_pwrlimit_ht40[VAR_27]
         & 0xf);
   } else if (VAR_26 == VAR_19) {
    VAR_25->pwrgroup_ht20[VAR_26][VAR_29] =
        ((VAR_25->eeprom_pwrlimit_ht20[VAR_27]
          & 0xf0) >> 4);
    VAR_25->pwrgroup_ht40[VAR_26][VAR_29] =
        ((VAR_25->eeprom_pwrlimit_ht40[VAR_27]
          & 0xf0) >> 4);
   }

   FUNC_1(VAR_24, VAR_15, VAR_17,
    "RF-%d pwrgroup_ht20[%d] = 0x%x\n",
    VAR_26, VAR_29,
    VAR_25->pwrgroup_ht20[VAR_26][VAR_29]);
   FUNC_1(VAR_24, VAR_15, VAR_17,
    "RF-%d pwrgroup_ht40[%d] = 0x%x\n",
    VAR_26, VAR_29,
    VAR_25->pwrgroup_ht40[VAR_26][VAR_29]);
  }
 }

 for (VAR_29 = 0; VAR_29 < 14; VAR_29++) {
  VAR_27 = FUNC_2((u8)VAR_29);

  if (!VAR_22)
   VAR_28 = VAR_23[VAR_10 + VAR_27];
  else
   VAR_28 = VAR_0;

  VAR_25->txpwr_ht20diff[VAR_18][VAR_29] = (VAR_28 & 0xF);
  VAR_25->txpwr_ht20diff[VAR_19][VAR_29] =
      ((VAR_28 >> 4) & 0xF);

  if (VAR_25->txpwr_ht20diff[VAR_18][VAR_29] & FUNC_0(3))
   VAR_25->txpwr_ht20diff[VAR_18][VAR_29] |= 0xF0;

  if (VAR_25->txpwr_ht20diff[VAR_19][VAR_29] & FUNC_0(3))
   VAR_25->txpwr_ht20diff[VAR_19][VAR_29] |= 0xF0;

  VAR_27 = FUNC_2((u8)VAR_29);

  if (!VAR_22)
   VAR_28 = VAR_23[VAR_13 + VAR_27];
  else
   VAR_28 = VAR_2;

  VAR_25->txpwr_legacyhtdiff[VAR_18][VAR_29] = (VAR_28 & 0xF);
  VAR_25->txpwr_legacyhtdiff[VAR_19][VAR_29] =
      ((VAR_28 >> 4) & 0xF);
 }

 VAR_25->legacy_ht_txpowerdiff =
     VAR_25->txpwr_legacyhtdiff[VAR_18][7];

 for (VAR_29 = 0; VAR_29 < 14; VAR_29++)
  FUNC_1(VAR_24, VAR_15, VAR_17,
   "RF-A Ht20 to HT40 Diff[%d] = 0x%x\n",
   VAR_29, VAR_25->txpwr_ht20diff[VAR_18][VAR_29]);
 for (VAR_29 = 0; VAR_29 < 14; VAR_29++)
  FUNC_1(VAR_24, VAR_15, VAR_17,
   "RF-A Legacy to Ht40 Diff[%d] = 0x%x\n",
   VAR_29, VAR_25->txpwr_legacyhtdiff[VAR_18][VAR_29]);
 for (VAR_29 = 0; VAR_29 < 14; VAR_29++)
  FUNC_1(VAR_24, VAR_15, VAR_17,
   "RF-B Ht20 to HT40 Diff[%d] = 0x%x\n",
   VAR_29, VAR_25->txpwr_ht20diff[VAR_19][VAR_29]);
 for (VAR_29 = 0; VAR_29 < 14; VAR_29++)
  FUNC_1(VAR_24, VAR_15, VAR_17,
   "RF-B Legacy to HT40 Diff[%d] = 0x%x\n",
   VAR_29, VAR_25->txpwr_legacyhtdiff[VAR_19][VAR_29]);

 if (!VAR_22)
  VAR_25->eeprom_regulatory = (VAR_23[VAR_20] & 0x7);
 else
  VAR_25->eeprom_regulatory = 0;
 FUNC_1(VAR_24, VAR_15, VAR_17,
  "eeprom_regulatory = 0x%x\n", VAR_25->eeprom_regulatory);

 if (!VAR_22) {
  VAR_25->eeprom_tssi[VAR_18] = VAR_23[VAR_7];
  VAR_25->eeprom_tssi[VAR_19] = VAR_23[VAR_8];
 } else {
  VAR_25->eeprom_tssi[VAR_18] = VAR_4;
  VAR_25->eeprom_tssi[VAR_19] = VAR_4;
 }
 FUNC_1(VAR_24, VAR_15, VAR_17, "TSSI_A = 0x%x, TSSI_B = 0x%x\n",
  VAR_25->eeprom_tssi[VAR_18],
  VAR_25->eeprom_tssi[VAR_19]);

 if (!VAR_22)
  VAR_28 = VAR_23[VAR_6];
 else
  VAR_28 = VAR_3;
 VAR_25->eeprom_thermalmeter = (VAR_28 & 0x1f);

 if (VAR_25->eeprom_thermalmeter == 0x1f || VAR_22)
  VAR_25->apk_thermalmeterignore = 1;

 VAR_25->thermalmeter[0] = VAR_25->eeprom_thermalmeter;
 FUNC_1(VAR_24, VAR_15, VAR_17,
  "thermalmeter = 0x%x\n", VAR_25->eeprom_thermalmeter);
}
