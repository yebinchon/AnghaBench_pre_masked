
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igc_hw {struct igc_adapter* back; } ;
struct igc_adapter {struct net_device* netdev; } ;



struct net_device *FUNC_0(struct igc_hw *VAR_0)
{
 struct igc_adapter *VAR_1 = VAR_0->back;

 return VAR_1->netdev;
}
