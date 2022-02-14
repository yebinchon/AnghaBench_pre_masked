
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {scalar_t__ tx_irq; scalar_t__ rx_irq; int * dealloc_task; int * task; int napi; } ;
struct xenvif {unsigned int num_queues; struct xenvif_queue* queues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct xenvif_queue*) ;
 int FUNC_4 (struct xenvif*) ;
 int FUNC_5 (struct xenvif*) ;
 int FUNC_6 (struct xenvif_queue*) ;

void FUNC_7(struct xenvif *VAR_0)
{
 struct xenvif_queue *VAR_1 = ((void*)0);
 unsigned int VAR_2 = VAR_0->num_queues;
 unsigned int VAR_3;

 FUNC_4(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_1 = &VAR_0->queues[VAR_3];

  FUNC_1(&VAR_1->napi);

  if (VAR_1->task) {
   FUNC_0(VAR_1->task);
   FUNC_2(VAR_1->task);
   VAR_1->task = ((void*)0);
  }

  if (VAR_1->dealloc_task) {
   FUNC_0(VAR_1->dealloc_task);
   VAR_1->dealloc_task = ((void*)0);
  }

  if (VAR_1->tx_irq) {
   if (VAR_1->tx_irq == VAR_1->rx_irq)
    FUNC_3(VAR_1->tx_irq, VAR_1);
   else {
    FUNC_3(VAR_1->tx_irq, VAR_1);
    FUNC_3(VAR_1->rx_irq, VAR_1);
   }
   VAR_1->tx_irq = 0;
  }

  FUNC_6(VAR_1);
 }

 FUNC_5(VAR_0);
}
