
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct iwl_mvm_reorder_buffer {int buf_size; int queue; int valid; struct iwl_mvm* mvm; int lock; int reorder_timer; void* head_sn; scalar_t__ num_stored; } ;
struct TYPE_4__ {int frames; } ;
struct iwl_mvm_reorder_buf_entry {TYPE_2__ e; } ;
struct iwl_mvm_baid_data {int entries_per_queue; struct iwl_mvm_reorder_buf_entry* entries; struct iwl_mvm_reorder_buffer* reorder_buf; } ;
struct iwl_mvm {TYPE_1__* trans; } ;
struct TYPE_3__ {int num_rx_queues; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_1,
     struct iwl_mvm_baid_data *VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->trans->num_rx_queues; VAR_5++) {
  struct iwl_mvm_reorder_buffer *VAR_6 =
   &VAR_2->reorder_buf[VAR_5];
  struct iwl_mvm_reorder_buf_entry *VAR_7 =
   &VAR_2->entries[VAR_5 * VAR_2->entries_per_queue];
  int VAR_8;

  VAR_6->num_stored = 0;
  VAR_6->head_sn = VAR_3;
  VAR_6->buf_size = VAR_4;

  FUNC_2(&VAR_6->reorder_timer,
       VAR_0, 0);
  FUNC_1(&VAR_6->lock);
  VAR_6->mvm = VAR_1;
  VAR_6->queue = VAR_5;
  VAR_6->valid = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->buf_size; VAR_8++)
   FUNC_0(&VAR_7[VAR_8].e.frames);
 }
}
