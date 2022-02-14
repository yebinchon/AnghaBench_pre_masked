
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_vif {int csa_countdown; int time_event_data; } ;
struct iwl_mvm {int csa_vif; } ;
struct TYPE_2__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 int FUNC_6 (int *) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_2,
       struct ieee80211_vif *VAR_3, u32 VAR_4,
       bool VAR_5)
{
 struct iwl_mvm_vif *VAR_6 =
   FUNC_7(VAR_3);


 if (!VAR_5 && !VAR_6->csa_countdown)
  return;

 VAR_6->csa_countdown = 1;

 if (!FUNC_2(VAR_3)) {
  int VAR_7 = FUNC_3(VAR_3);

  FUNC_4(VAR_2, VAR_3);
  if (VAR_3->p2p &&
      !FUNC_6(&VAR_6->time_event_data) && VAR_4 &&
      VAR_5) {
   u32 VAR_8 = (VAR_7 + 1) *
           VAR_3->bss_conf.beacon_int -
           VAR_1;
   u32 VAR_9 = VAR_4 + VAR_8 * 1024;

   FUNC_5(VAR_2, VAR_3,
      VAR_1 -
      VAR_0,
      VAR_9);
  }
 } else if (!FUNC_6(&VAR_6->time_event_data)) {

  FUNC_1(VAR_3);
  FUNC_0(VAR_2->csa_vif, ((void*)0));
 }
}
