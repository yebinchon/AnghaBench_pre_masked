
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int eims_enable_mask; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ixgbevf_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;

 FUNC_0(VAR_4, VAR_1, VAR_3->eims_enable_mask);
 FUNC_0(VAR_4, VAR_0, VAR_3->eims_enable_mask);
 FUNC_0(VAR_4, VAR_2, VAR_3->eims_enable_mask);
}
