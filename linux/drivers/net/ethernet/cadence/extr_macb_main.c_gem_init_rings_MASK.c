
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_queue {scalar_t__ rx_prepared_head; scalar_t__ rx_tail; scalar_t__ tx_tail; scalar_t__ tx_head; } ;
struct macb_dma_desc {int ctrl; } ;
struct macb {unsigned int num_queues; int tx_ring_size; struct macb_queue* queues; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct macb_queue*) ;
 int FUNC_2 (struct macb*,struct macb_dma_desc*,int ) ;
 struct macb_dma_desc* FUNC_3 (struct macb_queue*,int) ;

__attribute__((used)) static void FUNC_4(struct macb *VAR_2)
{
 struct macb_queue *VAR_3;
 struct macb_dma_desc *VAR_4 = ((void*)0);
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0, VAR_3 = VAR_2->queues; VAR_5 < VAR_2->num_queues; ++VAR_5, ++VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_2->tx_ring_size; VAR_6++) {
   VAR_4 = FUNC_3(VAR_3, VAR_6);
   FUNC_2(VAR_2, VAR_4, 0);
   VAR_4->ctrl = FUNC_0(VAR_0);
  }
  VAR_4->ctrl |= FUNC_0(VAR_1);
  VAR_3->tx_head = 0;
  VAR_3->tx_tail = 0;

  VAR_3->rx_tail = 0;
  VAR_3->rx_prepared_head = 0;

  FUNC_1(VAR_3);
 }

}
