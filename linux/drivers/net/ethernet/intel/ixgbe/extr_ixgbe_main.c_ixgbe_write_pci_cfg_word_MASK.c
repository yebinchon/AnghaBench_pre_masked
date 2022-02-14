
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int hw_addr; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int pdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct ixgbe_hw *VAR_0, u32 VAR_1, u16 VAR_2)
{
 struct ixgbe_adapter *VAR_3 = VAR_0->back;

 if (FUNC_0(VAR_0->hw_addr))
  return;
 FUNC_1(VAR_3->pdev, VAR_1, VAR_2);
}
