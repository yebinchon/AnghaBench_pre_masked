
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* update_mc_addr_list ) (struct ixgbe_hw*,struct net_device*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ixgbe_hw*,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_2(VAR_1);
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;

 if (!FUNC_3(VAR_1))
  return 0;

 if (VAR_3->mac.ops.update_mc_addr_list)
  VAR_3->mac.ops.update_mc_addr_list(VAR_3, VAR_1);
 else
  return -VAR_0;





 return FUNC_1(VAR_1);
}
