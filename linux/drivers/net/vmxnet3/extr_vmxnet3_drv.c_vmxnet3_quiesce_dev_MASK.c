
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_adapter {int num_rx_queues; int netdev; scalar_t__ link_speed; TYPE_1__* rx_queue; int cmd_lock; int state; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct vmxnet3_adapter*) ;
 int FUNC_8 (struct vmxnet3_adapter*) ;
 int FUNC_9 (struct vmxnet3_adapter*) ;
 int FUNC_10 (struct vmxnet3_adapter*) ;

int
FUNC_11(struct vmxnet3_adapter *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 if (FUNC_6(VAR_2, &VAR_3->state))
  return 0;


 FUNC_4(&VAR_3->cmd_lock, VAR_5);
 FUNC_0(VAR_3, VAR_1,
          VAR_0);
 FUNC_5(&VAR_3->cmd_lock, VAR_5);
 FUNC_7(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_rx_queues; VAR_4++)
  FUNC_1(&VAR_3->rx_queue[VAR_4].napi);
 FUNC_3(VAR_3->netdev);
 VAR_3->link_speed = 0;
 FUNC_2(VAR_3->netdev);

 FUNC_10(VAR_3);
 FUNC_9(VAR_3);
 FUNC_8(VAR_3);
 return 0;
}
