
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ max_mtu; } ;
struct atl1c_hw {int nic_type; } ;
struct atl1c_adapter {struct atl1c_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 struct atl1c_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5)
{
 struct atl1c_adapter *VAR_6 = FUNC_0(VAR_5);
 struct atl1c_hw *VAR_7 = &VAR_6->hw;

 switch (VAR_7->nic_type) {

 case 130:
 case 129:
 case 128:
  VAR_5->max_mtu = VAR_3 -
      (VAR_2 + VAR_1 + VAR_4);
  break;

 default:
  VAR_5->max_mtu = VAR_0;
  break;
 }
}
