
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_trans_txq_scd_cfg {int tid; int aggregate; int fifo; int frame_limit; int sta_id; } ;
struct iwl_mvm_tid_data {int txq_id; scalar_t__ seq_number; } ;
struct iwl_mvm_sta {size_t reserved_queue; int sta_id; struct iwl_mvm_tid_data* tid_data; int vif; } ;
struct iwl_mvm {TYPE_1__* queue_info; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int status; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_sta*,int,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 unsigned int FUNC_3 (struct iwl_mvm*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int) ;
 struct iwl_mvm_sta* FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int,unsigned int) ;
 int* VAR_8 ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_9,
       struct ieee80211_sta *VAR_10)
{
 struct iwl_mvm_sta *VAR_11 = FUNC_6(VAR_10);
 unsigned int VAR_12 =
  FUNC_3(VAR_9, VAR_11->vif, 0, 0);
 int VAR_13;
 struct iwl_trans_txq_scd_cfg VAR_14 = {
  .sta_id = VAR_11->sta_id,
  .frame_limit = VAR_1,
 };


 if (VAR_11->reserved_queue != VAR_0)
  VAR_9->queue_info[VAR_11->reserved_queue].status =
   VAR_7;

 for (VAR_13 = 0; VAR_13 <= VAR_2; VAR_13++) {
  struct iwl_mvm_tid_data *VAR_15 = &VAR_11->tid_data[VAR_13];
  int VAR_16 = VAR_15->txq_id;
  int VAR_17;

  if (VAR_16 == VAR_5)
   continue;

  VAR_17 = VAR_8[VAR_13];

  if (FUNC_4(VAR_9)) {
   FUNC_1(VAR_9,
         "Re-mapping sta %d tid %d\n",
         VAR_11->sta_id, VAR_13);
   VAR_16 = FUNC_7(VAR_9, VAR_11->sta_id,
        VAR_13, VAR_12);





   if (VAR_16 < 0)
    VAR_16 = VAR_5;
   VAR_15->txq_id = VAR_16;







   VAR_15->seq_number = 0;
  } else {
   u16 VAR_18 = FUNC_0(VAR_15->seq_number);

   VAR_14.tid = VAR_13;
   VAR_14.fifo = FUNC_5(VAR_9, VAR_17);
   VAR_14.aggregate = (VAR_16 >= VAR_4 ||
      VAR_16 ==
      VAR_3);

   FUNC_1(VAR_9,
         "Re-mapping sta %d tid %d to queue %d\n",
         VAR_11->sta_id, VAR_13, VAR_16);

   FUNC_2(VAR_9, VAR_10, VAR_16, VAR_18, &VAR_14, VAR_12);
   VAR_9->queue_info[VAR_16].status = VAR_6;
  }
 }
}
