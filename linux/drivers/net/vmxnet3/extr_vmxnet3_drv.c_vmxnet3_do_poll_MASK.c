
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; int * rx_queue; int * tx_queue; TYPE_1__* shared; } ;
struct TYPE_2__ {int ecr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_adapter*) ;
 scalar_t__ FUNC_2 (int *,struct vmxnet3_adapter*,int) ;
 int FUNC_3 (int *,struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct vmxnet3_adapter *VAR_0, int VAR_1)
{
 int VAR_2 = 0, VAR_3;
 if (FUNC_0(VAR_0->shared->ecr))
  FUNC_1(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_0->num_tx_queues; VAR_3++)
  FUNC_3(&VAR_0->tx_queue[VAR_3], VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_rx_queues; VAR_3++)
  VAR_2 += FUNC_2(&VAR_0->rx_queue[VAR_3],
         VAR_0, VAR_1);
 return VAR_2;
}
