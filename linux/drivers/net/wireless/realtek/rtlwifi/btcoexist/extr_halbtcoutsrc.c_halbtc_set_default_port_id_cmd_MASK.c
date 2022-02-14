
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ieee80211_hw* hw; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_default_port_id_cmd ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(void *VAR_0)
{
 struct btc_coexist *VAR_1 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_2 = VAR_1->adapter;
 struct ieee80211_hw *VAR_3 = VAR_2->mac80211.hw;

 if (!VAR_2->cfg->ops->set_default_port_id_cmd)
  return;

 VAR_2->cfg->ops->set_default_port_id_cmd(VAR_3);
}
