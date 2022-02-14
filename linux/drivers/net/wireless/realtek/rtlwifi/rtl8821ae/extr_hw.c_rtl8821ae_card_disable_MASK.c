
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_10__ {int iqk_initialized; } ;
struct TYPE_7__ {scalar_t__ driver_is_goingto_unload; } ;
struct rtl_priv {TYPE_5__ phy; TYPE_4__* cfg; TYPE_2__ rtlhal; TYPE_1__* intf_ops; } ;
struct rtl_mac {scalar_t__ opmode; scalar_t__ link_state; } ;
struct rtl_hal {int re_init_llt_table; scalar_t__ hw_rof_enable; scalar_t__ enter_pnp_sleep; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_9__ {TYPE_3__* ops; } ;
struct TYPE_8__ {int (* led_control ) (struct ieee80211_hw*,int ) ;int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;int (* get_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;
struct TYPE_6__ {int (* reset_trx_ring ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct ieee80211_hw*,int) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*,int) ;
 int FUNC_12 (struct ieee80211_hw*,int ) ;
 int FUNC_13 (struct ieee80211_hw*,int) ;
 int FUNC_14 (struct ieee80211_hw*,int) ;
 int FUNC_15 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_16 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_17 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_18 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_19 (struct rtl_priv*) ;
 int FUNC_20 (struct rtl_priv*,scalar_t__) ;
 int FUNC_21 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_22 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_23 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_24 (struct ieee80211_hw*) ;
 int FUNC_25 (struct ieee80211_hw*,int ) ;
 int FUNC_26 (int) ;

void FUNC_27(struct ieee80211_hw *VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_18(VAR_21);
 struct rtl_hal *VAR_23 = FUNC_16(VAR_22);
 struct rtl_ps_ctl *VAR_24 = FUNC_19(VAR_22);
 struct rtl_mac *VAR_25 = FUNC_17(VAR_22);
 enum nl80211_iftype VAR_26;
 bool VAR_27;
 u8 VAR_28;
 u32 VAR_29 = 0;

 VAR_22->cfg->ops->get_hw_reg(VAR_21, VAR_4,
          (u8 *)(&VAR_27));

 FUNC_1(VAR_24, VAR_20);

 if (!(VAR_27 && VAR_25->opmode == VAR_9)
     || !VAR_23->enter_pnp_sleep) {
  FUNC_2(VAR_22, VAR_0, VAR_2, "Normal Power off\n");
  VAR_25->link_state = VAR_8;
  VAR_26 = VAR_10;
  FUNC_7(VAR_21, VAR_26);
  FUNC_6(VAR_21);
 } else {
  FUNC_2(VAR_22, VAR_0, VAR_2, "Wowlan Supported.\n");


  FUNC_21(VAR_22, VAR_13, 0x0);







  if (FUNC_5(VAR_21, 0xE0, 0x3, 0x80c20d0d))
   VAR_23->re_init_llt_table = 1;




  FUNC_10(VAR_21);

  FUNC_4(VAR_21, 1);


  FUNC_8("mac->link_state = %d\n", VAR_25->link_state);
  if (VAR_25->link_state >= VAR_7 &&
      VAR_25->opmode == VAR_9) {
   VAR_22->cfg->ops->set_hw_reg(VAR_21, VAR_5, ((void*)0));
   FUNC_12(VAR_21,
             VAR_19);

   FUNC_15(VAR_21, 1);

   FUNC_11(VAR_21, 1);


   FUNC_9(VAR_21, 1);
  }






  FUNC_21(VAR_22, VAR_16, FUNC_0(2));

  VAR_28 = FUNC_20(VAR_22, VAR_16);
  VAR_29 = 0;
  while (!(VAR_28 & FUNC_0(1)) && (VAR_29++ < 100)) {
   FUNC_26(10);
   VAR_28 = FUNC_20(VAR_22, VAR_16);
  }
  FUNC_2(VAR_22, VAR_0, VAR_3,
    "Wait Rx DMA Finished before host sleep. count=%d\n",
     VAR_29);


  VAR_22->intf_ops->reset_trx_ring(VAR_21);

  FUNC_21(VAR_22, VAR_11 + 1, 0x0);

  FUNC_3(VAR_21);
  VAR_28 = FUNC_20(VAR_22, VAR_17);
  FUNC_21(VAR_22, VAR_17, VAR_28 | FUNC_0(3));

  FUNC_21(VAR_22, VAR_15, 0x20);
  FUNC_21(VAR_22, VAR_15, 0x60);
 }

 if (VAR_22->rtlhal.driver_is_goingto_unload ||
     VAR_24->rfoff_reason > VAR_18)
  VAR_22->cfg->ops->led_control(VAR_21, VAR_6);

 if (VAR_27 && VAR_23->enter_pnp_sleep) {


  FUNC_14(VAR_21, 1);


  FUNC_21(VAR_22, VAR_14 + 1, 0xff);
  FUNC_2(VAR_22, VAR_1, VAR_3, "Stop PCIE Tx DMA.\n");


  VAR_29 = 0;
  do {
   VAR_28 = FUNC_20(VAR_22, VAR_14);
   FUNC_26(10);
   VAR_29++;
  } while ((VAR_28 != 0) && (VAR_29 < 100));
  FUNC_2(VAR_22, VAR_0, VAR_3,
    "Wait Tx DMA Finished before host sleep. count=%d\n",
     VAR_29);

  if (VAR_23->hw_rof_enable) {
   FUNC_8("hw_rof_enable\n");
   VAR_28 = FUNC_20(VAR_22, VAR_12 + 3);
   FUNC_21(VAR_22, VAR_12 + 3, VAR_28 | FUNC_0(1));
  }
 }

 VAR_22->phy.iqk_initialized = 0;
}
