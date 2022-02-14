
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_8__ {scalar_t__ pwrdomain_protect; } ;
struct rtl_priv {TYPE_4__ psc; TYPE_3__* cfg; TYPE_1__* intf_ops; } ;
struct rtl_pci {scalar_t__ driver_is_goingto_unload; } ;
struct rtl_mac {int link_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* led_control ) (struct ieee80211_hw*,int ) ;} ;
struct TYPE_5__ {int (* enable_aspm ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_8 (struct rtl_priv*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*,int ) ;
 int FUNC_11 (int) ;

void FUNC_12(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_7(VAR_4);
 struct rtl_mac *VAR_6 = FUNC_4(FUNC_7(VAR_4));
 struct rtl_pci *VAR_7 = FUNC_5(FUNC_6(VAR_4));
 struct rtl_ps_ctl *VAR_8 = FUNC_8(FUNC_7(VAR_4));
 enum nl80211_iftype VAR_9;
 u8 VAR_10 = 30;

 VAR_5->intf_ops->enable_aspm(VAR_4);

 if (VAR_7->driver_is_goingto_unload ||
  VAR_8->rfoff_reason > VAR_3)
  VAR_5->cfg->ops->led_control(VAR_4, VAR_0);



 FUNC_3(VAR_4);


 while (VAR_10-- >= 10 && VAR_5->psc.pwrdomain_protect) {
  if (VAR_5->psc.pwrdomain_protect)
   FUNC_2(20);
  else
   break;
 }

 VAR_6->link_state = VAR_1;
 VAR_9 = VAR_2;
 FUNC_1(VAR_4, VAR_9);

 FUNC_0(VAR_4);
 FUNC_11(100);
}
