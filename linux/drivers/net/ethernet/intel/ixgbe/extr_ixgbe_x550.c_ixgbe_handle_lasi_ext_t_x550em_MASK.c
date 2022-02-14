
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ (* setup_internal_link ) (struct ixgbe_hw*) ;} ;
struct ixgbe_phy_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_0)
{
 struct ixgbe_phy_info *VAR_1 = &VAR_0->phy;
 bool VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2 && VAR_1->ops.setup_internal_link)
  return VAR_1->ops.setup_internal_link(VAR_0);

 return 0;
}
