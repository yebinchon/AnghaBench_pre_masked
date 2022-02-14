
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int mutex; } ;
struct TYPE_2__ {int idle; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_scan_ies {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_sched_scan_request {int dummy; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct cfg80211_sched_scan_request*,struct ieee80211_scan_ies*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3,
     struct cfg80211_sched_scan_request *VAR_4,
     struct ieee80211_scan_ies *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_2);

 int VAR_7;

 FUNC_2(&VAR_6->mutex);

 if (!VAR_3->bss_conf.idle) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5, VAR_1);

out:
 FUNC_3(&VAR_6->mutex);
 return VAR_7;
}
