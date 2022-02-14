
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macb_queue {int rx_buffers; scalar_t__ rx_buffers_dma; } ;
struct macb {int rx_ring_size; int rx_buffer_size; int dev; TYPE_1__* pdev; struct macb_queue* queues; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,char*,int,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct macb *VAR_2)
{
 struct macb_queue *VAR_3 = &VAR_2->queues[0];
 int VAR_4;

 VAR_4 = VAR_2->rx_ring_size * VAR_2->rx_buffer_size;
 VAR_3->rx_buffers = FUNC_0(&VAR_2->pdev->dev, VAR_4,
         &VAR_3->rx_buffers_dma, VAR_1);
 if (!VAR_3->rx_buffers)
  return -VAR_0;

 FUNC_1(VAR_2->dev,
     "Allocated RX buffers of %d bytes at %08lx (mapped %p)\n",
     VAR_4, (unsigned long)VAR_3->rx_buffers_dma, VAR_3->rx_buffers);
 return 0;
}
