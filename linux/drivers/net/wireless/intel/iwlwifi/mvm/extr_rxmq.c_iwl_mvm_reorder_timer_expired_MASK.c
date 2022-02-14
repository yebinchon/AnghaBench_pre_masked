
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct timer_list {int dummy; } ;
struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm_reorder_buffer {size_t queue; int buf_size; int head_sn; int lock; int reorder_timer; TYPE_2__* mvm; scalar_t__ removed; int num_stored; } ;
struct TYPE_5__ {scalar_t__ reorder_time; int frames; } ;
struct iwl_mvm_reorder_buf_entry {TYPE_1__ e; } ;
struct iwl_mvm_baid_data {size_t entries_per_queue; size_t sta_id; int tid; struct iwl_mvm_reorder_buf_entry* entries; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int * fw_id_to_mac_id; } ;


 int FUNC_0 (TYPE_2__*,char*,size_t,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iwl_mvm_reorder_buffer* VAR_2 ;
 struct iwl_mvm_reorder_buffer* FUNC_1 (int ,struct timer_list*,int ) ;
 size_t FUNC_2 (int,int) ;
 struct iwl_mvm_baid_data* FUNC_3 (struct iwl_mvm_reorder_buffer*) ;
 int FUNC_4 (TYPE_2__*,int ,struct ieee80211_sta*,int ) ;
 int FUNC_5 (TYPE_2__*,struct ieee80211_sta*,int *,struct iwl_mvm_baid_data*,struct iwl_mvm_reorder_buffer*,size_t,int ) ;
 struct iwl_mvm_sta* FUNC_6 (struct ieee80211_sta*) ;
 int VAR_3 ;
 int FUNC_7 (int *,scalar_t__) ;
 struct ieee80211_sta* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,scalar_t__) ;

void FUNC_15(struct timer_list *VAR_5)
{
 struct iwl_mvm_reorder_buffer *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 struct iwl_mvm_baid_data *VAR_7 =
  FUNC_3(VAR_6);
 struct iwl_mvm_reorder_buf_entry *VAR_8 =
  &VAR_7->entries[VAR_6->queue * VAR_7->entries_per_queue];
 int VAR_9;
 u16 VAR_10 = 0, VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_12(&VAR_6->lock);

 if (!VAR_6->num_stored || VAR_6->removed) {
  FUNC_13(&VAR_6->lock);
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->buf_size ; VAR_9++) {
  VAR_11 = (VAR_6->head_sn + VAR_9) % VAR_6->buf_size;

  if (FUNC_11(&VAR_8[VAR_11].e.frames)) {




   VAR_13 = 0;
   continue;
  }
  if (!VAR_13 &&
      !FUNC_14(VAR_3, VAR_8[VAR_11].e.reorder_time +
      VAR_1))
   break;

  VAR_12 = 1;

  VAR_13 = 1;
  VAR_10 = FUNC_2(VAR_6->head_sn, VAR_9 + 1);
 }

 if (VAR_12) {
  struct ieee80211_sta *VAR_14;
  struct iwl_mvm_sta *VAR_15;
  u8 VAR_16 = VAR_7->sta_id;

  FUNC_9();
  VAR_14 = FUNC_8(VAR_6->mvm->fw_id_to_mac_id[VAR_16]);
  VAR_15 = FUNC_6(VAR_14);


  FUNC_0(VAR_6->mvm,
        "Releasing expired frames for sta %u, sn %d\n",
        VAR_16, VAR_10);
  FUNC_4(VAR_6->mvm, VAR_15->vif,
           VAR_14, VAR_7->tid);
  FUNC_5(VAR_6->mvm, VAR_14, ((void*)0), VAR_7,
           VAR_6, VAR_10, VAR_0);
  FUNC_10();
 } else {





  FUNC_7(&VAR_6->reorder_timer,
     VAR_8[VAR_11].e.reorder_time +
     1 + VAR_1);
 }
 FUNC_13(&VAR_6->lock);
}
