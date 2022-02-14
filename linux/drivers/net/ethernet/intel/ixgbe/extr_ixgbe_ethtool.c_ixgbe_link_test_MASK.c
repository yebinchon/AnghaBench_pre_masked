
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; int hw_addr; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,int *,int*,int) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_0, u64 *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_0->hw;
 bool VAR_3;
 u32 VAR_4 = 0;

 if (FUNC_0(VAR_2->hw_addr)) {
  *VAR_1 = 1;
  return 1;
 }
 *VAR_1 = 0;

 VAR_2->mac.ops.check_link(VAR_2, &VAR_4, &VAR_3, 1);
 if (VAR_3)
  return *VAR_1;
 else
  *VAR_1 = 1;
 return *VAR_1;
}
