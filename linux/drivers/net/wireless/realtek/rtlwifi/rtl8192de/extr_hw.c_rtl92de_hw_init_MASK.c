
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct TYPE_4__ {int fw_current_inpsmode; } ;
struct rtl_phy {int current_channel; void** rfreg_chnlval; int rf_mode; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ psc; struct rtl_phy phy; } ;
struct rtl_pci {int being_init_adapter; int init_ready; int receive_config; } ;
struct rtl_mac {int mac_addr; scalar_t__ rdg_en; } ;
struct rtl_hal {scalar_t__ current_bandtype; scalar_t__ interfaceindex; scalar_t__ macphymode; scalar_t__ earlymode_enable; scalar_t__ last_hmeboxnum; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int VAR_25 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*,int ) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 void* FUNC_18 (struct ieee80211_hw*,int,int,int ) ;
 struct rtl_hal* FUNC_19 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_20 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_21 (int ) ;
 int FUNC_22 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_23 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_24 (struct rtl_priv*) ;
 int FUNC_25 (struct rtl_priv*,int) ;
 int FUNC_26 (struct rtl_priv*,int ) ;
 int FUNC_27 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_28 (struct rtl_priv*,int,int) ;
 int FUNC_29 (struct rtl_priv*,int ,int) ;
 int FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int *,unsigned long) ;
 int FUNC_32 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_33 (int ) ;

int FUNC_34(struct ieee80211_hw *VAR_26)
{
 struct rtl_priv *VAR_27 = FUNC_23(VAR_26);
 struct rtl_hal *VAR_28 = FUNC_19(FUNC_23(VAR_26));
 struct rtl_mac *VAR_29 = FUNC_20(FUNC_23(VAR_26));
 struct rtl_phy *VAR_30 = &(VAR_27->phy);
 struct rtl_pci *VAR_31 = FUNC_21(FUNC_22(VAR_26));
 struct rtl_ps_ctl *VAR_32 = FUNC_24(FUNC_23(VAR_26));
 bool VAR_33 = 1;
 u8 VAR_34;
 int VAR_35;
 int VAR_36;
 unsigned long VAR_37;

 VAR_31->being_init_adapter = 1;
 VAR_31->init_ready = 0;
 FUNC_30(&VAR_25, VAR_37);

 FUNC_12(VAR_26);

 VAR_33 = FUNC_4(VAR_26);
 if (!VAR_33) {
  FUNC_5("Init MAC failed\n");
  VAR_36 = 1;
  FUNC_31(&VAR_25, VAR_37);
  return VAR_36;
 }
 VAR_36 = FUNC_7(VAR_26);
 FUNC_31(&VAR_25, VAR_37);
 if (VAR_36) {
  FUNC_1(VAR_27, VAR_3, VAR_6,
    "Failed to download FW. Init HW without FW..\n");
  return 1;
 }
 VAR_28->last_hmeboxnum = 0;
 VAR_27->psc.fw_current_inpsmode = 0;

 VAR_34 = FUNC_25(VAR_27, 0x605);
 VAR_34 = VAR_34 | 0x30;
 FUNC_28(VAR_27, 0x605, VAR_34);

 if (VAR_28->earlymode_enable) {
  FUNC_1(VAR_27, VAR_4, VAR_5,
    "EarlyMode Enabled!!!\n");

  VAR_34 = FUNC_25(VAR_27, 0x4d0);
  VAR_34 = VAR_34 | 0x1f;
  FUNC_28(VAR_27, 0x4d0, VAR_34);

  FUNC_28(VAR_27, 0x4d3, 0x80);

  VAR_34 = FUNC_25(VAR_27, 0x605);
  VAR_34 = VAR_34 | 0x40;
  FUNC_28(VAR_27, 0x605, VAR_34);
 }

 if (VAR_29->rdg_en) {
  FUNC_28(VAR_27, VAR_15, 0xff);
  FUNC_29(VAR_27, VAR_16, 0x200);
  FUNC_28(VAR_27, VAR_17, 0x05);
 }

 FUNC_11(VAR_26);




 VAR_31->receive_config = FUNC_26(VAR_27, VAR_14);
 VAR_31->receive_config &= ~(VAR_12 | VAR_13);

 FUNC_8(VAR_26);

 VAR_30->rf_mode = VAR_24;

 FUNC_27(VAR_26, VAR_20, 0x00f00000, 0xf);


 FUNC_13(VAR_26);




 FUNC_15(VAR_26);

 FUNC_27(VAR_26, VAR_20, 0x00f00000, 0);
 VAR_30->rfreg_chnlval[0] = FUNC_18(VAR_26, (enum radio_path)0,
   VAR_23, VAR_22);
 VAR_30->rfreg_chnlval[1] = FUNC_18(VAR_26, (enum radio_path)1,
   VAR_23, VAR_22);


 if (VAR_28->current_bandtype == VAR_0)
  FUNC_27(VAR_26, VAR_21, VAR_1, 0x1);
 FUNC_27(VAR_26, VAR_21, VAR_2, 0x1);
 if (VAR_28->interfaceindex == 0) {


  FUNC_27(VAR_26, VAR_19, FUNC_0(10) |
         FUNC_0(11), 3);
 } else {

  FUNC_27(VAR_26, VAR_19, FUNC_0(11) |
         FUNC_0(10), 3);
 }

 FUNC_3(VAR_26);


 FUNC_17(VAR_26);
 FUNC_16(VAR_26);



 FUNC_9(VAR_26);
 FUNC_14(VAR_26, VAR_30->current_channel);

 VAR_32->rfpwr_state = VAR_8;

 VAR_27->cfg->ops->set_hw_reg(VAR_26, VAR_9, VAR_29->mac_addr);

 FUNC_2(VAR_26);


 FUNC_6(VAR_26);
 VAR_31->being_init_adapter = 0;

 if (VAR_32->rfpwr_state == VAR_8) {
  FUNC_10(VAR_26);

  if (VAR_28->macphymode == VAR_7) {
   u32 VAR_38;
   for (VAR_35 = 0; VAR_35 < 10000; VAR_35++) {
    FUNC_33(VAR_11);

    VAR_38 = FUNC_18(VAR_26,
        (enum radio_path)VAR_18,
        0x2a, VAR_10);

    if (((VAR_38 & FUNC_0(11)) == FUNC_0(11)))
     break;
   }

   if (VAR_35 == 10000) {
    VAR_31->init_ready = 0;
    return 1;
   }
  }
 }
 VAR_31->init_ready = 1;
 return VAR_36;
}
