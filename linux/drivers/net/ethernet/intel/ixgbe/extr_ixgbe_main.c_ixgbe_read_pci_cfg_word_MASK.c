
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int hw_addr; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;

u16 FUNC_3(struct ixgbe_hw *VAR_1, u32 VAR_2)
{
 struct ixgbe_adapter *VAR_3 = VAR_1->back;
 u16 VAR_4;

 if (FUNC_1(VAR_1->hw_addr))
  return VAR_0;
 FUNC_2(VAR_3->pdev, VAR_2, &VAR_4);
 if (VAR_4 == VAR_0 &&
     FUNC_0(VAR_1, VAR_3->pdev))
  return VAR_0;
 return VAR_4;
}
