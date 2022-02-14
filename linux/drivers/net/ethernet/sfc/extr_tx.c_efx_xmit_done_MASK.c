
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int ptr_mask; unsigned int pkts_compl; unsigned int bytes_compl; int insert_count; int read_count; int old_write_count; int empty_read_count; int write_count; int core_txq; int merge_events; struct efx_nic* efx; } ;
struct efx_nic {unsigned int txq_wake_thresh; int net_dev; int port_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct efx_tx_queue*,unsigned int,unsigned int*,unsigned int*) ;
 struct efx_tx_queue* FUNC_3 (struct efx_tx_queue*) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct efx_tx_queue *VAR_1, unsigned int VAR_2)
{
 unsigned VAR_3;
 struct efx_nic *VAR_4 = VAR_1->efx;
 struct efx_tx_queue *VAR_5;
 unsigned int VAR_6 = 0, VAR_7 = 0;

 FUNC_0(VAR_2 > VAR_1->ptr_mask);

 FUNC_2(VAR_1, VAR_2, &VAR_6, &VAR_7);
 VAR_1->pkts_compl += VAR_6;
 VAR_1->bytes_compl += VAR_7;

 if (VAR_6 > 1)
  ++VAR_1->merge_events;





 FUNC_9();
 if (FUNC_10(FUNC_7(VAR_1->core_txq)) &&
     FUNC_4(VAR_4->port_enabled) &&
     FUNC_4(FUNC_6(VAR_4->net_dev))) {
  VAR_5 = FUNC_3(VAR_1);
  VAR_3 = FUNC_5(VAR_1->insert_count - VAR_1->read_count,
     VAR_5->insert_count - VAR_5->read_count);
  if (VAR_3 <= VAR_4->txq_wake_thresh)
   FUNC_8(VAR_1->core_txq);
 }


 if ((int)(VAR_1->read_count - VAR_1->old_write_count) >= 0) {
  VAR_1->old_write_count = FUNC_1(VAR_1->write_count);
  if (VAR_1->read_count == VAR_1->old_write_count) {
   FUNC_9();
   VAR_1->empty_read_count =
    VAR_1->read_count | VAR_0;
  }
 }
}
