
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmxnet3_adapter {int num_rx_queues; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; } ;


 int VAR_0 ;

 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
    u32 *VAR_3)
{
 struct vmxnet3_adapter *VAR_4 = FUNC_0(VAR_1);
 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->num_rx_queues;
  return 0;
 }
 return -VAR_0;
}
