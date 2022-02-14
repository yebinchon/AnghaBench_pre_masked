
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct rtl_phy {int iqk_initialized; void** rfreg_chnlval; int rf_mode; } ;
struct rtl_priv {TYPE_2__* cfg; struct rtl_phy phy; } ;
struct rtl_mac {int mac_addr; } ;
struct rtl_hal {int fw_ready; int version; scalar_t__ last_hmeboxnum; int hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*,int) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*,int) ;
 int FUNC_18 (struct ieee80211_hw*) ;
 int FUNC_19 (struct ieee80211_hw*) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct ieee80211_hw*) ;
 int FUNC_22 (struct ieee80211_hw*) ;
 void* FUNC_23 (struct ieee80211_hw*,int,int ,int ) ;
 struct rtl_hal* FUNC_24 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_25 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_26 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_27 (struct rtl_priv*) ;
 int FUNC_28 (struct ieee80211_hw*,int ,int ,int ,int) ;
 int FUNC_29 (struct ieee80211_hw*,int ,int ) ;

int FUNC_30(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_26(VAR_12);
 struct rtl_hal *VAR_14 = FUNC_24(FUNC_26(VAR_12));
 struct rtl_mac *VAR_15 = FUNC_25(FUNC_26(VAR_12));
 struct rtl_phy *VAR_16 = &(VAR_13->phy);
 struct rtl_ps_ctl *VAR_17 = FUNC_27(FUNC_26(VAR_12));
 int VAR_18 = 0;
 unsigned long VAR_19;
 FUNC_9(VAR_19);
 FUNC_7();

 VAR_14->fw_ready = 0;
 VAR_14->hw_type = VAR_3;
 VAR_18 = FUNC_5(VAR_12);
 if (VAR_18) {
  FUNC_10("init mac failed!\n");
  goto exit;
 }
 VAR_18 = FUNC_13(VAR_12);
 if (VAR_18) {
  FUNC_2(VAR_13, VAR_0, VAR_1,
    "Failed to download FW. Init HW without FW now..\n");
  VAR_18 = 1;
  goto exit;
 }

 VAR_14->fw_ready = 1;
 VAR_14->last_hmeboxnum = 0;
 FUNC_6(VAR_12);
 FUNC_21(VAR_12);
 FUNC_20(VAR_12);
 VAR_16->rf_mode = VAR_9;
 FUNC_16(VAR_12);
 if (FUNC_1(VAR_14->version) &&
     !FUNC_0(VAR_14->version)) {
  FUNC_28(VAR_12, VAR_6, VAR_10, VAR_5, 0x30255);
  FUNC_28(VAR_12, VAR_6, VAR_11, VAR_5, 0x50a00);
 }
 VAR_16->rfreg_chnlval[0] = FUNC_23(VAR_12, (enum radio_path)0,
       VAR_8, VAR_7);
 VAR_16->rfreg_chnlval[1] = FUNC_23(VAR_12, (enum radio_path)1,
       VAR_8, VAR_7);
 FUNC_18(VAR_12);
 FUNC_22(VAR_12);
 FUNC_19(VAR_12);
 VAR_17->rfpwr_state = VAR_2;
 VAR_13->cfg->ops->set_hw_reg(VAR_12, VAR_4, VAR_15->mac_addr);
 if (VAR_17->rfpwr_state == VAR_2) {
  FUNC_17(VAR_12, 1);
  if (VAR_16->iqk_initialized) {
   FUNC_14(VAR_12, 1);
  } else {
   FUNC_14(VAR_12, 0);
   VAR_16->iqk_initialized = 1;
  }
  FUNC_11(VAR_12);
  FUNC_15(VAR_12);
 }
 FUNC_4(VAR_12);
 FUNC_3(VAR_12);
 FUNC_12(VAR_12);
exit:
 FUNC_8(VAR_19);
 return VAR_18;
}
