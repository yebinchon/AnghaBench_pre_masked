
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int ap_ibss_active; } ;
struct cfg80211_ftm_responder_stats {int filled; } ;
struct iwl_mvm {int mutex; struct cfg80211_ftm_responder_stats ftm_resp_stats; } ;
struct TYPE_2__ {int ftm_responder; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ p2p; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_hw *VAR_11,
        struct ieee80211_vif *VAR_12,
        struct cfg80211_ftm_responder_stats *VAR_13)
{
 struct iwl_mvm *VAR_14 = FUNC_1(VAR_11);
 struct iwl_mvm_vif *VAR_15 = FUNC_2(VAR_12);

 if (VAR_12->p2p || VAR_12->type != VAR_10 ||
     !VAR_15->ap_ibss_active || !VAR_12->bss_conf.ftm_responder)
  return -VAR_0;

 FUNC_3(&VAR_14->mutex);
 *VAR_13 = VAR_14->ftm_resp_stats;
 FUNC_4(&VAR_14->mutex);

 VAR_13->filled = FUNC_0(VAR_7) |
   FUNC_0(VAR_5) |
   FUNC_0(VAR_2) |
   FUNC_0(VAR_1) |
   FUNC_0(VAR_3) |
   FUNC_0(VAR_8) |
   FUNC_0(VAR_9) |
   FUNC_0(VAR_6) |
   FUNC_0(VAR_4);

 return 0;
}
