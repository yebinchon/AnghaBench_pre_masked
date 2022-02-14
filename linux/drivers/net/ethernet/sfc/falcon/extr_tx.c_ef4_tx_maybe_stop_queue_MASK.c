
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int core_txq; void* old_read_count; void* insert_count; int read_count; struct ef4_nic* efx; } ;
struct ef4_nic {unsigned int txq_stop_thresh; unsigned int txq_entries; int loopback_selftest; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 struct ef4_tx_queue* FUNC_2 (struct ef4_tx_queue*) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned int FUNC_4 (void*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct ef4_tx_queue *VAR_0)
{

 struct ef4_tx_queue *VAR_1 = FUNC_2(VAR_0);
 struct ef4_nic *VAR_2 = VAR_0->efx;
 unsigned int VAR_3;

 VAR_3 = FUNC_4(VAR_0->insert_count - VAR_0->old_read_count,
    VAR_1->insert_count - VAR_1->old_read_count);
 if (FUNC_3(VAR_3 < VAR_2->txq_stop_thresh))
  return;
 FUNC_6(VAR_0->core_txq);
 FUNC_7();
 VAR_0->old_read_count = FUNC_1(VAR_0->read_count);
 VAR_1->old_read_count = FUNC_1(VAR_1->read_count);

 VAR_3 = FUNC_4(VAR_0->insert_count - VAR_0->old_read_count,
    VAR_1->insert_count - VAR_1->old_read_count);
 FUNC_0(VAR_3 >= VAR_2->txq_entries);
 if (FUNC_3(VAR_3 < VAR_2->txq_stop_thresh)) {
  FUNC_7();
  if (FUNC_3(!VAR_2->loopback_selftest))
   FUNC_5(VAR_0->core_txq);
 }
}
