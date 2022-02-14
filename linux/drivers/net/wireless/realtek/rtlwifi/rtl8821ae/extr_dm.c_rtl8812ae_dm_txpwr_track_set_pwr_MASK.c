
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct rtl_phy {int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_dm {int tx_rate; int* ofdm_index; int default_ofdm_index; int* absolute_ofdm_swing_idx; int remnant_cck_idx; int* remnant_ofdm_swing_idx; int modify_txagc_flag_path_a; int modify_txagc_flag_path_b; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef enum pwr_track_control_method { ____Placeholder_pwr_track_control_method } pwr_track_control_method ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 size_t VAR_42 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,size_t) ;
 struct rtl_dm* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int ) ;
 int * VAR_43 ;

void FUNC_6(struct ieee80211_hw *VAR_44,
          enum pwr_track_control_method VAR_45,
          u8 VAR_46, u8 VAR_47)
{
 struct rtl_priv *VAR_48 = FUNC_4(VAR_44);
 struct rtl_dm *VAR_49 = FUNC_3(FUNC_4(VAR_44));
 struct rtl_phy *VAR_50 = &VAR_48->phy;
 u32 VAR_51[2];
 u8 VAR_52 = 26;
 u8 VAR_53 = 0xFF;
 s8 VAR_54 = 0;

 if (VAR_49->tx_rate != 0xFF)
  VAR_53 =
   FUNC_1(VAR_44, VAR_49->tx_rate);

 FUNC_0(VAR_48, VAR_1, VAR_2,
   "===>rtl8812ae_dm_txpwr_track_set_pwr\n");

 if (VAR_53 != 0xFF) {

  if ((VAR_53 >= VAR_4) && (VAR_53 <= VAR_3))
   VAR_52 = 32;

  else if ((VAR_53 >= VAR_7) && (VAR_53 <= VAR_5))
   VAR_52 = 30;
  else if (VAR_53 == VAR_6)
   VAR_52 = 28;


  else if ((VAR_53 >= VAR_8) && (VAR_53 <= VAR_14))
   VAR_52 = 34;

  else if ((VAR_53 >= VAR_15) && (VAR_53 <= VAR_16))
   VAR_52 = 30;

  else if ((VAR_53 >= VAR_17) && (VAR_53 <= VAR_18))
   VAR_52 = 28;

  else if ((VAR_53 >= VAR_19) && (VAR_53 <= VAR_9))
   VAR_52 = 34;

  else if ((VAR_53 >= VAR_10) && (VAR_53 <= VAR_11))
   VAR_52 = 30;

  else if ((VAR_53 >= VAR_12) && (VAR_53 <= VAR_13))
   VAR_52 = 28;



  else if ((VAR_53 >= VAR_20) &&
    (VAR_53 <= VAR_21))
   VAR_52 = 34;

  else if ((VAR_53 >= VAR_22) &&
    (VAR_53 <= VAR_23))
   VAR_52 = 30;

  else if ((VAR_53 >= VAR_24) &&
    (VAR_53 <= VAR_25))
   VAR_52 = 28;
  else if (VAR_53 == VAR_26)
   VAR_52 = 26;
  else if (VAR_53 == VAR_27)
   VAR_52 = 24;
  else if (VAR_53 == VAR_28)
   VAR_52 = 22;

  else if ((VAR_53 >= VAR_29) &&
    (VAR_53 <= VAR_30))
   VAR_52 = 34;

  else if ((VAR_53 >= VAR_31) &&
    (VAR_53 <= VAR_32))
   VAR_52 = 30;

  else if ((VAR_53 >= VAR_33) &&
    (VAR_53 <= VAR_34))
   VAR_52 = 28;
  else if (VAR_53 == VAR_35)
   VAR_52 = 26;
  else if (VAR_53 == VAR_36)
   VAR_52 = 24;
  else if (VAR_53 == VAR_37)
   VAR_52 = 22;
  else
   VAR_52 = 24;
 }
 FUNC_0(VAR_48, VAR_1, VAR_2,
   "TxRate=0x%x, PwrTrackingLimit=%d\n",
   VAR_53, VAR_52);

 if (VAR_45 == VAR_0) {
  FUNC_0(VAR_48, VAR_1, VAR_2,
    "===>rtl8812ae_dm_txpwr_track_set_pwr\n");

  if (VAR_46 == VAR_41) {
   u32 VAR_55;

   VAR_51[VAR_41] =
    (VAR_49->ofdm_index[VAR_41] >
    VAR_52) ?
    VAR_52 :
    VAR_49->ofdm_index[VAR_41];
   VAR_55 = VAR_51[VAR_41];
   FUNC_0(VAR_48, VAR_1, VAR_2,
     "pDM_Odm->RFCalibrateInfo.OFDM_index[ODM_RF_PATH_A]=%d,pDM_Odm->RealBbSwingIdx[ODM_RF_PATH_A]=%d\n",
     VAR_49->ofdm_index[VAR_41],
     VAR_51[VAR_41]);

   FUNC_5(VAR_44, VAR_39, 0xFFE00000,
          VAR_43[VAR_55]);
  } else {
   u32 VAR_56;

   VAR_51[VAR_42] =
    VAR_49->ofdm_index[VAR_42] >
    VAR_52 ?
    VAR_52 :
    VAR_49->ofdm_index[VAR_42];
   VAR_56 = VAR_51[VAR_42];
   FUNC_0(VAR_48, VAR_1, VAR_2,
     "pDM_Odm->RFCalibrateInfo.OFDM_index[ODM_RF_PATH_B]=%d, pDM_Odm->RealBbSwingIdx[ODM_RF_PATH_B]=%d\n",
     VAR_49->ofdm_index[VAR_42],
     VAR_51[VAR_42]);

   FUNC_5(VAR_44, VAR_40, 0xFFE00000,
          VAR_43[VAR_56]);
  }
 } else if (VAR_45 == VAR_38) {
  FUNC_0(VAR_48, VAR_1, VAR_2,
    "pDM_Odm->DefaultOfdmIndex=%d, pDM_Odm->Absolute_OFDMSwingIdx[RFPath]=%d, RF_Path = %d\n",
    VAR_49->default_ofdm_index,
    VAR_49->absolute_ofdm_swing_idx[VAR_46],
    VAR_46);

  VAR_54 = VAR_49->default_ofdm_index +
    VAR_49->absolute_ofdm_swing_idx[VAR_46];

  if (VAR_46 == VAR_41) {

   if (VAR_54 > VAR_52) {
    VAR_49->remnant_cck_idx =
     VAR_54 -
     VAR_52;



    VAR_49->remnant_ofdm_swing_idx[VAR_46] =
     VAR_54 -
     VAR_52;

    FUNC_5(VAR_44, VAR_39, 0xFFE00000,
           VAR_43[VAR_52]);

    VAR_49->modify_txagc_flag_path_a = 1;


    FUNC_2(VAR_44,
     VAR_50->current_channel,
     VAR_41);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_A Over BBSwing Limit ,PwrTrackingLimit = %d ,Remnant TxAGC Value = %d\n",
      VAR_52,
      VAR_49->remnant_ofdm_swing_idx[VAR_46]);
   } else if (VAR_54 < 0) {
    VAR_49->remnant_cck_idx = VAR_54;

    VAR_49->remnant_ofdm_swing_idx[VAR_46] =
     VAR_54;

    FUNC_5(VAR_44, VAR_39, 0xFFE00000,
     VAR_43[0]);

    VAR_49->modify_txagc_flag_path_a = 1;


    FUNC_2(VAR_44,
     VAR_50->current_channel, VAR_41);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_A Lower then BBSwing lower bound  0 , Remnant TxAGC Value = %d\n",
      VAR_49->remnant_ofdm_swing_idx[VAR_46]);
   } else {
    FUNC_5(VAR_44, VAR_39, 0xFFE00000,
     VAR_43[(u8)VAR_54]);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_A Compensate with BBSwing, Final_OFDM_Swing_Index = %d\n",
     VAR_54);

    if (VAR_49->modify_txagc_flag_path_a) {
     VAR_49->remnant_cck_idx = 0;
     VAR_49->remnant_ofdm_swing_idx[VAR_46] = 0;


     FUNC_2(VAR_44,
      VAR_50->current_channel, VAR_41);
     VAR_49->modify_txagc_flag_path_a = 0;

     FUNC_0(VAR_48, VAR_1,
       VAR_2,
       "******Path_A pDM_Odm->Modify_TxAGC_Flag = FALSE\n");
    }
   }
  }

  if (VAR_46 == VAR_42) {
   if (VAR_54 > VAR_52) {
    VAR_49->remnant_ofdm_swing_idx[VAR_46] =
     VAR_54 -
     VAR_52;

    FUNC_5(VAR_44, VAR_40,
     0xFFE00000,
     VAR_43[VAR_52]);

    VAR_49->modify_txagc_flag_path_b = 1;


    FUNC_2(VAR_44,
     VAR_50->current_channel, VAR_42);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_B Over BBSwing Limit , PwrTrackingLimit = %d , Remnant TxAGC Value = %d\n",
      VAR_52,
      VAR_49->remnant_ofdm_swing_idx[VAR_46]);
   } else if (VAR_54 < 0) {
    VAR_49->remnant_ofdm_swing_idx[VAR_46] =
     VAR_54;

    FUNC_5(VAR_44, VAR_40, 0xFFE00000,
           VAR_43[0]);

    VAR_49->modify_txagc_flag_path_b = 1;


    FUNC_2(VAR_44,
     VAR_50->current_channel, VAR_42);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_B Lower then BBSwing lower bound  0 , Remnant TxAGC Value = %d\n",
      VAR_49->remnant_ofdm_swing_idx[VAR_46]);
   } else {
    FUNC_5(VAR_44, VAR_40, 0xFFE00000,
     VAR_43[(u8)VAR_54]);

    FUNC_0(VAR_48, VAR_1, VAR_2,
      "******Path_B Compensate with BBSwing ,Final_OFDM_Swing_Index = %d\n",
     VAR_54);

    if (VAR_49->modify_txagc_flag_path_b) {
     VAR_49->remnant_ofdm_swing_idx[VAR_46] = 0;


     FUNC_2(VAR_44,
     VAR_50->current_channel, VAR_42);

     VAR_49->modify_txagc_flag_path_b =
      0;

     FUNC_0(VAR_48, VAR_1, VAR_2,
       "******Path_B pDM_Odm->Modify_TxAGC_Flag = FALSE\n");
    }
   }
  }
 } else {
  return;
 }
}
