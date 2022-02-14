
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_intrs; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; TYPE_1__ intr; } ;
struct net_device {int dummy; } ;


 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0)
{
 struct vmxnet3_adapter *VAR_1 = FUNC_0(VAR_0);

 return ((9 +
  (1 + VAR_1->intr.num_intrs) +
  (1 + VAR_1->num_tx_queues * 17 ) +
  (1 + VAR_1->num_rx_queues * 23 )) *
  sizeof(u32));
}
