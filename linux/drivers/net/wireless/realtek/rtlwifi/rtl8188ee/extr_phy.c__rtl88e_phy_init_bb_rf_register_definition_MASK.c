
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_phy {TYPE_1__* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int rf_rbpi; int rf_rb; int rftx_afe; int rftxiq_imbal; int rfrx_afe; int rfrxiq_imbal; int rfagc_control2; int rfagc_control1; void* rfsw_ctrl; int rfhssi_para2; int rfhssi_para1; void* rftxgain_stage; void* rflssi_select; int rf3wire_offset; void* rfintfe; void* rfintfo; void* rfintfi; void* rfintfs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_47)
{
 struct rtl_priv *VAR_48 = FUNC_0(VAR_47);
 struct rtl_phy *VAR_49 = &VAR_48->phy;

 VAR_49->phyreg_def[VAR_0].rfintfs = VAR_6;
 VAR_49->phyreg_def[VAR_1].rfintfs = VAR_6;
 VAR_49->phyreg_def[VAR_2].rfintfs = VAR_20;
 VAR_49->phyreg_def[VAR_3].rfintfs = VAR_20;

 VAR_49->phyreg_def[VAR_0].rfintfi = VAR_5;
 VAR_49->phyreg_def[VAR_1].rfintfi = VAR_5;
 VAR_49->phyreg_def[VAR_2].rfintfi = VAR_19;
 VAR_49->phyreg_def[VAR_3].rfintfi = VAR_19;

 VAR_49->phyreg_def[VAR_0].rfintfo = VAR_13;
 VAR_49->phyreg_def[VAR_1].rfintfo = VAR_18;

 VAR_49->phyreg_def[VAR_0].rfintfe = VAR_13;
 VAR_49->phyreg_def[VAR_1].rfintfe = VAR_18;

 VAR_49->phyreg_def[VAR_0].rf3wire_offset =
     VAR_11;
 VAR_49->phyreg_def[VAR_1].rf3wire_offset =
     VAR_16;

 VAR_49->phyreg_def[VAR_0].rflssi_select = VAR_7;
 VAR_49->phyreg_def[VAR_1].rflssi_select = VAR_7;
 VAR_49->phyreg_def[VAR_2].rflssi_select = VAR_21;
 VAR_49->phyreg_def[VAR_3].rflssi_select = VAR_21;

 VAR_49->phyreg_def[VAR_0].rftxgain_stage = VAR_4;
 VAR_49->phyreg_def[VAR_1].rftxgain_stage = VAR_4;
 VAR_49->phyreg_def[VAR_2].rftxgain_stage = VAR_4;
 VAR_49->phyreg_def[VAR_3].rftxgain_stage = VAR_4;

 VAR_49->phyreg_def[VAR_0].rfhssi_para1 = VAR_9;
 VAR_49->phyreg_def[VAR_1].rfhssi_para1 = VAR_14;

 VAR_49->phyreg_def[VAR_0].rfhssi_para2 = VAR_10;
 VAR_49->phyreg_def[VAR_1].rfhssi_para2 = VAR_15;

 VAR_49->phyreg_def[VAR_0].rfsw_ctrl =
     VAR_8;
 VAR_49->phyreg_def[VAR_1].rfsw_ctrl =
     VAR_8;
 VAR_49->phyreg_def[VAR_2].rfsw_ctrl =
     VAR_22;
 VAR_49->phyreg_def[VAR_3].rfsw_ctrl =
     VAR_22;

 VAR_49->phyreg_def[VAR_0].rfagc_control1 = VAR_23;
 VAR_49->phyreg_def[VAR_1].rfagc_control1 = VAR_29;
 VAR_49->phyreg_def[VAR_2].rfagc_control1 = VAR_35;
 VAR_49->phyreg_def[VAR_3].rfagc_control1 = VAR_40;

 VAR_49->phyreg_def[VAR_0].rfagc_control2 = VAR_24;
 VAR_49->phyreg_def[VAR_1].rfagc_control2 = VAR_30;
 VAR_49->phyreg_def[VAR_2].rfagc_control2 = VAR_36;
 VAR_49->phyreg_def[VAR_3].rfagc_control2 = VAR_41;

 VAR_49->phyreg_def[VAR_0].rfrxiq_imbal = VAR_26;
 VAR_49->phyreg_def[VAR_1].rfrxiq_imbal = VAR_32;
 VAR_49->phyreg_def[VAR_2].rfrxiq_imbal = VAR_38;
 VAR_49->phyreg_def[VAR_3].rfrxiq_imbal = VAR_43;

 VAR_49->phyreg_def[VAR_0].rfrx_afe = VAR_25;
 VAR_49->phyreg_def[VAR_1].rfrx_afe = VAR_31;
 VAR_49->phyreg_def[VAR_2].rfrx_afe = VAR_37;
 VAR_49->phyreg_def[VAR_3].rfrx_afe = VAR_42;

 VAR_49->phyreg_def[VAR_0].rftxiq_imbal = VAR_28;
 VAR_49->phyreg_def[VAR_1].rftxiq_imbal = VAR_34;
 VAR_49->phyreg_def[VAR_2].rftxiq_imbal = VAR_39;
 VAR_49->phyreg_def[VAR_3].rftxiq_imbal = VAR_44;

 VAR_49->phyreg_def[VAR_0].rftx_afe = VAR_27;
 VAR_49->phyreg_def[VAR_1].rftx_afe = VAR_33;

 VAR_49->phyreg_def[VAR_0].rf_rb = VAR_12;
 VAR_49->phyreg_def[VAR_1].rf_rb = VAR_17;

 VAR_49->phyreg_def[VAR_0].rf_rbpi = VAR_45;
 VAR_49->phyreg_def[VAR_1].rf_rbpi = VAR_46;
}
