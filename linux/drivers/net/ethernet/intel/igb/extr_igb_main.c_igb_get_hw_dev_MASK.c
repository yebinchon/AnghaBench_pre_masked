
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igb_adapter {struct net_device* netdev; } ;
struct e1000_hw {struct igb_adapter* back; } ;



struct net_device *FUNC_0(struct e1000_hw *VAR_0)
{
 struct igb_adapter *VAR_1 = VAR_0->back;
 return VAR_1->netdev;
}
