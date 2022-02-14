
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macb_queue {int * rx_buffers; int rx_buffers_dma; } ;
struct macb {int rx_ring_size; int rx_buffer_size; TYPE_1__* pdev; struct macb_queue* queues; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct macb *VAR_0)
{
 struct macb_queue *VAR_1 = &VAR_0->queues[0];

 if (VAR_1->rx_buffers) {
  FUNC_0(&VAR_0->pdev->dev,
      VAR_0->rx_ring_size * VAR_0->rx_buffer_size,
      VAR_1->rx_buffers, VAR_1->rx_buffers_dma);
  VAR_1->rx_buffers = ((void*)0);
 }
}
