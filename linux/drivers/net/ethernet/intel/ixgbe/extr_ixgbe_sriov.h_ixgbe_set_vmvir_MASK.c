
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct ixgbe_adapter *VAR_2,
       u16 VAR_3, u16 VAR_4, u32 VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_2->hw;
 u32 VAR_7 = VAR_3 | (VAR_4 << VAR_1) | VAR_0;

 FUNC_1(VAR_6, FUNC_0(VAR_5), VAR_7);
}
