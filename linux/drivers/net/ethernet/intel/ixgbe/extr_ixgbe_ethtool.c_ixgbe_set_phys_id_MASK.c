
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* led_off ) (struct ixgbe_hw*,int ) ;int (* led_on ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {int led_link_act; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int led_reg; struct ixgbe_hw hw; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
        enum ethtool_phys_id_state VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_2(VAR_2);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;

 if (!VAR_5->mac.ops.led_on || !VAR_5->mac.ops.led_off)
  return -VAR_0;

 switch (VAR_3) {
 case 131:
  VAR_4->led_reg = FUNC_0(VAR_5, VAR_1);
  return 2;

 case 128:
  VAR_5->mac.ops.led_on(VAR_5, VAR_5->mac.led_link_act);
  break;

 case 129:
  VAR_5->mac.ops.led_off(VAR_5, VAR_5->mac.led_link_act);
  break;

 case 130:

  FUNC_1(&VAR_4->hw, VAR_1, VAR_4->led_reg);
  break;
 }

 return 0;
}
