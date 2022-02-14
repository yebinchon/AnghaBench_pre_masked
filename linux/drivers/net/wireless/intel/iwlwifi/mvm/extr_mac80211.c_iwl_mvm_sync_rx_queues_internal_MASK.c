
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct iwl_mvm_internal_rxq_notif {scalar_t__ sync; int cookie; } ;
struct iwl_mvm {int queue_sync_cookie; int queue_sync_counter; int rx_sync_waitq; int mutex; TYPE_1__* trans; } ;
struct TYPE_2__ {int num_rx_queues; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,scalar_t__,int *,scalar_t__,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,int ) ;

void FUNC_10(struct iwl_mvm *VAR_1,
         struct iwl_mvm_internal_rxq_notif *VAR_2,
         u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1->trans->num_rx_queues) - 1;
 int VAR_5;


 if (!FUNC_5(VAR_1))
  return;

 if (VAR_2->sync) {
  VAR_2->cookie = VAR_1->queue_sync_cookie;
  FUNC_4(&VAR_1->queue_sync_counter,
      VAR_1->trans->num_rx_queues);
 }

 VAR_5 = FUNC_7(VAR_1, VAR_4, (u8 *)VAR_2,
          VAR_3, !VAR_2->sync);
 if (VAR_5) {
  FUNC_1(VAR_1, "Failed to trigger RX queues sync (%d)\n", VAR_5);
  goto out;
 }

 if (VAR_2->sync) {
  FUNC_8(&VAR_1->mutex);
  VAR_5 = FUNC_9(VAR_1->rx_sync_waitq,
      FUNC_3(&VAR_1->queue_sync_counter) == 0 ||
      FUNC_6(VAR_1),
      VAR_0);
  FUNC_2(!VAR_5 && !FUNC_6(VAR_1));
 }

out:
 FUNC_4(&VAR_1->queue_sync_counter, 0);
 if (VAR_2->sync)
  VAR_1->queue_sync_cookie++;
}
