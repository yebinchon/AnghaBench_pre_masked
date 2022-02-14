
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * set_phy_power; } ;
struct ixgbe_phy_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_0)
{
 struct ixgbe_phy_info *VAR_1 = &VAR_0->phy;


 FUNC_0(VAR_0);

 VAR_1->ops.set_phy_power = ((void*)0);

 return 0;
}
