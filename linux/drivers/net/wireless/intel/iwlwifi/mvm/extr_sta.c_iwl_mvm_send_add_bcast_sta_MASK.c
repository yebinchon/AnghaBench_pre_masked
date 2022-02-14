
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans_txq_scd_cfg {scalar_t__ sta_id; int aggregate; int frame_limit; int tid; int fifo; } ;
struct iwl_mvm_int_sta {scalar_t__ sta_id; int tfd_queue_msk; } ;
struct iwl_mvm_vif {int color; int id; struct iwl_mvm_int_sta bcast_sta; } ;
struct iwl_mvm {int probe_queue; int p2p_dev_queue; int mutex; } ;
struct TYPE_2__ {int* bssid; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int const*,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,int *,int,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 unsigned int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_8 (struct iwl_mvm*,scalar_t__,int ,unsigned int) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iwl_mvm *VAR_9, struct ieee80211_vif *VAR_10)
{
 struct iwl_mvm_vif *VAR_11 = FUNC_9(VAR_10);
 struct iwl_mvm_int_sta *VAR_12 = &VAR_11->bcast_sta;
 static const u8 VAR_13[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
 const u8 *VAR_14 = VAR_13;
 int VAR_15;
 int VAR_16;
 unsigned int VAR_17 =
  FUNC_5(VAR_9, VAR_10, 0, 0);
 struct iwl_trans_txq_scd_cfg VAR_18 = {
  .fifo = VAR_5,
  .sta_id = VAR_11->bcast_sta.sta_id,
  .tid = VAR_3,
  .aggregate = 0,
  .frame_limit = VAR_2,
 };

 FUNC_10(&VAR_9->mutex);

 if (!FUNC_6(VAR_9)) {
  if (VAR_10->type == VAR_7 ||
      VAR_10->type == VAR_6) {
   VAR_15 = VAR_9->probe_queue;
  } else if (VAR_10->type == VAR_8) {
   VAR_15 = VAR_9->p2p_dev_queue;
  } else {
   FUNC_1(1, "Missing required TXQ for adding bcast STA\n");
   return -VAR_0;
  }

  VAR_12->tfd_queue_msk |= FUNC_0(VAR_15);

  FUNC_4(VAR_9, ((void*)0), VAR_15, 0, &VAR_18, VAR_17);
 }

 if (VAR_10->type == VAR_6)
  VAR_14 = VAR_10->bss_conf.bssid;

 if (FUNC_2(VAR_12->sta_id == VAR_4))
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_9, VAR_12, VAR_14,
      VAR_11->id, VAR_11->color);
 if (VAR_16)
  return VAR_16;





 if (FUNC_6(VAR_9)) {
  VAR_15 = FUNC_8(VAR_9, VAR_12->sta_id,
      VAR_3,
      VAR_17);
  if (VAR_15 < 0) {
   FUNC_7(VAR_9, VAR_12->sta_id);
   return VAR_15;
  }

  if (VAR_10->type == VAR_7 ||
      VAR_10->type == VAR_6)
   VAR_9->probe_queue = VAR_15;
  else if (VAR_10->type == VAR_8)
   VAR_9->p2p_dev_queue = VAR_15;
 }

 return 0;
}
