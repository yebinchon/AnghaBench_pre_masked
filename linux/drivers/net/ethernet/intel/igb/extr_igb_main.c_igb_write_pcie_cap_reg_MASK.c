
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct igb_adapter {int pdev; } ;
struct e1000_hw {struct igb_adapter* back; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

s32 FUNC_1(struct e1000_hw *VAR_1, u32 VAR_2, u16 *VAR_3)
{
 struct igb_adapter *VAR_4 = VAR_1->back;

 if (FUNC_0(VAR_4->pdev, VAR_2, *VAR_3))
  return -VAR_0;

 return 0;
}
