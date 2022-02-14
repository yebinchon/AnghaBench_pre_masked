
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_nonqos_seq_query_cmd {int mac_id_n_color; int get_set_flag; } ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_host_cmd {int* len; TYPE_1__* resp_pkt; struct iwl_nonqos_seq_query_cmd** data; int flags; int id; } ;
struct ieee80211_vif {int dummy; } ;
typedef int query_cmd ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_4,
           struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_4(VAR_5);
 struct iwl_nonqos_seq_query_cmd VAR_7 = {
  .get_set_flag = FUNC_1(VAR_2),
  .mac_id_n_color =
   FUNC_1(FUNC_0(VAR_6->id,
       VAR_6->color)),
 };
 struct iwl_host_cmd VAR_8 = {
  .id = VAR_3,
  .flags = VAR_0,
 };
 int VAR_9;
 u32 VAR_10;

 VAR_8.data[0] = &VAR_7;
 VAR_8.len[0] = sizeof(VAR_7);

 VAR_9 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_5(VAR_8.resp_pkt);
 if (VAR_10 < sizeof(__le16)) {
  VAR_9 = -VAR_1;
 } else {
  VAR_9 = FUNC_6((__le16 *)VAR_8.resp_pkt->data);

  VAR_9 = (u16) (VAR_9 - 0x10);
 }

 FUNC_2(&VAR_8);
 return VAR_9;
}
