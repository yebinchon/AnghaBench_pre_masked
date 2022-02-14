
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_1->hw;

 if (VAR_2)
  FUNC_1(FUNC_0(VAR_3), (VAR_2 | VAR_0));
 else
  FUNC_1(FUNC_0(VAR_3), 0);
}
