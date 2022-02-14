
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rtl_priv {TYPE_2__* cfg; struct rtl_priv* buddy_priv; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {int dualmac_easyconcurrent_retrytimer; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* dualmac_easy_concurrent ) (struct ieee80211_hw*) ;} ;


 struct rtl_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 struct rtl_priv* VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 TYPE_3__ VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct rtl_priv *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.dualmac_easyconcurrent_retrytimer);
 struct ieee80211_hw *VAR_4 = VAR_3->hw;
 struct rtl_priv *VAR_5 = VAR_3->buddy_priv;

 if (VAR_5 == ((void*)0))
  return;

 VAR_3->cfg->ops->dualmac_easy_concurrent(VAR_4);
}
