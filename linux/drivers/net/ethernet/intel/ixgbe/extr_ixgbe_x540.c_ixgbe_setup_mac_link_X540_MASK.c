
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup_link_speed ) (struct ixgbe_hw*,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_1(struct ixgbe_hw *VAR_0, ixgbe_link_speed VAR_1,
         bool VAR_2)
{
 return VAR_0->phy.ops.setup_link_speed(VAR_0, VAR_1,
         VAR_2);
}
