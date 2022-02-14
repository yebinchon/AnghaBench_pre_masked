
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
struct rtl_ps_ctl {int fw_current_inpsmode; scalar_t__ rfpwr_state; } ;
struct TYPE_12__ {int being_init_adapter; } ;
struct TYPE_10__ {scalar_t__ rx_idle_ant; } ;
struct TYPE_11__ {TYPE_4__ fat_table; } ;
struct rtl_phy {int* rfreg_chnlval; int iqk_initialized; int rf_mode; } ;
struct rtl_priv {TYPE_6__ rtlhal; TYPE_5__ dm; TYPE_3__* intf_ops; TYPE_2__* cfg; struct rtl_phy phy; } ;
struct rtl_pci {int receive_config; } ;
struct rtl_mac {int mac_addr; } ;
struct rtl_hal {int fw_ready; int mac_func_enable; int fw_clk_change_in_progress; int allow_sw_to_change_hwclc; scalar_t__ oem_id; void* fw_ps_state; scalar_t__ last_hmeboxnum; } ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_9__ {int (* enable_aspm ) (struct ieee80211_hw*) ;int (* disable_aspm ) (struct ieee80211_hw*) ;} ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
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
 scalar_t__ VAR_24 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,int) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*,int) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*,int) ;
 int FUNC_19 (struct ieee80211_hw*) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_21 (struct rtl_priv*) ;
 int FUNC_22 (struct ieee80211_hw*,int,int ,int ) ;
 struct rtl_hal* FUNC_23 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_24 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_25 (int ) ;
 int FUNC_26 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_27 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_28 (struct rtl_priv*) ;
 int FUNC_29 (struct rtl_priv*,int) ;
 int FUNC_30 (struct ieee80211_hw*,int ,int ,int) ;
 int FUNC_31 (struct ieee80211_hw*,int ,int,int,int) ;
 int FUNC_32 (struct rtl_priv*,int,int) ;
 int FUNC_33 (struct rtl_priv*,int ,int) ;
 int FUNC_34 (struct ieee80211_hw*) ;
 int FUNC_35 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_36 (struct ieee80211_hw*) ;
 int FUNC_37 (int) ;

int FUNC_38(struct ieee80211_hw *VAR_25)
{
 struct rtl_priv *VAR_26 = FUNC_27(VAR_25);
 struct rtl_hal *VAR_27 = FUNC_23(FUNC_27(VAR_25));
 struct rtl_mac *VAR_28 = FUNC_24(FUNC_27(VAR_25));
 struct rtl_phy *VAR_29 = &(VAR_26->phy);
 struct rtl_ps_ctl *VAR_30 = FUNC_28(FUNC_27(VAR_25));
 struct rtl_pci *VAR_31 = FUNC_25(FUNC_26(VAR_25));
 struct rtl_efuse *VAR_32 = FUNC_21(FUNC_27(VAR_25));
 bool VAR_33;
 int VAR_34 = 0;
 u8 VAR_35, VAR_36;
 unsigned long VAR_37;

 VAR_26->rtlhal.being_init_adapter = 1;







 FUNC_8(VAR_37);
 FUNC_6();
 VAR_27->fw_ready = 0;

 VAR_26->intf_ops->disable_aspm(VAR_25);

 VAR_35 = FUNC_29(VAR_26, VAR_18+1);
 VAR_36 = FUNC_29(VAR_26, VAR_15);
 if ((VAR_35 & FUNC_0(3)) && (VAR_36 != 0 && VAR_36 != 0xEA)) {
  VAR_27->mac_func_enable = 1;
 } else {
  VAR_27->mac_func_enable = 0;
  VAR_27->fw_ps_state = VAR_10;
 }

 VAR_33 = FUNC_4(VAR_25);
 if (VAR_33 != 1) {
  FUNC_9("Init MAC failed\n");
  VAR_34 = 1;
  goto exit;
 }

 VAR_34 = FUNC_12(VAR_25, 0);
 if (VAR_34) {
  FUNC_1(VAR_26, VAR_5, VAR_8,
    "Failed to download FW. Init HW without FW now..\n");
  VAR_34 = 1;
  goto exit;
 }
 VAR_27->fw_ready = 1;

 VAR_27->last_hmeboxnum = 0;
 VAR_27->fw_ps_state = VAR_10;
 VAR_27->fw_clk_change_in_progress = 0;
 VAR_27->allow_sw_to_change_hwclc = 0;
 VAR_30->fw_current_inpsmode = 0;

 FUNC_16(VAR_25);





 VAR_31->receive_config &= ~(VAR_13 | VAR_14);
 FUNC_33(VAR_26, VAR_17, VAR_31->receive_config);

 FUNC_13(VAR_25);
 FUNC_30(VAR_25, VAR_20, VAR_1, 0x1);
 FUNC_30(VAR_25, VAR_20, VAR_2, 0x1);

 VAR_29->rf_mode = VAR_23;
 FUNC_17(VAR_25);

 VAR_29->rfreg_chnlval[0] = FUNC_22(VAR_25, (enum radio_path)0,
       VAR_22, VAR_21);
 VAR_29->rfreg_chnlval[0] = VAR_29->rfreg_chnlval[0] & 0xfff00fff;

 FUNC_3(VAR_25);
 FUNC_20(VAR_25);
 FUNC_19(VAR_25);

 VAR_27->mac_func_enable = 1;
 VAR_30->rfpwr_state = VAR_9;

 VAR_26->cfg->ops->set_hw_reg(VAR_25, VAR_11, VAR_28->mac_addr);
 FUNC_2(VAR_25);
 VAR_26->intf_ops->enable_aspm(VAR_25);

 if (VAR_30->rfpwr_state == VAR_9) {
  if ((VAR_32->antenna_div_type == VAR_3) ||
      ((VAR_32->antenna_div_type == VAR_4) &&
       (VAR_27->oem_id == VAR_24))) {
   FUNC_18(VAR_25, 1);
   VAR_26->dm.fat_table.rx_idle_ant = VAR_12;
  } else {
   FUNC_18(VAR_25, 0);
   VAR_26->dm.fat_table.rx_idle_ant = VAR_0;
  }
  FUNC_1(VAR_26, VAR_6, VAR_7, "rx idle ant %s\n",
    (VAR_26->dm.fat_table.rx_idle_ant == VAR_12) ?
    ("MAIN_ANT") : ("AUX_ANT"));

  if (VAR_29->iqk_initialized) {
   FUNC_14(VAR_25, 1);
  } else {
   FUNC_14(VAR_25, 0);
   VAR_29->iqk_initialized = 1;
  }

  FUNC_10(VAR_25);
  FUNC_15(VAR_25);
 }

 VAR_35 = FUNC_5(VAR_25, 0x1FA);
 if (!(VAR_35 & FUNC_0(0))) {
  FUNC_31(VAR_25, VAR_19, 0x15, 0x0F, 0x05);
  FUNC_1(VAR_26, VAR_6, VAR_7, "PA BIAS path A\n");
 }

 if (!(VAR_35 & FUNC_0(4))) {
  VAR_35 = FUNC_29(VAR_26, 0x16);
  VAR_35 &= 0x0F;
  FUNC_32(VAR_26, 0x16, VAR_35 | 0x80);
  FUNC_37(10);
  FUNC_32(VAR_26, 0x16, VAR_35 | 0x90);
  FUNC_1(VAR_26, VAR_6, VAR_7, "under 1.5V\n");
 }
 FUNC_32(VAR_26, VAR_16+2, ((30000+127)/128));
 FUNC_11(VAR_25);
exit:
 FUNC_7(VAR_37);
 VAR_26->rtlhal.being_init_adapter = 0;
 return VAR_34;
}
