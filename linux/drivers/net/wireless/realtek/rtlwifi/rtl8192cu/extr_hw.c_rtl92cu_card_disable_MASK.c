
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_usb {scalar_t__ disablehwsm; } ;
struct rtl_ps_ctl {int dummy; } ;
struct TYPE_6__ {int iqk_initialized; } ;
struct rtl_priv {TYPE_3__ phy; TYPE_2__* cfg; } ;
struct rtl_mac {int link_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* led_control ) (struct ieee80211_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 struct rtl_usb* FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;

void FUNC_10(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_5(VAR_4);
 struct rtl_ps_ctl *VAR_6 = FUNC_6(FUNC_5(VAR_4));
 struct rtl_usb *VAR_7 = FUNC_7(FUNC_8(VAR_4));
 struct rtl_mac *VAR_8 = FUNC_4(FUNC_5(VAR_4));
 enum nl80211_iftype VAR_9;

 VAR_8->link_state = VAR_1;
 VAR_9 = VAR_2;
 FUNC_1(VAR_4, VAR_9);
 VAR_5->cfg->ops->led_control(VAR_4, VAR_0);
 FUNC_0(VAR_6, VAR_3);
 if (VAR_7->disablehwsm)
  FUNC_2(VAR_4);
 else
  FUNC_3(VAR_4);


 VAR_5->phy.iqk_initialized = 0;
}
