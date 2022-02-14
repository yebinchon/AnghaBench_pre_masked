
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int txpower_trackinginit; int thermalvalue; int thermalvalue_lck; int thermalvalue_iqk; int* ofdm_index; int cck_index; int done_txpower; scalar_t__ txpower_track_control; scalar_t__ cck_inch14; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_hal {int reloadtxpowerindex; } ;
struct rtl_efuse {int eeprom_thermalmeter; } ;
struct rtl_dm {int* swing_idx_ofdm_base; int swing_idx_cck_base; int thermalvalue; int* thermalvalue_avg; size_t thermalvalue_avg_index; int* ofdm_index; int cck_index; int done_txpower; int* swing_idx_ofdm; int swing_idx_cck; scalar_t__ swing_idx_ofdm_cur; int swing_flag_ofdm; int swing_idx_cck_cur; int swing_flag_cck; scalar_t__ txpowercount; scalar_t__ txpower_track_control; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_15 ;
 int ** VAR_16 ;
 int ** VAR_17 ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (long*,int *,int) ;
 long* VAR_18 ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_6 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_7 (struct rtl_priv*) ;
 long FUNC_8 (struct ieee80211_hw*,int ,int ) ;
 scalar_t__ FUNC_9 (struct ieee80211_hw*,size_t,int ,int) ;
 struct rtl_hal* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_11(VAR_19);
 struct rtl_efuse *VAR_21 = FUNC_7(FUNC_11(VAR_19));
 struct rtl_dm *VAR_22 = FUNC_6(FUNC_11(VAR_19));
 struct rtl_hal *VAR_23 = FUNC_10(FUNC_11(VAR_19));
 u8 VAR_24 = 0, VAR_25, VAR_26, VAR_27, VAR_28;
 u8 VAR_29 = 0;
 u32 VAR_30 = 0;
 long VAR_31, VAR_32;
 s8 VAR_33[2], VAR_34 = 0,
  VAR_35[2] = {0, 0}, VAR_36 = 0;
 int VAR_37 = 0;


 u8 VAR_38 = 6, VAR_39 = 1;

 enum _power_dec_inc {power_dec, power_inc};




 s8 VAR_40[2][15] = {
  {0, 0, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11},
  {0, 0, -1, -2, -3, -4, -4, -4, -4, -5, -7, -8, -9, -9, -10}
 };
 u8 VAR_41[2][15] = {
  {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 27},
  {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 25, 25, 25}
 };


 VAR_20->dm.txpower_trackinginit = 1;
 FUNC_1(VAR_20, VAR_3, VAR_4,
   "dm_txpower_track_cb_therm\n");

 VAR_24 = (u8)FUNC_9(VAR_19, VAR_12, VAR_13,
      0xfc00);
 if (!VAR_24)
  return;
 FUNC_1(VAR_20, VAR_3, VAR_4,
   "Readback Thermal Meter = 0x%x pre thermal meter 0x%x eeprom_thermalmeter 0x%x\n",
   VAR_24, VAR_20->dm.thermalvalue,
   VAR_21->eeprom_thermalmeter);


 VAR_31 = FUNC_8(VAR_19, VAR_14, VAR_7) &
         VAR_8;
 for (VAR_37 = 0; VAR_37 < VAR_9; VAR_37++) {
  if (VAR_31 == (VAR_18[VAR_37] & VAR_8)) {
   VAR_35[0] = (u8)VAR_37;
   VAR_22->swing_idx_ofdm_base[VAR_12] = (u8)VAR_37;
   FUNC_1(VAR_20, VAR_3, VAR_4,
     "Initial pathA ele_d reg0x%x = 0x%lx, ofdm_index = 0x%x\n",
     VAR_14,
     VAR_31, VAR_35[0]);
   break;
  }
 }


 VAR_32 = FUNC_8(VAR_19, VAR_11, VAR_7) & VAR_6;
 for (VAR_37 = 0; VAR_37 < VAR_1; VAR_37++) {
  if (VAR_20->dm.cck_inch14) {
   if (FUNC_3(&VAR_32, &VAR_16[VAR_37][2], 4) == 0) {
    VAR_36 = (u8)VAR_37;
    VAR_22->swing_idx_cck_base = (u8)VAR_37;
    FUNC_1(VAR_20, VAR_3,
      VAR_4,
      "Initial reg0x%x = 0x%lx, cck_index = 0x%x, ch 14 %d\n",
      VAR_11, VAR_32,
      VAR_36,
      VAR_20->dm.cck_inch14);
    break;
   }
  } else {
   if (FUNC_3(&VAR_32, &VAR_17[VAR_37][2], 4) == 0) {
    VAR_36 = (u8)VAR_37;
    VAR_22->swing_idx_cck_base = (u8)VAR_37;
    FUNC_1(VAR_20, VAR_3,
      VAR_4,
      "Initial reg0x%x = 0x%lx, cck_index = 0x%x, ch14 %d\n",
      VAR_11, VAR_32,
      VAR_36,
      VAR_20->dm.cck_inch14);
    break;
   }
  }
 }


 if (!VAR_22->thermalvalue) {
  VAR_20->dm.thermalvalue = VAR_21->eeprom_thermalmeter;
  VAR_20->dm.thermalvalue_lck = VAR_24;
  VAR_20->dm.thermalvalue_iqk = VAR_24;
  for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
   VAR_20->dm.ofdm_index[VAR_37] = VAR_35[VAR_37];
  VAR_20->dm.cck_index = VAR_36;
 }


 VAR_22->thermalvalue_avg[VAR_22->thermalvalue_avg_index] = VAR_24;
 VAR_22->thermalvalue_avg_index++;
 if (VAR_22->thermalvalue_avg_index == VAR_0)
  VAR_22->thermalvalue_avg_index = 0;

 for (VAR_37 = 0; VAR_37 < VAR_0; VAR_37++) {
  if (VAR_22->thermalvalue_avg[VAR_37]) {
   VAR_30 += VAR_22->thermalvalue_avg[VAR_37];
   VAR_29++;
  }
 }

 if (VAR_29)
  VAR_24 = (u8)(VAR_30 / VAR_29);


 if (VAR_23->reloadtxpowerindex) {
  VAR_25 = (VAR_24 > VAR_21->eeprom_thermalmeter) ?
      (VAR_24 - VAR_21->eeprom_thermalmeter) :
      (VAR_21->eeprom_thermalmeter - VAR_24);
  VAR_23->reloadtxpowerindex = 0;
  VAR_20->dm.done_txpower = 0;
 } else if (VAR_20->dm.done_txpower) {
  VAR_25 = (VAR_24 > VAR_20->dm.thermalvalue) ?
      (VAR_24 - VAR_20->dm.thermalvalue) :
      (VAR_20->dm.thermalvalue - VAR_24);
 } else {
  VAR_25 = (VAR_24 > VAR_21->eeprom_thermalmeter) ?
      (VAR_24 - VAR_21->eeprom_thermalmeter) :
      (VAR_21->eeprom_thermalmeter - VAR_24);
 }
 VAR_26 = (VAR_24 > VAR_20->dm.thermalvalue_lck) ?
     (VAR_24 - VAR_20->dm.thermalvalue_lck) :
     (VAR_20->dm.thermalvalue_lck - VAR_24);
 VAR_27 = (VAR_24 > VAR_20->dm.thermalvalue_iqk) ?
     (VAR_24 - VAR_20->dm.thermalvalue_iqk) :
     (VAR_20->dm.thermalvalue_iqk - VAR_24);

 FUNC_1(VAR_20, VAR_3, VAR_4,
   "Readback Thermal Meter = 0x%x pre thermal meter 0x%x eeprom_thermalmeter 0x%x delta 0x%x delta_lck 0x%x delta_iqk 0x%x\n",
   VAR_24, VAR_20->dm.thermalvalue,
   VAR_21->eeprom_thermalmeter, VAR_25, VAR_26,
   VAR_27);

 if (VAR_26 >= 8) {
  VAR_20->dm.thermalvalue_lck = VAR_24;
  FUNC_5(VAR_19);
 }




 if (VAR_25 > 0 && VAR_20->dm.txpower_track_control) {
  VAR_25 = (VAR_24 > VAR_21->eeprom_thermalmeter) ?
      (VAR_24 - VAR_21->eeprom_thermalmeter) :
      (VAR_21->eeprom_thermalmeter - VAR_24);




  if (VAR_24 > VAR_21->eeprom_thermalmeter) {
   FUNC_0(VAR_28, power_inc, VAR_5,
          VAR_25);
   for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
    VAR_33[VAR_37] =
      VAR_22->ofdm_index[VAR_37] +
      VAR_40[power_inc][VAR_28];
   VAR_34 = VAR_22->cck_index +
    VAR_40[power_inc][VAR_28];
  } else {
   FUNC_0(VAR_28, power_dec, VAR_5,
          VAR_25);
   for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
    VAR_33[VAR_37] =
      VAR_22->ofdm_index[VAR_37] +
      VAR_40[power_dec][VAR_28];
   VAR_34 = VAR_22->cck_index +
    VAR_40[power_dec][VAR_28];
  }


  for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++) {
   if (VAR_33[VAR_37] > VAR_10-1)
    VAR_33[VAR_37] = VAR_10-1;
   else if (VAR_22->ofdm_index[VAR_37] < VAR_38)
    VAR_33[VAR_37] = VAR_38;
  }

  if (VAR_34 > VAR_2-1)
   VAR_34 = VAR_2-1;
  else if (VAR_34 < 0)
   VAR_34 = 0;


  if (VAR_20->dm.txpower_track_control) {
   VAR_22->done_txpower = 1;
   VAR_22->swing_idx_ofdm[VAR_12] =
    (u8)VAR_33[VAR_12];
   VAR_22->swing_idx_cck = VAR_34;
   if (VAR_22->swing_idx_ofdm_cur !=
       VAR_22->swing_idx_ofdm[0]) {
    VAR_22->swing_idx_ofdm_cur =
      VAR_22->swing_idx_ofdm[0];
    VAR_22->swing_flag_ofdm = 1;
   }

   if (VAR_22->swing_idx_cck_cur != VAR_22->swing_idx_cck) {
    VAR_22->swing_idx_cck_cur = VAR_22->swing_idx_cck;
    VAR_22->swing_flag_cck = 1;
   }

   FUNC_2(VAR_19, VAR_15, 0, 0);
  }
 }

 if (VAR_27 >= 8) {
  VAR_20->dm.thermalvalue_iqk = VAR_24;
  FUNC_4(VAR_19, 0);
 }

 if (VAR_22->txpower_track_control)
  VAR_22->thermalvalue = VAR_24;
 VAR_22->txpowercount = 0;
 FUNC_1(VAR_20, VAR_3, VAR_4, "end\n");
}
