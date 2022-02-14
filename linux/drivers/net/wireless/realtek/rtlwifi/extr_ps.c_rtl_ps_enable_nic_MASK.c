
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtl_ps_ctl {int dummy; } ;
struct TYPE_10__ {int watchdog_timer; } ;
struct rtl_priv {TYPE_5__ works; TYPE_4__* cfg; TYPE_1__* intf_ops; } ;
struct rtl_mac {int retry_long; } ;
struct rtl_hal {scalar_t__ interface; } ;
struct TYPE_7__ {int chandef; } ;
struct ieee80211_hw {TYPE_2__ conf; } ;
struct TYPE_9__ {TYPE_3__* ops; } ;
struct TYPE_8__ {int (* enable_interrupt ) (struct ieee80211_hw*) ;int (* set_bw_mode ) (struct ieee80211_hw*,int ) ;int (* set_channel_access ) (struct ieee80211_hw*) ;int (* switch_channel ) (struct ieee80211_hw*) ;int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;scalar_t__ (* hw_init ) (struct ieee80211_hw*) ;} ;
struct TYPE_6__ {int (* reset_trx_ring ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rtl_hal*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*,int ) ;
 int FUNC_15 (struct ieee80211_hw*) ;

bool FUNC_16(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_6(VAR_5);
 struct rtl_ps_ctl *VAR_7 = FUNC_7(FUNC_6(VAR_5));
 struct rtl_hal *VAR_8 = FUNC_4(FUNC_6(VAR_5));
 struct rtl_mac *VAR_9 = FUNC_5(FUNC_6(VAR_5));


 if (VAR_8->interface == VAR_3)
  VAR_6->intf_ops->reset_trx_ring(VAR_5);

 if (FUNC_3(VAR_8))
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "Driver is already down!\n");


 if (VAR_6->cfg->ops->hw_init(VAR_5))
  return 0;
 VAR_6->cfg->ops->set_hw_reg(VAR_5, VAR_2,
   &VAR_9->retry_long);
 FUNC_0(VAR_7, VAR_4);

 VAR_6->cfg->ops->switch_channel(VAR_5);
 VAR_6->cfg->ops->set_channel_access(VAR_5);
 VAR_6->cfg->ops->set_bw_mode(VAR_5,
   FUNC_2(&VAR_5->conf.chandef));


 VAR_6->cfg->ops->enable_interrupt(VAR_5);


 FUNC_8(&VAR_6->works.watchdog_timer);

 return 1;
}
