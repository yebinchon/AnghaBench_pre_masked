
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_bss_iter_data {int error; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2,
           struct ieee80211_vif *VAR_3)
{
 struct iwl_bss_iter_data *VAR_4 = VAR_1;

 if (VAR_3->type != VAR_0 || VAR_3->p2p)
  return;

 if (VAR_4->vif) {
  VAR_4->error = 1;
  return;
 }

 VAR_4->vif = VAR_3;
}
