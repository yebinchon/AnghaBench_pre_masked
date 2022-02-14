
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_8__ {int iqk_initialized; } ;
struct TYPE_5__ {scalar_t__ driver_is_goingto_unload; } ;
struct rtl_priv {TYPE_4__ phy; TYPE_3__* cfg; TYPE_1__ rtlhal; } ;
struct rtl_mac {int link_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* get_btc_status ) () ;int (* led_control ) (struct ieee80211_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct ieee80211_hw*,int ) ;
 int FUNC_8 () ;

void FUNC_9(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_7);
 struct rtl_ps_ctl *VAR_9 = FUNC_6(FUNC_5(VAR_7));
 struct rtl_mac *VAR_10 = FUNC_4(FUNC_5(VAR_7));
 enum nl80211_iftype VAR_11;

 FUNC_1(VAR_8, VAR_0, VAR_1, "RTL8192ee card disable\n");

 FUNC_0(VAR_9, VAR_6);

 VAR_10->link_state = VAR_3;
 VAR_11 = VAR_4;

 FUNC_3(VAR_7, VAR_11);

 if (VAR_8->rtlhal.driver_is_goingto_unload ||
     VAR_9->rfoff_reason > VAR_5)
  VAR_8->cfg->ops->led_control(VAR_7, VAR_2);

 FUNC_2(VAR_7);


 if (!VAR_8->cfg->ops->get_btc_status())
  VAR_8->phy.iqk_initialized = 0;
}
