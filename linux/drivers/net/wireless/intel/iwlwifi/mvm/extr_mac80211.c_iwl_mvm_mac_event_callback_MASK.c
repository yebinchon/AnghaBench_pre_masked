
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int tid; int sta; } ;
struct TYPE_4__ {TYPE_1__ ba; } ;
struct ieee80211_event {int type; TYPE_2__ u; } ;




 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;

 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_event const*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_event const*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
           struct ieee80211_vif *VAR_1,
           const struct ieee80211_event *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_2->type) {
 case 128:
  FUNC_3(VAR_3, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_3, VAR_1, VAR_2);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_1, VAR_2->u.ba.sta,
           VAR_2->u.ba.tid);
  break;
 default:
  break;
 }
}
