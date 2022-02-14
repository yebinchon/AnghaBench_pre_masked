
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmxnet3_adapter {int link_speed; int num_tx_queues; int * tx_queue; int netdev; int cmd_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,struct vmxnet3_adapter*) ;
 int FUNC_8 (int *,struct vmxnet3_adapter*) ;

__attribute__((used)) static void
FUNC_9(struct vmxnet3_adapter *VAR_2, bool VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_5(&VAR_2->cmd_lock, VAR_6);
 FUNC_1(VAR_2, VAR_1, VAR_0);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_6(&VAR_2->cmd_lock, VAR_6);

 VAR_2->link_speed = VAR_4 >> 16;
 if (VAR_4 & 1) {
  FUNC_2(VAR_2->netdev, "NIC Link is Up %d Mbps\n",
       VAR_2->link_speed);
  FUNC_4(VAR_2->netdev);

  if (VAR_3) {
   for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_queues; VAR_5++)
    FUNC_7(&VAR_2->tx_queue[VAR_5],
       VAR_2);
  }
 } else {
  FUNC_2(VAR_2->netdev, "NIC Link is Down\n");
  FUNC_3(VAR_2->netdev);

  if (VAR_3) {
   for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_queues; VAR_5++)
    FUNC_8(&VAR_2->tx_queue[VAR_5], VAR_2);
  }
 }
}
