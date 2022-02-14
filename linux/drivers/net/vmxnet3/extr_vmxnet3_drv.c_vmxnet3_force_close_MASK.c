
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_rx_queues; int netdev; int state; TYPE_1__* rx_queue; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct vmxnet3_adapter *VAR_2)
{
 int VAR_3;





 FUNC_0(FUNC_4(VAR_1, &VAR_2->state));


 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++)
  FUNC_3(&VAR_2->rx_queue[VAR_3].napi);




 FUNC_1(VAR_0, &VAR_2->state);
 FUNC_2(VAR_2->netdev);
}
