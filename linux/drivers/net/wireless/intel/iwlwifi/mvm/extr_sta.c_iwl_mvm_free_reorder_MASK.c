
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_reorder_buffer {int buf_size; int removed; int reorder_timer; int lock; int num_stored; } ;
struct TYPE_4__ {int frames; } ;
struct iwl_mvm_reorder_buf_entry {TYPE_2__ e; } ;
struct iwl_mvm_baid_data {int entries_per_queue; struct iwl_mvm_reorder_buf_entry* entries; struct iwl_mvm_reorder_buffer* reorder_buf; int baid; } ;
struct iwl_mvm {TYPE_1__* trans; } ;
struct TYPE_3__ {int num_rx_queues; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_mvm*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_mvm *VAR_0,
     struct iwl_mvm_baid_data *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0, VAR_1->baid);

 for (VAR_2 = 0; VAR_2 < VAR_0->trans->num_rx_queues; VAR_2++) {
  int VAR_3;
  struct iwl_mvm_reorder_buffer *VAR_4 =
   &VAR_1->reorder_buf[VAR_2];
  struct iwl_mvm_reorder_buf_entry *VAR_5 =
   &VAR_1->entries[VAR_2 * VAR_1->entries_per_queue];

  FUNC_5(&VAR_4->lock);
  if (FUNC_4(!VAR_4->num_stored)) {
   FUNC_6(&VAR_4->lock);
   continue;
  }






  FUNC_0(1);

  for (VAR_3 = 0; VAR_3 < VAR_4->buf_size; VAR_3++)
   FUNC_1(&VAR_5[VAR_3].e.frames);
  VAR_4->removed = 1;
  FUNC_6(&VAR_4->lock);
  FUNC_2(&VAR_4->reorder_timer);
 }
}
