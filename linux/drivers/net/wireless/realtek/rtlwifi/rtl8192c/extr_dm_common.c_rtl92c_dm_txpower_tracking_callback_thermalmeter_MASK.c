
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u8 ;
struct TYPE_2__ {int txpower_trackinginit; long thermalvalue; long thermalvalue_lck; long thermalvalue_iqk; long* ofdm_index; long cck_index; scalar_t__ txpower_track_control; scalar_t__ cck_inch14; } ;
struct rtl_phy {long reg_e94; long reg_e9c; long reg_eb4; long reg_ebc; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct rtl_efuse {long eeprom_thermalmeter; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
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
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int ** VAR_18 ;
 int ** VAR_19 ;
 scalar_t__ FUNC_3 (void*,void*,int) ;
 long* VAR_20 ;
 int FUNC_4 (struct ieee80211_hw*,long) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_7 (struct rtl_priv*) ;
 long FUNC_8 (struct ieee80211_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct ieee80211_hw*,int ,int ,int) ;
 struct rtl_hal* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_13 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw
            *VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_11(VAR_21);
 struct rtl_hal *VAR_23 = FUNC_10(FUNC_11(VAR_21));
 struct rtl_phy *VAR_24 = &(VAR_22->phy);
 struct rtl_efuse *VAR_25 = FUNC_7(FUNC_11(VAR_21));
 u8 VAR_26, VAR_27, VAR_28, VAR_29;
 long VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 long VAR_35, VAR_36 = 0;
 u8 VAR_37[2], VAR_38[2] = {0, 0}, VAR_39 = 0;
 s8 VAR_40 = 0;
 int VAR_41;
 bool VAR_42 = FUNC_1(VAR_23->version);
 s8 VAR_43[3] = {0, 0, 0};
 u8 VAR_44 = 6, VAR_45;

 VAR_22->dm.txpower_trackinginit = 1;
 FUNC_2(VAR_22, VAR_2, VAR_3,
   "rtl92c_dm_txpower_tracking_callback_thermalmeter\n");

 VAR_26 = (u8) FUNC_9(VAR_21, VAR_11, VAR_12, 0x1f);

 FUNC_2(VAR_22, VAR_2, VAR_3,
   "Readback Thermal Meter = 0x%x pre thermal meter 0x%x eeprom_thermalmeter 0x%x\n",
   VAR_26, VAR_22->dm.thermalvalue,
   VAR_25->eeprom_thermalmeter);

 FUNC_4(VAR_21, (VAR_26 -
         VAR_25->eeprom_thermalmeter));
 if (VAR_42)
  VAR_45 = 2;
 else
  VAR_45 = 1;

 if (VAR_26) {
  VAR_31 = FUNC_8(VAR_21, VAR_14,
          VAR_5) & VAR_7;

  for (VAR_41 = 0; VAR_41 < VAR_8; VAR_41++) {
   if (VAR_31 == (VAR_20[VAR_41] & VAR_7)) {
    VAR_38[0] = (u8) VAR_41;

    FUNC_2(VAR_22, VAR_2, VAR_3,
      "Initial pathA ele_d reg0x%x = 0x%lx, ofdm_index=0x%x\n",
      VAR_14,
      VAR_31, VAR_38[0]);
    break;
   }
  }

  if (VAR_42) {
   VAR_31 = FUNC_8(VAR_21, VAR_15,
           VAR_5) & VAR_7;

   for (VAR_41 = 0; VAR_41 < VAR_8; VAR_41++) {
    if (VAR_31 == (VAR_20[VAR_41] &
        VAR_7)) {
     VAR_38[1] = (u8) VAR_41;
     FUNC_2(VAR_22, VAR_2,
       VAR_3,
       "Initial pathB ele_d reg0x%x = 0x%lx, ofdm_index=0x%x\n",
       VAR_15, VAR_31,
       VAR_38[1]);
     break;
    }
   }
  }

  VAR_32 =
      FUNC_8(VAR_21, VAR_10, VAR_5) & VAR_4;

  for (VAR_41 = 0; VAR_41 < VAR_0; VAR_41++) {
   if (VAR_22->dm.cck_inch14) {
    if (FUNC_3((void *)&VAR_32,
        (void *)&VAR_18[VAR_41][2],
        4) == 0) {
     VAR_39 = (u8) VAR_41;

     FUNC_2(VAR_22, VAR_2,
       VAR_3,
       "Initial reg0x%x = 0x%lx, cck_index=0x%x, ch 14 %d\n",
       VAR_10, VAR_32,
       VAR_39,
       VAR_22->dm.cck_inch14);
     break;
    }
   } else {
    if (FUNC_3((void *)&VAR_32,
        (void *)
        &VAR_19[VAR_41][2],
        4) == 0) {
     VAR_39 = (u8) VAR_41;

     FUNC_2(VAR_22, VAR_2,
       VAR_3,
       "Initial reg0x%x = 0x%lx, cck_index=0x%x, ch14 %d\n",
       VAR_10, VAR_32,
       VAR_39,
       VAR_22->dm.cck_inch14);
     break;
    }
   }
  }

  if (!VAR_22->dm.thermalvalue) {
   VAR_22->dm.thermalvalue =
       VAR_25->eeprom_thermalmeter;
   VAR_22->dm.thermalvalue_lck = VAR_26;
   VAR_22->dm.thermalvalue_iqk = VAR_26;
   for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++)
    VAR_22->dm.ofdm_index[VAR_41] = VAR_38[VAR_41];
   VAR_22->dm.cck_index = VAR_39;
  }


  VAR_27 = (VAR_26 > VAR_22->dm.thermalvalue) ?
      (VAR_26 - VAR_22->dm.thermalvalue) :
      (VAR_22->dm.thermalvalue - VAR_26);

  VAR_28 = (VAR_26 > VAR_22->dm.thermalvalue_lck) ?
      (VAR_26 - VAR_22->dm.thermalvalue_lck) :
      (VAR_22->dm.thermalvalue_lck - VAR_26);

  VAR_29 = (VAR_26 > VAR_22->dm.thermalvalue_iqk) ?
      (VAR_26 - VAR_22->dm.thermalvalue_iqk) :
      (VAR_22->dm.thermalvalue_iqk - VAR_26);

  FUNC_2(VAR_22, VAR_2, VAR_3,
    "Readback Thermal Meter = 0x%x pre thermal meter 0x%x eeprom_thermalmeter 0x%x delta 0x%x delta_lck 0x%x delta_iqk 0x%x\n",
    VAR_26, VAR_22->dm.thermalvalue,
    VAR_25->eeprom_thermalmeter, VAR_27, VAR_28,
    VAR_29);

  if (VAR_28 > 1) {
   VAR_22->dm.thermalvalue_lck = VAR_26;
   FUNC_6(VAR_21);
  }

  if (VAR_27 > 0 && VAR_22->dm.txpower_track_control) {
   if (VAR_26 > VAR_22->dm.thermalvalue) {
    for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++)
     VAR_22->dm.ofdm_index[VAR_41] -= VAR_27;
    VAR_22->dm.cck_index -= VAR_27;
   } else {
    for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++)
     VAR_22->dm.ofdm_index[VAR_41] += VAR_27;
    VAR_22->dm.cck_index += VAR_27;
   }

   if (VAR_42) {
    FUNC_2(VAR_22, VAR_2, VAR_3,
      "temp OFDM_A_index=0x%x, OFDM_B_index=0x%x, cck_index=0x%x\n",
      VAR_22->dm.ofdm_index[0],
      VAR_22->dm.ofdm_index[1],
      VAR_22->dm.cck_index);
   } else {
    FUNC_2(VAR_22, VAR_2, VAR_3,
      "temp OFDM_A_index=0x%x, cck_index=0x%x\n",
      VAR_22->dm.ofdm_index[0],
      VAR_22->dm.cck_index);
   }

   if (VAR_26 > VAR_25->eeprom_thermalmeter) {
    for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++)
     VAR_37[VAR_41] =
         VAR_22->dm.ofdm_index[VAR_41]
         + 1;
    VAR_40 = VAR_22->dm.cck_index + 1;
   } else {
    for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++)
     VAR_37[VAR_41] =
         VAR_22->dm.ofdm_index[VAR_41];
    VAR_40 = VAR_22->dm.cck_index;
   }

   for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++) {
    if (VAR_43[VAR_41] >= 0 &&
        VAR_43[VAR_41] <= 26) {
     if (VAR_26 >
         VAR_25->eeprom_thermalmeter) {
      if (VAR_27 < 5)
       VAR_37[VAR_41] -= 1;

      else
       VAR_37[VAR_41] -= 2;
     } else if (VAR_27 > 5 && VAR_26 <
         VAR_25->
         eeprom_thermalmeter) {
      VAR_37[VAR_41] += 1;
     }
    } else if (VAR_43[VAR_41] >= 27 &&
        VAR_43[VAR_41] <= 32
        && VAR_26 >
        VAR_25->eeprom_thermalmeter) {
     if (VAR_27 < 5)
      VAR_37[VAR_41] -= 1;

     else
      VAR_37[VAR_41] -= 2;
    } else if (VAR_43[VAR_41] >= 32 &&
        VAR_43[VAR_41] <= 38 &&
        VAR_26 >
        VAR_25->eeprom_thermalmeter
        && VAR_27 > 5) {
     VAR_37[VAR_41] -= 1;
    }
   }

   if (VAR_43[VAR_41] >= 0 && VAR_43[VAR_41] <= 26) {
    if (VAR_26 >
        VAR_25->eeprom_thermalmeter) {
     if (VAR_27 < 5)
      VAR_40 -= 1;

     else
      VAR_40 -= 2;
    } else if (VAR_27 > 5 && VAR_26 <
        VAR_25->eeprom_thermalmeter) {
     VAR_40 += 1;
    }
   } else if (VAR_43[VAR_41] >= 27 &&
       VAR_43[VAR_41] <= 32 &&
       VAR_26 >
       VAR_25->eeprom_thermalmeter) {
    if (VAR_27 < 5)
     VAR_40 -= 1;

    else
     VAR_40 -= 2;
   } else if (VAR_43[VAR_41] >= 32 &&
       VAR_43[VAR_41] <= 38 &&
       VAR_26 > VAR_25->eeprom_thermalmeter
       && VAR_27 > 5) {
    VAR_40 -= 1;
   }

   for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++) {
    if (VAR_37[VAR_41] > VAR_9 - 1)
     VAR_37[VAR_41] = VAR_9 - 1;

    else if (VAR_37[VAR_41] < VAR_44)
     VAR_37[VAR_41] = VAR_44;
   }

   if (VAR_40 > VAR_1 - 1)
    VAR_40 = VAR_1 - 1;
   else if (VAR_40 < 0)
    VAR_40 = 0;

   if (VAR_42) {
    FUNC_2(VAR_22, VAR_2, VAR_3,
      "new OFDM_A_index=0x%x, OFDM_B_index=0x%x, cck_index=0x%x\n",
      VAR_37[0], VAR_37[1],
      VAR_40);
   } else {
    FUNC_2(VAR_22, VAR_2, VAR_3,
      "new OFDM_A_index=0x%x, cck_index=0x%x\n",
      VAR_37[0], VAR_40);
   }
  }

  if (VAR_22->dm.txpower_track_control && VAR_27 != 0) {
   VAR_31 =
       (VAR_20[VAR_37[0]] & 0xFFC00000) >> 22;
   VAR_33 = VAR_24->reg_e94;
   VAR_35 = VAR_24->reg_e9c;

   if (VAR_33 != 0) {
    if ((VAR_33 & 0x00000200) != 0)
     VAR_33 = VAR_33 | 0xFFFFFC00;
    VAR_30 = ((VAR_33 * VAR_31) >> 8) & 0x000003FF;

    if ((VAR_35 & 0x00000200) != 0)
     VAR_35 = VAR_35 | 0xFFFFFC00;
    VAR_36 = ((VAR_35 * VAR_31) >> 8) & 0x000003FF;

    VAR_34 = (VAR_31 << 22) |
        ((VAR_36 & 0x3F) << 16) | VAR_30;

    FUNC_12(VAR_21, VAR_14,
           VAR_5, VAR_34);

    VAR_34 = (VAR_36 & 0x000003C0) >> 6;
    FUNC_12(VAR_21, VAR_16, VAR_6,
           VAR_34);

    VAR_34 = ((VAR_33 * VAR_31) >> 7) & 0x01;
    FUNC_12(VAR_21, VAR_13,
           FUNC_0(31), VAR_34);

    VAR_34 = ((VAR_35 * VAR_31) >> 7) & 0x01;
    FUNC_12(VAR_21, VAR_13,
           FUNC_0(29), VAR_34);
   } else {
    FUNC_12(VAR_21, VAR_14,
           VAR_5,
           VAR_20[VAR_37[0]]);

    FUNC_12(VAR_21, VAR_16, VAR_6,
           0x00);
    FUNC_12(VAR_21, VAR_13,
           FUNC_0(31) | FUNC_0(29), 0x00);
   }

   if (!VAR_22->dm.cck_inch14) {
    FUNC_13(VAR_22, 0xa22,
            VAR_19[VAR_40]
            [0]);
    FUNC_13(VAR_22, 0xa23,
            VAR_19[VAR_40]
            [1]);
    FUNC_13(VAR_22, 0xa24,
            VAR_19[VAR_40]
            [2]);
    FUNC_13(VAR_22, 0xa25,
            VAR_19[VAR_40]
            [3]);
    FUNC_13(VAR_22, 0xa26,
            VAR_19[VAR_40]
            [4]);
    FUNC_13(VAR_22, 0xa27,
            VAR_19[VAR_40]
            [5]);
    FUNC_13(VAR_22, 0xa28,
            VAR_19[VAR_40]
            [6]);
    FUNC_13(VAR_22, 0xa29,
            VAR_19[VAR_40]
            [7]);
   } else {
    FUNC_13(VAR_22, 0xa22,
            VAR_18[VAR_40]
            [0]);
    FUNC_13(VAR_22, 0xa23,
            VAR_18[VAR_40]
            [1]);
    FUNC_13(VAR_22, 0xa24,
            VAR_18[VAR_40]
            [2]);
    FUNC_13(VAR_22, 0xa25,
            VAR_18[VAR_40]
            [3]);
    FUNC_13(VAR_22, 0xa26,
            VAR_18[VAR_40]
            [4]);
    FUNC_13(VAR_22, 0xa27,
            VAR_18[VAR_40]
            [5]);
    FUNC_13(VAR_22, 0xa28,
            VAR_18[VAR_40]
            [6]);
    FUNC_13(VAR_22, 0xa29,
            VAR_18[VAR_40]
            [7]);
   }

   if (VAR_42) {
    VAR_31 = (VAR_20[VAR_37[1]] &
      0xFFC00000) >> 22;

    VAR_33 = VAR_24->reg_eb4;
    VAR_35 = VAR_24->reg_ebc;

    if (VAR_33 != 0) {
     if ((VAR_33 & 0x00000200) != 0)
      VAR_33 = VAR_33 | 0xFFFFFC00;
     VAR_30 = ((VAR_33 * VAR_31) >> 8) &
         0x000003FF;

     if ((VAR_35 & 0x00000200) != 0)
      VAR_35 = VAR_35 | 0xFFFFFC00;
     VAR_36 = ((VAR_35 * VAR_31) >> 8) &
         0x00003FF;

     VAR_34 = (VAR_31 << 22) |
         ((VAR_36 & 0x3F) << 16) | VAR_30;
     FUNC_12(VAR_21,
            VAR_15,
            VAR_5, VAR_34);

     VAR_34 = (VAR_36 & 0x000003C0) >> 6;
     FUNC_12(VAR_21, VAR_17,
            VAR_6, VAR_34);

     VAR_34 = ((VAR_33 * VAR_31) >> 7) & 0x01;
     FUNC_12(VAR_21, VAR_13,
            FUNC_0(27), VAR_34);

     VAR_34 = ((VAR_35 * VAR_31) >> 7) & 0x01;
     FUNC_12(VAR_21, VAR_13,
            FUNC_0(25), VAR_34);
    } else {
     FUNC_12(VAR_21,
            VAR_15,
            VAR_5,
            VAR_20[VAR_37
              [1]]);
     FUNC_12(VAR_21, VAR_17,
            VAR_6, 0x00);
     FUNC_12(VAR_21, VAR_13,
            FUNC_0(27) | FUNC_0(25), 0x00);
    }

   }
  }

  if (VAR_29 > 3) {
   VAR_22->dm.thermalvalue_iqk = VAR_26;
   FUNC_5(VAR_21, 0);
  }

  if (VAR_22->dm.txpower_track_control)
   VAR_22->dm.thermalvalue = VAR_26;
 }

 FUNC_2(VAR_22, VAR_2, VAR_3, "<===\n");

}
