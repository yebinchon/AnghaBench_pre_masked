
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int *) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int ,int *,int ,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6[4] = {0, 0, 0, 0};
 u16 VAR_7;


 FUNC_0(VAR_5, VAR_2, 0);
 FUNC_0(VAR_5, VAR_3, 0);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_3(VAR_5, VAR_7, VAR_6, 0);
  FUNC_2(VAR_5, VAR_7, 0, VAR_6, 0, 0, 0);
  FUNC_1(VAR_5, VAR_7, (__be32 *)VAR_6);
 }
 for (; VAR_7 < VAR_1; VAR_7++) {
  FUNC_3(VAR_5, VAR_7, VAR_6, 0);
  FUNC_2(VAR_5, VAR_7, 0, VAR_6, 0, 0, 0);
 }
}
