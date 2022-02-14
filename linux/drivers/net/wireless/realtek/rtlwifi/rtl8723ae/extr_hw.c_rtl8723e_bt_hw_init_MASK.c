
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* btc_ops; } ;
struct rtl_priv {TYPE_4__ btcoexist; TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_7__ {int (* btc_init_hw_config ) (struct rtl_priv*) ;} ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {scalar_t__ (* get_btc_status ) () ;} ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rtl_priv*) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cfg->ops->get_btc_status())
  VAR_1->btcoexist.btc_ops->btc_init_hw_config(VAR_1);
}
