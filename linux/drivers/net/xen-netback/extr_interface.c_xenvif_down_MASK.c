
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {scalar_t__ tx_irq; scalar_t__ rx_irq; int credit_timeout; int napi; } ;
struct xenvif {unsigned int num_queues; struct xenvif_queue* queues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xenvif *VAR_0)
{
 struct xenvif_queue *VAR_1 = ((void*)0);
 unsigned int VAR_2 = VAR_0->num_queues;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_1 = &VAR_0->queues[VAR_3];
  FUNC_1(VAR_1->tx_irq);
  if (VAR_1->tx_irq != VAR_1->rx_irq)
   FUNC_1(VAR_1->rx_irq);
  FUNC_2(&VAR_1->napi);
  FUNC_0(&VAR_1->credit_timeout);
 }
}
