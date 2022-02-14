
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ixgbevf_adapter *VAR_1,
          u32 VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;

 FUNC_0(VAR_3, VAR_0, VAR_2);
}
