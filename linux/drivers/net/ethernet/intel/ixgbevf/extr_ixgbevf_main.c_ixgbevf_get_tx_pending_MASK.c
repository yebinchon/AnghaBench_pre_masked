
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbevf_ring {scalar_t__ count; int reg_idx; int netdev; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ixgbevf_adapter* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct ixgbevf_ring *VAR_0)
{
 struct ixgbevf_adapter *VAR_1 = FUNC_3(VAR_0->netdev);
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;

 u32 VAR_3 = FUNC_0(VAR_2, FUNC_1(VAR_0->reg_idx));
 u32 VAR_4 = FUNC_0(VAR_2, FUNC_2(VAR_0->reg_idx));

 if (VAR_3 != VAR_4)
  return (VAR_3 < VAR_4) ?
   VAR_4 - VAR_3 : (VAR_4 + VAR_0->count - VAR_3);

 return 0;
}
