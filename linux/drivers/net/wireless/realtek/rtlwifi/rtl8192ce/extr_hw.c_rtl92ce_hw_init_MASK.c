
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct rtl_phy {int iqk_initialized; void** rfreg_chnlval; int rf_mode; } ;
struct rtl_priv {TYPE_3__* intf_ops; TYPE_2__* cfg; struct rtl_phy phy; } ;
struct rtl_pci {int being_init_adapter; int receive_config; } ;
struct rtl_mac {int mac_addr; } ;
struct rtl_hal {int fw_ready; int version; scalar_t__ last_hmeboxnum; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_6__ {int (* enable_aspm ) (struct ieee80211_hw*) ;int (* disable_aspm ) (struct ieee80211_hw*) ;} ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
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
 int FUNC_4 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*,int) ;
 int FUNC_19 (struct ieee80211_hw*) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct ieee80211_hw*) ;
 int FUNC_22 (struct ieee80211_hw*,int) ;
 int FUNC_23 (struct ieee80211_hw*) ;
 int FUNC_24 (struct ieee80211_hw*) ;
 void* FUNC_25 (struct ieee80211_hw*,int,int ,int ) ;
 struct rtl_hal* FUNC_26 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_27 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_28 (int ) ;
 int FUNC_29 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_30 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_31 (struct rtl_priv*) ;
 int FUNC_32 (struct rtl_priv*,int) ;
 int FUNC_33 (struct rtl_priv*,int ) ;
 int FUNC_34 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_35 (struct ieee80211_hw*,int ,int,int,int) ;
 int FUNC_36 (struct rtl_priv*,int,int) ;
 int FUNC_37 (struct rtl_priv*,int ,int) ;
 int FUNC_38 (struct ieee80211_hw*) ;
 int FUNC_39 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_40 (struct ieee80211_hw*) ;
 int FUNC_41 (int) ;

int FUNC_42(struct ieee80211_hw *VAR_25)
{
 struct rtl_priv *VAR_26 = FUNC_30(VAR_25);
 struct rtl_hal *VAR_27 = FUNC_26(FUNC_30(VAR_25));
 struct rtl_mac *VAR_28 = FUNC_27(FUNC_30(VAR_25));
 struct rtl_phy *VAR_29 = &(VAR_26->phy);
 struct rtl_pci *VAR_30 = FUNC_28(FUNC_29(VAR_25));
 struct rtl_ps_ctl *VAR_31 = FUNC_31(FUNC_30(VAR_25));
 bool VAR_32 = 1;
 bool VAR_33;
 int VAR_34;
 u8 VAR_35;
 unsigned long VAR_36;

 VAR_30->being_init_adapter = 1;
 FUNC_11(VAR_36);
 FUNC_9();

 VAR_27->fw_ready = 0;
 VAR_26->intf_ops->disable_aspm(VAR_25);
 VAR_32 = FUNC_7(VAR_25);
 if (!VAR_32) {
  FUNC_12("Init MAC failed\n");
  VAR_34 = 1;
  goto exit;
 }

 VAR_34 = FUNC_16(VAR_25);
 if (VAR_34) {
  FUNC_4(VAR_26, VAR_2, VAR_5,
    "Failed to download FW. Init HW without FW now..\n");
  VAR_34 = 1;
  goto exit;
 }

 VAR_27->fw_ready = 1;
 VAR_27->last_hmeboxnum = 0;
 FUNC_20(VAR_25);




 VAR_30->receive_config = FUNC_33(VAR_26, VAR_11);
 VAR_30->receive_config &= ~(VAR_9 | VAR_10);
 FUNC_37(VAR_26, VAR_11, VAR_30->receive_config);
 FUNC_17(VAR_25);
 VAR_29->rf_mode = VAR_19;
 FUNC_21(VAR_25);
 if (FUNC_3(VAR_27->version) &&
     !FUNC_2(VAR_27->version)) {
  FUNC_35(VAR_25, VAR_12, VAR_22, VAR_8, 0x30255);
  FUNC_35(VAR_25, VAR_12, VAR_23, VAR_8, 0x50a00);
 } else if (FUNC_1(VAR_27->version)) {
  FUNC_35(VAR_25, VAR_12, 0x0C, VAR_8, 0x894AE);
  FUNC_35(VAR_25, VAR_12, 0x0A, VAR_8, 0x1AF31);
  FUNC_35(VAR_25, VAR_12, VAR_18, VAR_8, 0x8F425);
  FUNC_35(VAR_25, VAR_12, VAR_24, VAR_8, 0x4F200);
  FUNC_35(VAR_25, VAR_12, VAR_20, VAR_8, 0x44053);
  FUNC_35(VAR_25, VAR_12, VAR_21, VAR_8, 0x80201);
 }
 VAR_29->rfreg_chnlval[0] = FUNC_25(VAR_25, (enum radio_path)0,
       VAR_17, VAR_16);
 VAR_29->rfreg_chnlval[1] = FUNC_25(VAR_25, (enum radio_path)1,
       VAR_17, VAR_16);
 FUNC_34(VAR_25, VAR_15, VAR_0, 0x1);
 FUNC_34(VAR_25, VAR_15, VAR_1, 0x1);
 FUNC_34(VAR_25, VAR_14, FUNC_0(10), 1);
 FUNC_6(VAR_25);
 FUNC_24(VAR_25);
 FUNC_23(VAR_25);

 VAR_31->rfpwr_state = VAR_6;

 VAR_26->cfg->ops->set_hw_reg(VAR_25, VAR_7, VAR_28->mac_addr);
 FUNC_5(VAR_25);
 VAR_26->intf_ops->enable_aspm(VAR_25);

 FUNC_13(VAR_25);

 if (VAR_31->rfpwr_state == VAR_6) {
  FUNC_22(VAR_25, 1);
  if (VAR_29->iqk_initialized) {
   FUNC_18(VAR_25, 1);
  } else {
   FUNC_18(VAR_25, 0);
   VAR_29->iqk_initialized = 1;
  }

  FUNC_14(VAR_25);
  FUNC_19(VAR_25);
 }

 VAR_33 = FUNC_2(VAR_27->version);
 VAR_35 = FUNC_8(VAR_25, 0x1FA);
 if (!(VAR_35 & FUNC_0(0))) {
  FUNC_35(VAR_25, VAR_12, 0x15, 0x0F, 0x05);
  FUNC_4(VAR_26, VAR_3, VAR_4, "PA BIAS path A\n");
 }

 if (!(VAR_35 & FUNC_0(1)) && VAR_33) {
  FUNC_35(VAR_25, VAR_13, 0x15, 0x0F, 0x05);
  FUNC_4(VAR_26, VAR_3, VAR_4, "PA BIAS path B\n");
 }

 if (!(VAR_35 & FUNC_0(4))) {
  VAR_35 = FUNC_32(VAR_26, 0x16);
  VAR_35 &= 0x0F;
  FUNC_36(VAR_26, 0x16, VAR_35 | 0x80);
  FUNC_41(10);
  FUNC_36(VAR_26, 0x16, VAR_35 | 0x90);
  FUNC_4(VAR_26, VAR_3, VAR_4, "under 1.5V\n");
 }
 FUNC_15(VAR_25);
exit:
 FUNC_10(VAR_36);
 VAR_30->being_init_adapter = 0;
 return VAR_34;
}
