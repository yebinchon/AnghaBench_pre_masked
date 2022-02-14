
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int desc_size; int * base; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_3__ data_ring; TYPE_2__* rx_ring; } ;
struct vmxnet3_adapter {int num_rx_queues; TYPE_1__* pdev; struct vmxnet3_rx_queue* rx_queue; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++) {
  struct vmxnet3_rx_queue *VAR_2 = &VAR_0->rx_queue[VAR_1];

  if (VAR_2->data_ring.base) {
   FUNC_0(&VAR_0->pdev->dev,
       (VAR_2->rx_ring[0].size *
       VAR_2->data_ring.desc_size),
       VAR_2->data_ring.base,
       VAR_2->data_ring.basePA);
   VAR_2->data_ring.base = ((void*)0);
   VAR_2->data_ring.desc_size = 0;
  }
 }
}
