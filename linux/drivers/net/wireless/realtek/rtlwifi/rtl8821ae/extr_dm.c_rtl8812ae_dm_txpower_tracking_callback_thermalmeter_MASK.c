
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ reloadtxpowerindex; } ;
struct rtl_efuse {int eeprom_thermalmeter; } ;
struct rtl_dm {int txpower_trackinginit; int swing_idx_cck_base; int* swing_idx_ofdm_base; size_t* thermalvalue_avg; size_t thermalvalue_avg_index; size_t thermalvalue; size_t thermalvalue_lck; size_t thermalvalue_iqk; size_t* delta_power_index_last; size_t* delta_power_index; size_t* absolute_ofdm_swing_idx; scalar_t__* power_index_offset; int* ofdm_index; int cck_index; int swing_idx_cck; int* swing_idx_ofdm; int txpower_track_control; int default_ofdm_index; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ieee80211_hw*,int ,size_t,size_t) ;
 int FUNC_2 (struct ieee80211_hw*,size_t,size_t,int) ;
 int FUNC_3 (struct ieee80211_hw*,size_t**,size_t**,size_t**,size_t**) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_5 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_6 (struct rtl_priv*) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,size_t,int ,int) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

void FUNC_10(
 struct ieee80211_hw *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_9(VAR_11);
 struct rtl_efuse *VAR_13 = FUNC_6(FUNC_9(VAR_11));
 struct rtl_dm *VAR_14 = FUNC_5(FUNC_9(VAR_11));
 struct rtl_hal *VAR_15 = FUNC_8(FUNC_9(VAR_11));
 u8 VAR_16 = 0, VAR_17, VAR_18, VAR_19, VAR_20 = 0, VAR_21 = 0;
 u8 VAR_22 = 0;
 u32 VAR_23 = 0;

 u8 VAR_24 = 6;

 u8 VAR_25 = 0;



 u8 *VAR_26;
 u8 *VAR_27;
 u8 *VAR_28;
 u8 *VAR_29;


 FUNC_3(VAR_11,
  (u8 **)&VAR_26,
  (u8 **)&VAR_27,
  (u8 **)&VAR_28,
  (u8 **)&VAR_29);

 VAR_14->txpower_trackinginit = 1;

 FUNC_0(VAR_12, VAR_1, VAR_2,
   "pDM_Odm->BbSwingIdxCckBase: %d, pDM_Odm->BbSwingIdxOfdmBase[A]:%d, pDM_Odm->DefaultOfdmIndex: %d\n",
   VAR_14->swing_idx_cck_base,
   VAR_14->swing_idx_ofdm_base[VAR_6],
   VAR_14->default_ofdm_index);

 VAR_16 = (u8)FUNC_7(VAR_11, VAR_6,

  VAR_8, 0xfc00);
 FUNC_0(VAR_12, VAR_1, VAR_2,
   "Thermal Meter = 0x%X, EFUSE Thermal Base = 0x%X\n",
   VAR_16, VAR_13->eeprom_thermalmeter);
 if (!VAR_14->txpower_track_control ||
     VAR_13->eeprom_thermalmeter == 0 ||
     VAR_13->eeprom_thermalmeter == 0xFF)
  return;



 if (VAR_15->reloadtxpowerindex)
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "reload ofdm index for band switch\n");


 VAR_14->thermalvalue_avg[VAR_14->thermalvalue_avg_index] = VAR_16;
 VAR_14->thermalvalue_avg_index++;
 if (VAR_14->thermalvalue_avg_index == VAR_0)

  VAR_14->thermalvalue_avg_index = 0;

 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
  if (VAR_14->thermalvalue_avg[VAR_21]) {
   VAR_23 += VAR_14->thermalvalue_avg[VAR_21];
   VAR_22++;
  }
 }

 if (VAR_22) {
  VAR_16 = (u8)(VAR_23 /
    VAR_22);
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "AVG Thermal Meter = 0x%X, EFUSE Thermal Base = 0x%X\n",
    VAR_16, VAR_13->eeprom_thermalmeter);
 }





 VAR_17 = (VAR_16 > VAR_14->thermalvalue) ?
  (VAR_16 - VAR_14->thermalvalue) :
  (VAR_14->thermalvalue - VAR_16);
 VAR_18 = (VAR_16 > VAR_14->thermalvalue_lck) ?
  (VAR_16 - VAR_14->thermalvalue_lck) :
  (VAR_14->thermalvalue_lck - VAR_16);
 VAR_19 = (VAR_16 > VAR_14->thermalvalue_iqk) ?
  (VAR_16 - VAR_14->thermalvalue_iqk) :
  (VAR_14->thermalvalue_iqk - VAR_16);

 FUNC_0(VAR_12, VAR_1, VAR_2,
   "(delta, delta_LCK, delta_IQK) = (%d, %d, %d)\n",
   VAR_17, VAR_18, VAR_19);




 if (VAR_18 >= VAR_3) {
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "delta_LCK(%d) >= Threshold_IQK(%d)\n",
    VAR_18, VAR_3);
  VAR_14->thermalvalue_lck = VAR_16;
  FUNC_4(VAR_11);
 }



 if (VAR_17 > 0 && VAR_14->txpower_track_control) {



  VAR_17 = VAR_16 > VAR_13->eeprom_thermalmeter ?
   (VAR_16 - VAR_13->eeprom_thermalmeter) :
   (VAR_13->eeprom_thermalmeter - VAR_16);

  if (VAR_17 >= VAR_9)
   VAR_17 = VAR_9 - 1;



  if (VAR_16 > VAR_13->eeprom_thermalmeter) {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "delta_swing_table_idx_tup_a[%d] = %d\n",
     VAR_17, VAR_26[VAR_17]);
   VAR_14->delta_power_index_last[VAR_6] =
    VAR_14->delta_power_index[VAR_6];
   VAR_14->delta_power_index[VAR_6] =
    VAR_26[VAR_17];

   VAR_14->absolute_ofdm_swing_idx[VAR_6] =
    VAR_26[VAR_17];


   FUNC_0(VAR_12, VAR_1, VAR_2,
     "******Temp is higher and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_A] = %d\n",
   VAR_14->absolute_ofdm_swing_idx[VAR_6]);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "delta_swing_table_idx_tup_b[%d] = %d\n",
     VAR_17, VAR_28[VAR_17]);
   VAR_14->delta_power_index_last[VAR_7] =
    VAR_14->delta_power_index[VAR_7];
   VAR_14->delta_power_index[VAR_7] =
    VAR_28[VAR_17];

   VAR_14->absolute_ofdm_swing_idx[VAR_7] =
    VAR_28[VAR_17];


   FUNC_0(VAR_12, VAR_1, VAR_2,
     "******Temp is higher and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_B] = %d\n",
     VAR_14->absolute_ofdm_swing_idx[VAR_7]);
  } else {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "delta_swing_table_idx_tdown_a[%d] = %d\n",
     VAR_17, VAR_27[VAR_17]);

   VAR_14->delta_power_index_last[VAR_6] =
    VAR_14->delta_power_index[VAR_6];
   VAR_14->delta_power_index[VAR_6] =
    -1 * VAR_27[VAR_17];

   VAR_14->absolute_ofdm_swing_idx[VAR_6] =
    -1 * VAR_27[VAR_17];

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "******Temp is lower and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_A] = %d\n",
     VAR_14->absolute_ofdm_swing_idx[VAR_6]);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "deltaSwingTableIdx_TDOWN_B[%d] = %d\n",
     VAR_17, VAR_29[VAR_17]);

   VAR_14->delta_power_index_last[VAR_7] =
    VAR_14->delta_power_index[VAR_7];
   VAR_14->delta_power_index[VAR_7] =
    -1 * VAR_29[VAR_17];

   VAR_14->absolute_ofdm_swing_idx[VAR_7] =
    -1 * VAR_29[VAR_17];


   FUNC_0(VAR_12, VAR_1, VAR_2,
     "******Temp is lower and pDM_Odm->Absolute_OFDMSwingIdx[ODM_RF_PATH_B] = %d\n",
     VAR_14->absolute_ofdm_swing_idx[VAR_7]);
  }

  for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++) {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "============================= [Path-%c]Calculating PowerIndexOffset =============================\n",
     (VAR_20 == VAR_6 ? 'A' : 'B'));

   if (VAR_14->delta_power_index[VAR_20] ==
    VAR_14->delta_power_index_last[VAR_20])


    VAR_14->power_index_offset[VAR_20] = 0;
   else
    VAR_14->power_index_offset[VAR_20] =
     VAR_14->delta_power_index[VAR_20] -
     VAR_14->delta_power_index_last[VAR_20];



   FUNC_0(VAR_12, VAR_1, VAR_2,
     "[Path-%c] PowerIndexOffset(%d) =DeltaPowerIndex(%d) -DeltaPowerIndexLast(%d)\n",
     (VAR_20 == VAR_6 ? 'A' : 'B'),
     VAR_14->power_index_offset[VAR_20],
     VAR_14->delta_power_index[VAR_20] ,
     VAR_14->delta_power_index_last[VAR_20]);

   VAR_14->ofdm_index[VAR_20] =
     VAR_14->swing_idx_ofdm_base[VAR_20] +
     VAR_14->power_index_offset[VAR_20];
   VAR_14->cck_index =
     VAR_14->swing_idx_cck_base +
     VAR_14->power_index_offset[VAR_20];

   VAR_14->swing_idx_cck = VAR_14->cck_index;
   VAR_14->swing_idx_ofdm[VAR_20] = VAR_14->ofdm_index[VAR_20];



   FUNC_0(VAR_12, VAR_1, VAR_2,
     "The 'CCK' final index(%d) = BaseIndex(%d) + PowerIndexOffset(%d)\n",
     VAR_14->swing_idx_cck,
    VAR_14->swing_idx_cck_base,
    VAR_14->power_index_offset[VAR_20]);
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "The 'OFDM' final index(%d) = BaseIndex[%c](%d) + PowerIndexOffset(%d)\n",
     VAR_14->swing_idx_ofdm[VAR_20],
     (VAR_20 == VAR_6 ? 'A' : 'B'),
     VAR_14->swing_idx_ofdm_base[VAR_20],
     VAR_14->power_index_offset[VAR_20]);



   if (VAR_14->ofdm_index[VAR_20] > VAR_10 - 1)
    VAR_14->ofdm_index[VAR_20] = VAR_10 - 1;
   else if (VAR_14->ofdm_index[VAR_20] < VAR_24)
    VAR_14->ofdm_index[VAR_20] = VAR_24;
  }
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "\n\n====================================================================================\n");
  if (VAR_14->cck_index > VAR_10 - 1)
   VAR_14->cck_index = VAR_10 - 1;
  else if (VAR_14->cck_index < 0)
   VAR_14->cck_index = 0;
 } else {
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "The thermal meter is unchanged or TxPowerTracking OFF(%d): ThermalValue: %d , pDM_Odm->RFCalibrateInfo.ThermalValue: %d\n",
    VAR_14->txpower_track_control,
    VAR_16,
    VAR_14->thermalvalue);

  for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++)
   VAR_14->power_index_offset[VAR_20] = 0;
 }

 FUNC_0(VAR_12, VAR_1, VAR_2,
   "TxPowerTracking: [CCK] Swing Current Index: %d,Swing Base Index: %d\n",
   VAR_14->cck_index, VAR_14->swing_idx_cck_base);
 for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++) {
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "TxPowerTracking: [OFDM] Swing Current Index: %d,Swing Base Index[%c]: %d\n",
    VAR_14->ofdm_index[VAR_20],
    (VAR_20 == VAR_6 ? 'A' : 'B'),
    VAR_14->swing_idx_ofdm_base[VAR_20]);
 }

 if ((VAR_14->power_index_offset[VAR_6] != 0 ||
  VAR_14->power_index_offset[VAR_7] != 0) &&
  VAR_14->txpower_track_control) {
  if (VAR_16 > VAR_14->thermalvalue) {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature Increasing(A): delta_pi: %d , delta_t: %d, Now_t: %d,EFUSE_t: %d, Last_t: %d\n",
     VAR_14->power_index_offset[VAR_6],
     VAR_17, VAR_16,
     VAR_13->eeprom_thermalmeter,
     VAR_14->thermalvalue);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature Increasing(B): delta_pi: %d ,delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
     VAR_14->power_index_offset[VAR_7],
     VAR_17, VAR_16,
     VAR_13->eeprom_thermalmeter,
     VAR_14->thermalvalue);
  } else if (VAR_16 < VAR_14->thermalvalue) {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature Decreasing(A): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
     VAR_14->power_index_offset[VAR_6],
     VAR_17, VAR_16,
     VAR_13->eeprom_thermalmeter,
     VAR_14->thermalvalue);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature Decreasing(B): delta_pi: %d , delta_t: %d, Now_t: %d, EFUSE_t: %d, Last_t: %d\n",
     VAR_14->power_index_offset[VAR_7],
     VAR_17, VAR_16,
     VAR_13->eeprom_thermalmeter,
     VAR_14->thermalvalue);
  }

  if (VAR_16 > VAR_13->eeprom_thermalmeter) {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature(%d) higher than PG value(%d)\n",
     VAR_16, VAR_13->eeprom_thermalmeter);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "**********Enter POWER Tracking MIX_MODE**********\n");
   for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++)
    FUNC_1(VAR_11, VAR_5,
         VAR_20, 0);
  } else {
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "Temperature(%d) lower than PG value(%d)\n",
     VAR_16, VAR_13->eeprom_thermalmeter);

   FUNC_0(VAR_12, VAR_1, VAR_2,
     "**********Enter POWER Tracking MIX_MODE**********\n");
   for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++)
    FUNC_1(VAR_11, VAR_5,
         VAR_20, VAR_25);
  }

  VAR_14->swing_idx_cck_base = VAR_14->swing_idx_cck;
  for (VAR_20 = VAR_6; VAR_20 < VAR_4; VAR_20++)
    VAR_14->swing_idx_ofdm_base[VAR_20] =
     VAR_14->swing_idx_ofdm[VAR_20];

  FUNC_0(VAR_12, VAR_1, VAR_2,
    "pDM_Odm->RFCalibrateInfo.ThermalValue =%d ThermalValue= %d\n",
    VAR_14->thermalvalue, VAR_16);

  VAR_14->thermalvalue = VAR_16;
 }


 if (VAR_19 >= VAR_3)
  FUNC_2(VAR_11, VAR_19, VAR_16, 8);

 FUNC_0(VAR_12, VAR_1, VAR_2,
   "<===rtl8812ae_dm_txpower_tracking_callback_thermalmeter\n");
}
