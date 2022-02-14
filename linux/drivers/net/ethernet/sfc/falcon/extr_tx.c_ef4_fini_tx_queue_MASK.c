
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_tx_queue {size_t read_count; size_t write_count; size_t ptr_mask; int xmit_more_available; int core_txq; struct ef4_tx_buffer* buffer; int queue; TYPE_1__* efx; } ;
struct ef4_tx_buffer {int dummy; } ;
struct TYPE_2__ {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_tx_queue*,struct ef4_tx_buffer*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,int ) ;

void FUNC_3(struct ef4_tx_queue *VAR_1)
{
 struct ef4_tx_buffer *VAR_2;

 FUNC_2(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
    "shutting down TX queue %d\n", VAR_1->queue);

 if (!VAR_1->buffer)
  return;


 while (VAR_1->read_count != VAR_1->write_count) {
  unsigned int VAR_3 = 0, VAR_4 = 0;
  VAR_2 = &VAR_1->buffer[VAR_1->read_count & VAR_1->ptr_mask];
  FUNC_0(VAR_1, VAR_2, &VAR_3, &VAR_4);

  ++VAR_1->read_count;
 }
 VAR_1->xmit_more_available = 0;
 FUNC_1(VAR_1->core_txq);
}
