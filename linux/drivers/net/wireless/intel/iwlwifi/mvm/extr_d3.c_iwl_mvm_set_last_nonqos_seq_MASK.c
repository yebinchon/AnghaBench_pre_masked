
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_nonqos_seq_query_cmd {int value; int mac_id_n_color; int get_set_flag; } ;
struct iwl_mvm_vif {int seqno_valid; int seqno; int color; int id; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
typedef int query_cmd ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_nonqos_seq_query_cmd*) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;

void FUNC_6(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_5(VAR_3);
 struct iwl_nonqos_seq_query_cmd VAR_5 = {
  .get_set_flag = FUNC_3(VAR_0),
  .mac_id_n_color =
   FUNC_3(FUNC_0(VAR_4->id,
       VAR_4->color)),
  .value = FUNC_2(VAR_4->seqno),
 };


 if (!VAR_4->seqno_valid)
  return;

 VAR_4->seqno_valid = 0;

 if (FUNC_4(VAR_2, VAR_1, 0,
     sizeof(VAR_5), &VAR_5))
  FUNC_1(VAR_2, "failed to set non-QoS seqno\n");
}
