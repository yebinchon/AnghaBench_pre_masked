
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_turbo_edca; int is_any_nonbepkts; int is_cur_rdlstate; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);
 VAR_1->dm.current_turbo_edca = 0;
 VAR_1->dm.is_any_nonbepkts = 0;
 VAR_1->dm.is_cur_rdlstate = 0;
}
