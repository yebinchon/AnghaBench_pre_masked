
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_hal {scalar_t__ macphymode; scalar_t__ current_bandtype; int interfaceindex; int during_mac1init_radioa; int during_mac0init_radiob; } ;
struct rtl_phy {scalar_t__ rf_type; int num_total_rfpath; struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rfintfs; int rfhssi_para2; int rfintfo; int rfintfe; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;




 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_7 (int) ;

bool FUNC_8(struct ieee80211_hw *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_5(VAR_11);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 bool VAR_14 = 1;
 struct rtl_hal *VAR_15 = &(VAR_12->rtlhal);
 u32 VAR_16 = 0;
 u8 VAR_17;
 struct bb_reg_def *VAR_18;
 bool VAR_19 = 0, VAR_20 = 0;
 bool VAR_21 = 0, VAR_22 = 0;
 bool VAR_23 = 0;

 if (VAR_13->rf_type == VAR_8)
  VAR_13->num_total_rfpath = 1;
 else
  VAR_13->num_total_rfpath = 2;






 if (VAR_15->macphymode == VAR_7) {
  if (VAR_15->current_bandtype == VAR_2 &&
      VAR_15->interfaceindex == 0) {


   if (FUNC_2(VAR_11, 1)) {
    VAR_13->num_total_rfpath = 2;
    VAR_20 = 1;
   } else {


    return VAR_14;
   }
  } else if (VAR_15->current_bandtype == VAR_3 &&
      VAR_15->interfaceindex == 1) {


   if (FUNC_2(VAR_11, 0)) {
    VAR_13->num_total_rfpath = 2;
    VAR_19 = 1;
   } else {


    return VAR_14;
   }
  } else if (VAR_15->interfaceindex == 1) {

   VAR_23 = 1;
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_13->num_total_rfpath; VAR_17++) {

  if (VAR_19) {
   if (VAR_17 == 131) {
    VAR_15->during_mac1init_radioa = 1;
    VAR_21 = 1;
   } else if (VAR_17 == 130) {
    VAR_15->during_mac1init_radioa = 0;
    VAR_19 = 0;
    VAR_17 = 131;
    VAR_23 = 1;
    VAR_13->num_total_rfpath = 1;
   }
  } else if (VAR_20) {

   if (VAR_17 == 131)
    VAR_15->during_mac0init_radiob = 0;
   if (VAR_17 == 130) {
    VAR_15->during_mac0init_radiob = 1;
    VAR_20 = 0;
    VAR_22 = 1;
    VAR_17 = 131;
    VAR_23 = 1;
    VAR_13->num_total_rfpath = 1;
   }
  }
  VAR_18 = &VAR_13->phyreg_def[VAR_17];
  switch (VAR_17) {
  case 131:
  case 129:
   VAR_16 = FUNC_4(VAR_11, VAR_18->rfintfs,
          VAR_4);
   break;
  case 130:
  case 128:
   VAR_16 = FUNC_4(VAR_11, VAR_18->rfintfs,
    VAR_4 << 16);
   break;
  }
  FUNC_6(VAR_11, VAR_18->rfintfe, VAR_4 << 16, 0x1);
  FUNC_7(1);
  FUNC_6(VAR_11, VAR_18->rfintfo, VAR_4, 0x1);
  FUNC_7(1);


  FUNC_6(VAR_11, VAR_18->rfhssi_para2,
         VAR_0, 0x0);
  FUNC_7(1);

  FUNC_6(VAR_11, VAR_18->rfhssi_para2, VAR_1, 0x0);
  FUNC_7(1);
  switch (VAR_17) {
  case 131:
   if (VAR_23)
    VAR_14 = FUNC_1(
      VAR_11, VAR_10,
      (enum radio_path)VAR_17);
   else
    VAR_14 = FUNC_1(
          VAR_11, VAR_9,
          (enum radio_path)VAR_17);
   break;
  case 130:
   VAR_14 =
       FUNC_1(VAR_11, VAR_10,
      (enum radio_path) VAR_17);
   break;
  case 129:
   break;
  case 128:
   break;
  }
  switch (VAR_17) {
  case 131:
  case 129:
   FUNC_6(VAR_11, VAR_18->rfintfs, VAR_4,
          VAR_16);
   break;
  case 130:
  case 128:
   FUNC_6(VAR_11, VAR_18->rfintfs, VAR_4 << 16,
          VAR_16);
   break;
  }
  if (!VAR_14) {
   FUNC_0(VAR_12, VAR_5, VAR_6,
     "Radio[%d] Fail!!\n", VAR_17);
   goto phy_rf_cfg_fail;
  }

 }





 if (VAR_21)
  FUNC_3(VAR_11, 0);
 else if (VAR_22)
  FUNC_3(VAR_11, 1);
 FUNC_0(VAR_12, VAR_5, VAR_6, "<---\n");
 return VAR_14;

phy_rf_cfg_fail:
 return VAR_14;
}
