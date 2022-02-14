
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_vfta ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int active_vlans; int mbx_lock; struct ixgbe_hw hw; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ixgbevf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
       __be16 VAR_5, u16 VAR_6)
{
 struct ixgbevf_adapter *VAR_7 = FUNC_0(VAR_4);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 int VAR_9;

 FUNC_2(&VAR_7->mbx_lock);


 VAR_9 = VAR_8->mac.ops.set_vfta(VAR_8, VAR_6, 0, 1);

 FUNC_3(&VAR_7->mbx_lock);


 if (VAR_9 == VAR_3)
  return -VAR_1;

 if (VAR_9 == VAR_2)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_7->active_vlans);

 return VAR_9;
}
