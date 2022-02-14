
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {int fw_current_inpsmode; scalar_t__ rfpwr_state; } ;
struct TYPE_12__ {int being_init_adapter; } ;
struct TYPE_7__ {int btcoexist; } ;
struct TYPE_8__ {TYPE_1__ btc_info; } ;
struct rtl_phy {int* rfreg_chnlval; int backup_rf_0x1a; int iqk_initialized; int* rfpath_rx_enable; scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_6__ rtlhal; TYPE_5__* intf_ops; TYPE_4__* cfg; TYPE_2__ btcoexist; struct rtl_phy phy; } ;
struct rtl_mac {int mac_addr; } ;
struct rtl_hal {int mac_func_enable; int fw_ready; int fw_clk_change_in_progress; int allow_sw_to_change_hwclc; scalar_t__ last_hmeboxnum; void* fw_ps_state; scalar_t__ rx_tag; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_11__ {int (* enable_aspm ) (struct ieee80211_hw*) ;int (* disable_aspm ) (struct ieee80211_hw*) ;} ;
struct TYPE_10__ {TYPE_3__* ops; } ;
struct TYPE_9__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*,int) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*,int) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 void* FUNC_18 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_hal* FUNC_19 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_20 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_21 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_22 (struct rtl_priv*) ;
 int FUNC_23 (struct rtl_priv*,scalar_t__) ;
 int FUNC_24 (struct rtl_priv*,int) ;
 int FUNC_25 (struct ieee80211_hw*,int ,int ,int) ;
 int FUNC_26 (struct ieee80211_hw*,int ,int,int,int) ;
 int FUNC_27 (struct rtl_priv*,int,int) ;
 int FUNC_28 (struct rtl_priv*,int,int) ;
 int FUNC_29 (struct rtl_priv*,int ,int) ;
 int FUNC_30 (struct ieee80211_hw*) ;
 int FUNC_31 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_32 (struct ieee80211_hw*) ;

int FUNC_33(struct ieee80211_hw *VAR_25)
{
 struct rtl_priv *VAR_26 = FUNC_21(VAR_25);
 struct rtl_hal *VAR_27 = FUNC_19(FUNC_21(VAR_25));
 struct rtl_mac *VAR_28 = FUNC_20(FUNC_21(VAR_25));
 struct rtl_phy *VAR_29 = &VAR_26->phy;
 struct rtl_ps_ctl *VAR_30 = FUNC_22(FUNC_21(VAR_25));
 bool VAR_31 = 1;
 int VAR_32 = 0;
 u8 VAR_33, VAR_34;
 u32 VAR_35;

 FUNC_1(VAR_26, VAR_3, VAR_5, " Rtl8192EE hw init\n");
 VAR_26->rtlhal.being_init_adapter = 1;
 VAR_26->intf_ops->disable_aspm(VAR_25);

 VAR_33 = FUNC_23(VAR_26, VAR_15+1);
 VAR_34 = FUNC_23(VAR_26, VAR_12);
 if ((VAR_33 & FUNC_0(3)) && (VAR_34 != 0 && VAR_34 != 0xEA)) {
  VAR_27->mac_func_enable = 1;
 } else {
  VAR_27->mac_func_enable = 0;
  VAR_27->fw_ps_state = VAR_8;
 }

 if (FUNC_2(VAR_26)) {
  FUNC_1(VAR_26, VAR_3, VAR_4, "92ee dma hang!\n");
  FUNC_3(VAR_26,
          VAR_27->mac_func_enable);
  VAR_27->mac_func_enable = 0;
 }

 VAR_31 = FUNC_6(VAR_25);

 FUNC_27(VAR_26, 0x577, 0x03);


 FUNC_27(VAR_26, VAR_11, 0x2A);
 FUNC_27(VAR_26, VAR_11 + 1, 0x00);
 FUNC_27(VAR_26, VAR_10, 0x83);


 if (VAR_26->btcoexist.btc_info.btcoexist == 1) {
  FUNC_27(VAR_26, 0x64, 0);
  FUNC_27(VAR_26, 0x65, 1);
 }
 if (!VAR_31) {
  FUNC_8("Init MAC failed\n");
  VAR_32 = 1;
  return VAR_32;
 }
 VAR_27->rx_tag = 0;
 FUNC_29(VAR_26, VAR_14, 0x8000);
 VAR_32 = FUNC_11(VAR_25, 0);
 if (VAR_32) {
  FUNC_1(VAR_26, VAR_2, VAR_6,
    "Failed to download FW. Init HW without FW now..\n");
  VAR_32 = 1;
  VAR_27->fw_ready = 0;
  return VAR_32;
 }
 VAR_27->fw_ready = 1;

 VAR_30->fw_current_inpsmode = 0;
 VAR_27->fw_ps_state = VAR_8;
 VAR_27->fw_clk_change_in_progress = 0;
 VAR_27->allow_sw_to_change_hwclc = 0;
 VAR_27->last_hmeboxnum = 0;

 FUNC_15(VAR_25);

 FUNC_13(VAR_25);

 FUNC_16(VAR_25);

 VAR_29->rfreg_chnlval[0] = FUNC_18(VAR_25, VAR_18,
       VAR_23, VAR_21);
 VAR_29->rfreg_chnlval[1] = FUNC_18(VAR_25, VAR_19,
       VAR_23, VAR_21);
 VAR_29->backup_rf_0x1a = (u32)FUNC_18(VAR_25, VAR_18, VAR_24,
          VAR_21);
 VAR_29->rfreg_chnlval[0] = (VAR_29->rfreg_chnlval[0] & 0xfffff3ff) |
       FUNC_0(10) | FUNC_0(11);

 FUNC_26(VAR_25, VAR_18, VAR_23, VAR_21,
        VAR_29->rfreg_chnlval[0]);
 FUNC_26(VAR_25, VAR_19, VAR_23, VAR_21,
        VAR_29->rfreg_chnlval[0]);


 FUNC_25(VAR_25, VAR_20, VAR_0, 0x1);
 FUNC_25(VAR_25, VAR_20, VAR_1, 0x1);




 FUNC_26(VAR_25, VAR_18, 0xB1, VAR_21, 0x54418);


 FUNC_5(VAR_25);

 VAR_27->mac_func_enable = 1;

 FUNC_17(VAR_25);
 FUNC_12(VAR_25);

 VAR_30->rfpwr_state = VAR_7;

 VAR_26->cfg->ops->set_hw_reg(VAR_25, VAR_9, VAR_28->mac_addr);
 FUNC_4(VAR_25);
 VAR_26->intf_ops->enable_aspm(VAR_25);

 FUNC_9(VAR_25);

 VAR_26->rtlhal.being_init_adapter = 0;

 if (VAR_30->rfpwr_state == VAR_7) {
  if (VAR_29->iqk_initialized) {
   FUNC_14(VAR_25, 1);
  } else {
   FUNC_14(VAR_25, 0);
   VAR_29->iqk_initialized = 1;
  }
 }

 VAR_29->rfpath_rx_enable[0] = 1;
 if (VAR_29->rf_type == VAR_22)
  VAR_29->rfpath_rx_enable[1] = 1;

 FUNC_7(VAR_25, 0x1FA, &VAR_33);
 if (!(VAR_33 & FUNC_0(0))) {
  FUNC_26(VAR_25, VAR_18, 0x15, 0x0F, 0x05);
  FUNC_1(VAR_26, VAR_3, VAR_5, "PA BIAS path A\n");
 }

 if ((!(VAR_33 & FUNC_0(1))) && (VAR_29->rf_type == VAR_22)) {
  FUNC_26(VAR_25, VAR_19, 0x15, 0x0F, 0x05);
  FUNC_1(VAR_26, VAR_3, VAR_5, "PA BIAS path B\n");
 }

 FUNC_27(VAR_26, VAR_13, ((30000 + 127) / 128));


 VAR_35 = FUNC_24(VAR_26, VAR_16);
 FUNC_27(VAR_26, VAR_17, 0x75);
 VAR_35 = (VAR_35 & 0xfff00fff) | (0x7E << 12);
 FUNC_28(VAR_26, VAR_16, VAR_35);

 FUNC_10(VAR_25);

 FUNC_28(VAR_26, 0x4fc, 0);

 FUNC_1(VAR_26, VAR_3, VAR_5,
   "end of Rtl8192EE hw init %x\n", VAR_32);
 return 0;
}
