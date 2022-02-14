
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int id; int color; } ;
struct iwl_mvm {int mutex; } ;
struct iwl_chan_switch_te_cmd {int action; int mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int ,int,struct iwl_chan_switch_te_cmd*) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_3,
      struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_2(VAR_3);
 struct iwl_mvm_vif *VAR_6 = FUNC_8(VAR_4);
 struct iwl_chan_switch_te_cmd VAR_7 = {
  .mac_id = FUNC_5(FUNC_0(VAR_6->id,
         VAR_6->color)),
  .action = FUNC_5(VAR_1),
 };

 FUNC_1(VAR_5, "Abort CSA on mac %d\n", VAR_6->id);

 FUNC_9(&VAR_5->mutex);
 FUNC_3(FUNC_7(VAR_5,
         FUNC_4(VAR_2,
          VAR_0),
         0, sizeof(VAR_7), &VAR_7));
 FUNC_10(&VAR_5->mutex);

 FUNC_3(FUNC_6(VAR_3, VAR_4));
}
