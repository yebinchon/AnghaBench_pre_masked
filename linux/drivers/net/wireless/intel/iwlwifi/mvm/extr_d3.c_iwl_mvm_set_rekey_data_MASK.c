
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid; int replay_ctr; int kck; int kek; } ;
struct iwl_mvm_vif {TYPE_1__ rekey_data; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_gtk_rekey_data {scalar_t__ replay_ctr; int kck; int kek; } ;
typedef int __be64 ;
struct TYPE_4__ {scalar_t__ swcrypto; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ieee80211_hw *VAR_3,
       struct ieee80211_vif *VAR_4,
       struct cfg80211_gtk_rekey_data *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_3);
 struct iwl_mvm_vif *VAR_7 = FUNC_3(VAR_4);

 if (VAR_2.swcrypto)
  return;

 FUNC_5(&VAR_6->mutex);

 FUNC_4(VAR_7->rekey_data.kek, VAR_5->kek, VAR_1);
 FUNC_4(VAR_7->rekey_data.kck, VAR_5->kck, VAR_0);
 VAR_7->rekey_data.replay_ctr =
  FUNC_2(FUNC_1((__be64 *)VAR_5->replay_ctr));
 VAR_7->rekey_data.valid = 1;

 FUNC_6(&VAR_6->mutex);
}
