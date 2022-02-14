
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_mvm_reorder_buffer {size_t queue; int head_sn; int buf_size; int reorder_timer; int removed; scalar_t__ num_stored; int lock; } ;
struct TYPE_2__ {scalar_t__ reorder_time; struct sk_buff_head frames; } ;
struct iwl_mvm_reorder_buf_entry {TYPE_1__ e; } ;
struct iwl_mvm_baid_data {size_t entries_per_queue; int baid; struct iwl_mvm_reorder_buf_entry* entries; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int,int) ;
 int FUNC_5 (struct iwl_mvm*,struct napi_struct*,struct sk_buff*,size_t,struct ieee80211_sta*,int) ;
 int FUNC_6 (struct iwl_mvm*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_3,
       struct ieee80211_sta *VAR_4,
       struct napi_struct *VAR_5,
       struct iwl_mvm_baid_data *VAR_6,
       struct iwl_mvm_reorder_buffer *VAR_7,
       u16 VAR_8, u32 VAR_9)
{
 struct iwl_mvm_reorder_buf_entry *VAR_10 =
  &VAR_6->entries[VAR_7->queue *
        VAR_6->entries_per_queue];
 u16 VAR_11 = VAR_7->head_sn;

 FUNC_7(&VAR_7->lock);
 if ((VAR_9 & VAR_0) &&
     FUNC_3(VAR_8, VAR_11))
  goto set_timer;


 if (FUNC_4(VAR_8, VAR_11, VAR_7->buf_size))
  goto set_timer;

 while (FUNC_4(VAR_11, VAR_8, VAR_7->buf_size)) {
  int VAR_12 = VAR_11 % VAR_7->buf_size;
  struct sk_buff_head *VAR_13 = &VAR_10[VAR_12].e.frames;
  struct sk_buff *VAR_14;

  VAR_11 = FUNC_2(VAR_11);
  if ((VAR_9 & VAR_1) &&
      (VAR_11 == 2048 || VAR_11 == 0))
   FUNC_6(VAR_3, VAR_6->baid, VAR_11);






  while ((VAR_14 = FUNC_0(VAR_13))) {
   FUNC_5(VAR_3, VAR_5, VAR_14,
       VAR_7->queue,
       VAR_4, 0);
   VAR_7->num_stored--;
  }
 }
 VAR_7->head_sn = VAR_8;

set_timer:
 if (VAR_7->num_stored && !VAR_7->removed) {
  u16 VAR_15 = VAR_7->head_sn % VAR_7->buf_size;

  while (FUNC_9(&VAR_10[VAR_15].e.frames))
   VAR_15 = (VAR_15 + 1) % VAR_7->buf_size;

  FUNC_8(&VAR_7->reorder_timer,
     VAR_10[VAR_15].e.reorder_time + 1 +
     VAR_2);
 } else {
  FUNC_1(&VAR_7->reorder_timer);
 }
}
