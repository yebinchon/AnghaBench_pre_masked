
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macb_dma_desc {int ctrl; } ;
struct macb {int tx_ring_size; TYPE_1__* queues; } ;
struct TYPE_3__ {scalar_t__ tx_tail; scalar_t__ tx_head; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct macb*,struct macb_dma_desc*,int ) ;
 struct macb_dma_desc* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(struct macb *VAR_2)
{
 int VAR_3;
 struct macb_dma_desc *VAR_4 = ((void*)0);

 FUNC_1(&VAR_2->queues[0]);

 for (VAR_3 = 0; VAR_3 < VAR_2->tx_ring_size; VAR_3++) {
  VAR_4 = FUNC_3(&VAR_2->queues[0], VAR_3);
  FUNC_2(VAR_2, VAR_4, 0);
  VAR_4->ctrl = FUNC_0(VAR_0);
 }
 VAR_2->queues[0].tx_head = 0;
 VAR_2->queues[0].tx_tail = 0;
 VAR_4->ctrl |= FUNC_0(VAR_1);
}
