
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {unsigned int flags; } ;
struct TYPE_3__ {int (* update_mc_addr_list ) (struct ixgbe_hw*,struct net_device*) ;int (* update_xcast_mode ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ixgbe_hw*,int) ;
 int FUNC_5 (struct ixgbe_hw*,struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct ixgbevf_adapter *VAR_9 = FUNC_1(VAR_8);
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 unsigned int VAR_11 = VAR_8->flags;
 int VAR_12;


 if (VAR_11 & VAR_3)
  VAR_12 = VAR_7;
 else if (VAR_11 & VAR_0)
  VAR_12 = VAR_4;
 else if (VAR_11 & (VAR_1 | VAR_2))
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_6;

 FUNC_2(&VAR_9->mbx_lock);

 VAR_10->mac.ops.update_xcast_mode(VAR_10, VAR_12);


 VAR_10->mac.ops.update_mc_addr_list(VAR_10, VAR_8);

 FUNC_0(VAR_8);

 FUNC_3(&VAR_9->mbx_lock);
}
