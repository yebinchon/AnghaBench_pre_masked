
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int led_status; struct e1000_hw hw; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
      enum ethtool_phys_id_state VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_4(VAR_1);
 struct e1000_hw *VAR_4 = &VAR_3->hw;

 switch (VAR_2) {
 case 131:
  FUNC_1(VAR_4);
  return 2;
 case 128:
  FUNC_1(VAR_4);
  break;
 case 129:
  FUNC_3(VAR_4);
  break;
 case 130:
  FUNC_3(VAR_4);
  FUNC_0(VAR_0, &VAR_3->led_status);
  FUNC_2(VAR_4);
  break;
 }

 return 0;
}
