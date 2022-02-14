
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_vfta ) (struct ixgbe_hw*,int ,int ,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags2; int active_vlans; struct ixgbe_hw hw; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
      __be16 VAR_2, u16 VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_2(VAR_1);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;


 if (VAR_3 && !(VAR_4->flags2 & VAR_0))
  VAR_5->mac.ops.set_vfta(VAR_5, VAR_3, FUNC_0(0), 0, 1);

 FUNC_1(VAR_3, VAR_4->active_vlans);

 return 0;
}
