
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct iwl_wowlan_status_data {int* qos_seq_ctr; int wake_packet; void* wake_packet_bufsize; void* wake_packet_length; void* wakeup_reasons; void* pattern_number; } ;
struct iwl_wowlan_status {int wake_packet; int wake_packet_bufsize; int wake_packet_length; int wakeup_reasons; int * qos_seq_ctr; int pattern_number; } ;
struct iwl_mvm_sta {TYPE_2__* tid_data; } ;
struct iwl_mvm {int offload_tid; int mutex; TYPE_3__* trans; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_6__ {TYPE_1__* trans_cfg; } ;
struct TYPE_5__ {int seq_number; int txq_id; } ;
struct TYPE_4__ {scalar_t__ device_family; } ;


 scalar_t__ FUNC_0 (struct iwl_wowlan_status*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iwl_wowlan_status* FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_wowlan_status_data*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_wowlan_status*) ;
 struct iwl_mvm_sta* FUNC_4 (struct iwl_mvm*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (struct iwl_wowlan_status*) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct iwl_mvm *VAR_2,
      struct ieee80211_vif *VAR_3)
{
 struct iwl_wowlan_status_data VAR_4;
 struct iwl_wowlan_status *VAR_5;
 int VAR_6;
 bool VAR_7;
 struct iwl_mvm_sta *VAR_8;

 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_5))
  goto out_unlock;

 VAR_4.pattern_number = FUNC_7(VAR_5->pattern_number);
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  VAR_4.qos_seq_ctr[VAR_6] =
   FUNC_7(VAR_5->qos_seq_ctr[VAR_6]);
 VAR_4.wakeup_reasons = FUNC_8(VAR_5->wakeup_reasons);
 VAR_4.wake_packet_length =
  FUNC_8(VAR_5->wake_packet_length);
 VAR_4.wake_packet_bufsize =
  FUNC_8(VAR_5->wake_packet_bufsize);
 VAR_4.wake_packet = VAR_5->wake_packet;


 VAR_8 = FUNC_4(VAR_2, 0);
 if (!VAR_8)
  goto out_free;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  u16 VAR_9 = VAR_4.qos_seq_ctr[VAR_6];

  VAR_9 += 0x10;
  VAR_8->tid_data[VAR_6].seq_number = VAR_9;
 }

 if (VAR_2->trans->trans_cfg->device_family >= VAR_0) {
  VAR_6 = VAR_2->offload_tid;
  FUNC_5(VAR_2->trans,
         VAR_8->tid_data[VAR_6].txq_id,
         VAR_8->tid_data[VAR_6].seq_number >> 4);
 }


 FUNC_9(&VAR_2->mutex);

 FUNC_2(VAR_2, VAR_3, &VAR_4);

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5);

 FUNC_6(VAR_5);
 return VAR_7;

out_free:
 FUNC_6(VAR_5);
out_unlock:
 FUNC_9(&VAR_2->mutex);
 return 0;
}
