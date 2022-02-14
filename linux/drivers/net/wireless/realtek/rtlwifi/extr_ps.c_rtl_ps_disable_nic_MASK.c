
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq_tasklet; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* hw_disable ) (struct ieee80211_hw*) ;int (* disable_interrupt ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_0, 1);


 VAR_1->cfg->ops->disable_interrupt(VAR_0);
 FUNC_4(&VAR_1->works.irq_tasklet);


 VAR_1->cfg->ops->hw_disable(VAR_0);

 return 1;
}
