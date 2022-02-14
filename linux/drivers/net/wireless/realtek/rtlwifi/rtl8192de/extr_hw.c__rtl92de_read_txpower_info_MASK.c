
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct txpower_info {int** ht40_1sindex; int** ht40_2sindexdiff; int ** ht40maxoffset; int ** ht20maxoffset; int ** ofdmindexdiff; int ** ht20indexdiff; int ** cck_index; } ;
struct TYPE_2__ {int version; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct rtl_efuse {int eeprom_regulatory; int eeprom_thermalmeter; int crystalcap; int txpwr_fromeprom; int* internal_pa_5g; int eeprom_c9; int eeprom_cc; int* thermalmeter; int delta_iqk; int delta_lck; int** txpwrlevel_ht40_1s; int** txpwrlevel_ht40_2s; int ** pwrgroup_ht40; int ** pwrgroup_ht20; int ** txpwr_legacyhtdiff; int ** txpwr_ht20diff; int ** txpwrlevel_cck; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_17 ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_4 (struct txpower_info*,int*,int) ;
 size_t FUNC_5 (int) ;
 struct rtl_efuse* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_18,
           bool VAR_19, u8 *VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_7(VAR_18);
 struct rtl_efuse *VAR_22 = FUNC_6(FUNC_7(VAR_18));
 struct txpower_info VAR_23;
 u8 VAR_24[2], VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29, VAR_30;

 FUNC_4(&VAR_23, VAR_20, VAR_19);
 if (!VAR_19) {

  VAR_22->eeprom_regulatory = (VAR_20[VAR_10] & 0x7);
  VAR_22->eeprom_thermalmeter =
    VAR_20[VAR_13] & 0x1f;
  VAR_22->crystalcap = VAR_20[VAR_16];
  VAR_24[0] = VAR_20[VAR_8] & 0x03;
  VAR_24[1] = (VAR_20[VAR_9] & 0x0C) >> 2;
  VAR_22->txpwr_fromeprom = 1;
  if (FUNC_1(VAR_21->rtlhal.version) ||
      FUNC_2(VAR_21->rtlhal.version)) {
   VAR_22->internal_pa_5g[0] =
    !((VAR_20[VAR_14] & FUNC_0(6)) >> 6);
   VAR_22->internal_pa_5g[1] =
    !((VAR_20[VAR_15] & FUNC_0(6)) >> 6);
   FUNC_3(VAR_21, VAR_2, VAR_4,
     "Is D cut,Internal PA0 %d Internal PA1 %d\n",
     VAR_22->internal_pa_5g[0],
     VAR_22->internal_pa_5g[1]);
  }
  VAR_22->eeprom_c9 = VAR_20[VAR_11];
  VAR_22->eeprom_cc = VAR_20[VAR_12];
 } else {
  VAR_22->eeprom_regulatory = 0;
  VAR_22->eeprom_thermalmeter = VAR_7;
  VAR_22->crystalcap = VAR_6;
  VAR_24[0] = VAR_24[1] = 3;
 }





 if (VAR_22->eeprom_thermalmeter < 0x06 ||
     VAR_22->eeprom_thermalmeter > 0x1c)
  VAR_22->eeprom_thermalmeter = 0x12;
 VAR_22->thermalmeter[0] = VAR_22->eeprom_thermalmeter;


 if (VAR_22->crystalcap == 0xFF)
  VAR_22->crystalcap = 0;
 if (VAR_22->eeprom_regulatory > 3)
  VAR_22->eeprom_regulatory = 0;

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  switch (VAR_24[VAR_25]) {
  case 0:
   VAR_24[VAR_25] = 5;
   break;
  case 1:
   VAR_24[VAR_25] = 4;
   break;
  case 2:
   VAR_24[VAR_25] = 3;
   break;
  case 3:
  default:
   VAR_24[VAR_25] = 0;
   break;
  }
 }

 VAR_22->delta_iqk = VAR_24[0];
 if (VAR_24[1] > 0)
  VAR_22->delta_lck = VAR_24[1] - 1;
 if (VAR_22->eeprom_c9 == 0xFF)
  VAR_22->eeprom_c9 = 0x00;
 FUNC_3(VAR_21, VAR_3, VAR_5,
   "EEPROMRegulatory = 0x%x\n", VAR_22->eeprom_regulatory);
 FUNC_3(VAR_21, VAR_3, VAR_5,
   "ThermalMeter = 0x%x\n", VAR_22->eeprom_thermalmeter);
 FUNC_3(VAR_21, VAR_3, VAR_5,
   "CrystalCap = 0x%x\n", VAR_22->crystalcap);
 FUNC_3(VAR_21, VAR_3, VAR_5,
   "Delta_IQK = 0x%x Delta_LCK = 0x%x\n",
   VAR_22->delta_iqk, VAR_22->delta_lck);

 for (VAR_29 = 0; VAR_29 < VAR_17; VAR_29++) {
  for (VAR_28 = 0; VAR_28 < VAR_0; VAR_28++) {
   VAR_30 = FUNC_5((u8) VAR_28);
   if (VAR_28 < VAR_1)
    VAR_22->txpwrlevel_cck[VAR_29][VAR_28] =
        VAR_23.cck_index[VAR_29][VAR_30];
   VAR_22->txpwrlevel_ht40_1s[VAR_29][VAR_28] =
        VAR_23.ht40_1sindex[VAR_29][VAR_30];
   VAR_22->txpwr_ht20diff[VAR_29][VAR_28] =
        VAR_23.ht20indexdiff[VAR_29][VAR_30];
   VAR_22->txpwr_legacyhtdiff[VAR_29][VAR_28] =
        VAR_23.ofdmindexdiff[VAR_29][VAR_30];
   VAR_22->pwrgroup_ht20[VAR_29][VAR_28] =
        VAR_23.ht20maxoffset[VAR_29][VAR_30];
   VAR_22->pwrgroup_ht40[VAR_29][VAR_28] =
        VAR_23.ht40maxoffset[VAR_29][VAR_30];
   VAR_26 = VAR_23.ht40_1sindex[VAR_29][VAR_30];
   VAR_27 = VAR_23.ht40_2sindexdiff[VAR_29][VAR_30];
   VAR_22->txpwrlevel_ht40_2s[VAR_29][VAR_28] =
        (VAR_26 > VAR_27) ? (VAR_26 - VAR_27) : 0;
  }
 }
}
