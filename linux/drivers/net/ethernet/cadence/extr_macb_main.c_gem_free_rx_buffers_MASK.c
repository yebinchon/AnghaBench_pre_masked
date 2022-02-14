
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct macb_queue {struct sk_buff** rx_skbuff; } ;
struct macb_dma_desc {int dummy; } ;
struct macb {unsigned int num_queues; int rx_ring_size; int rx_buffer_size; TYPE_1__* pdev; struct macb_queue* queues; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff**) ;
 int FUNC_3 (struct macb*,struct macb_dma_desc*) ;
 struct macb_dma_desc* FUNC_4 (struct macb_queue*,int) ;

__attribute__((used)) static void FUNC_5(struct macb *VAR_1)
{
 struct sk_buff *VAR_2;
 struct macb_dma_desc *VAR_3;
 struct macb_queue *VAR_4;
 dma_addr_t VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0, VAR_4 = VAR_1->queues; VAR_6 < VAR_1->num_queues; ++VAR_6, ++VAR_4) {
  if (!VAR_4->rx_skbuff)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_1->rx_ring_size; VAR_7++) {
   VAR_2 = VAR_4->rx_skbuff[VAR_7];

   if (!VAR_2)
    continue;

   VAR_3 = FUNC_4(VAR_4, VAR_7);
   VAR_5 = FUNC_3(VAR_1, VAR_3);

   FUNC_1(&VAR_1->pdev->dev, VAR_5, VAR_1->rx_buffer_size,
     VAR_0);
   FUNC_0(VAR_2);
   VAR_2 = ((void*)0);
  }

  FUNC_2(VAR_4->rx_skbuff);
  VAR_4->rx_skbuff = ((void*)0);
 }
}
