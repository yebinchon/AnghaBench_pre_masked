
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {int chanctx_conf; } ;
struct ieee80211_chanctx_conf {int dummy; } ;
struct ath10k_mac_change_chanctx_arg {size_t next_vif; size_t n_vifs; TYPE_1__* vifs; struct ieee80211_chanctx_conf* ctx; } ;
struct TYPE_2__ {struct ieee80211_chanctx_conf* new_ctx; struct ieee80211_chanctx_conf* old_ctx; struct ieee80211_vif* vif; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, u8 *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 struct ath10k_mac_change_chanctx_arg *VAR_3 = VAR_0;
 struct ieee80211_chanctx_conf *VAR_4;

 VAR_4 = FUNC_1(VAR_2->chanctx_conf);
 if (VAR_4 != VAR_3->ctx)
  return;

 if (FUNC_0(VAR_3->next_vif == VAR_3->n_vifs))
  return;

 VAR_3->vifs[VAR_3->next_vif].vif = VAR_2;
 VAR_3->vifs[VAR_3->next_vif].old_ctx = VAR_4;
 VAR_3->vifs[VAR_3->next_vif].new_ctx = VAR_4;
 VAR_3->next_vif++;
}
