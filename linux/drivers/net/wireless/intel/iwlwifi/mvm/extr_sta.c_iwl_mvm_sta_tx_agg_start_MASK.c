
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct iwl_mvm_tid_data {scalar_t__ state; scalar_t__ txq_id; size_t ssn; size_t next_reclaimed; int seq_number; } ;
struct iwl_mvm_sta {int lock; int sta_id; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {TYPE_3__* trans; TYPE_1__* queue_info; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {scalar_t__ gen2; } ;
struct TYPE_4__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,char*,size_t,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct iwl_mvm*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_sta*,int ,size_t) ;
 struct iwl_mvm_sta* FUNC_9 (struct ieee80211_sta*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * VAR_13 ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct iwl_mvm *VAR_14, struct ieee80211_vif *VAR_15,
        struct ieee80211_sta *VAR_16, u16 VAR_17, u16 *VAR_18)
{
 struct iwl_mvm_sta *VAR_19 = FUNC_9(VAR_16);
 struct iwl_mvm_tid_data *VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 int VAR_23;

 if (FUNC_4(VAR_17 >= VAR_7))
  return -VAR_0;

 if (VAR_19->tid_data[VAR_17].state != VAR_3 &&
     VAR_19->tid_data[VAR_17].state != VAR_2) {
  FUNC_2(VAR_14,
   "Start AGG when state is not IWL_AGG_QUEUED or IWL_AGG_OFF %d!\n",
   VAR_19->tid_data[VAR_17].state);
  return -VAR_1;
 }

 FUNC_10(&VAR_14->mutex);

 if (VAR_19->tid_data[VAR_17].txq_id == VAR_10 &&
     FUNC_7(VAR_14)) {
  u8 VAR_24 = VAR_13[VAR_17];

  VAR_23 = FUNC_8(VAR_14, VAR_16, VAR_24, VAR_17);
  if (VAR_23)
   return VAR_23;
 }

 FUNC_11(&VAR_19->lock);







 VAR_22 = VAR_19->tid_data[VAR_17].txq_id;
 if (VAR_22 == VAR_10) {
  VAR_23 = FUNC_6(VAR_14, VAR_19->sta_id,
           VAR_9,
           VAR_8);
  if (VAR_23 < 0) {
   FUNC_2(VAR_14, "Failed to allocate agg queue\n");
   goto out;
  }

  VAR_22 = VAR_23;


  VAR_14->queue_info[VAR_22].status = VAR_11;
 } else if (FUNC_3(VAR_22 >= VAR_6)) {
  VAR_23 = -VAR_1;
  FUNC_2(VAR_14, "tid_id %d out of range (0, %d)!\n",
   VAR_17, VAR_6 - 1);
  goto out;

 } else if (FUNC_13(VAR_14->queue_info[VAR_22].status ==
       VAR_12)) {
  VAR_23 = -VAR_1;
  FUNC_1(VAR_14,
        "Can't start tid %d agg on shared queue!\n",
        VAR_17);
  goto out;
 }

 FUNC_1(VAR_14,
       "AGG for tid %d will be on queue #%d\n",
       VAR_17, VAR_22);

 VAR_20 = &VAR_19->tid_data[VAR_17];
 VAR_20->ssn = FUNC_0(VAR_20->seq_number);
 VAR_20->txq_id = VAR_22;
 *VAR_18 = VAR_20->ssn;

 FUNC_1(VAR_14,
       "Start AGG: sta %d tid %d queue %d - ssn = %d, next_recl = %d\n",
       VAR_19->sta_id, VAR_17, VAR_22, VAR_20->ssn,
       VAR_20->next_reclaimed);





 VAR_21 = VAR_20->ssn;
 if (VAR_14->trans->trans_cfg->gen2)
  VAR_21 &= 0xff;

 if (VAR_21 == VAR_20->next_reclaimed) {
  VAR_20->state = VAR_4;
  FUNC_5(VAR_15, VAR_16->addr, VAR_17);
 } else {
  VAR_20->state = VAR_5;
 }

 VAR_23 = 0;

out:
 FUNC_12(&VAR_19->lock);

 return VAR_23;
}
