
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * sring; } ;
struct TYPE_5__ {int * sring; } ;
struct netfront_queue {scalar_t__ tx_irq; scalar_t__ rx_irq; TYPE_2__ rx; TYPE_1__ tx; void* rx_ring_ref; void* tx_ring_ref; int gref_rx_head; int gref_tx_head; int napi; scalar_t__ rx_evtchn; scalar_t__ tx_evtchn; int rx_refill_timer; } ;
struct netfront_info {TYPE_3__* netdev; struct netfront_queue* queues; } ;
struct TYPE_7__ {unsigned int real_num_tx_queues; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__,struct netfront_queue*) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (struct netfront_queue*) ;
 int FUNC_8 (struct netfront_queue*) ;

__attribute__((used)) static void FUNC_9(struct netfront_info *VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = VAR_1->netdev->real_num_tx_queues;

 FUNC_3(VAR_1->netdev);

 for (VAR_2 = 0; VAR_2 < VAR_3 && VAR_1->queues; ++VAR_2) {
  struct netfront_queue *VAR_4 = &VAR_1->queues[VAR_2];

  FUNC_0(&VAR_4->rx_refill_timer);

  if (VAR_4->tx_irq && (VAR_4->tx_irq == VAR_4->rx_irq))
   FUNC_5(VAR_4->tx_irq, VAR_4);
  if (VAR_4->tx_irq && (VAR_4->tx_irq != VAR_4->rx_irq)) {
   FUNC_5(VAR_4->tx_irq, VAR_4);
   FUNC_5(VAR_4->rx_irq, VAR_4);
  }
  VAR_4->tx_evtchn = VAR_4->rx_evtchn = 0;
  VAR_4->tx_irq = VAR_4->rx_irq = 0;

  if (FUNC_4(VAR_1->netdev))
   FUNC_2(&VAR_4->napi);

  FUNC_8(VAR_4);
  FUNC_7(VAR_4);
  FUNC_1(VAR_4->gref_tx_head);
  FUNC_1(VAR_4->gref_rx_head);


  FUNC_6(VAR_4->tx_ring_ref, VAR_4->tx.sring);
  FUNC_6(VAR_4->rx_ring_ref, VAR_4->rx.sring);

  VAR_4->tx_ring_ref = VAR_0;
  VAR_4->rx_ring_ref = VAR_0;
  VAR_4->tx.sring = ((void*)0);
  VAR_4->rx.sring = ((void*)0);
 }
}
