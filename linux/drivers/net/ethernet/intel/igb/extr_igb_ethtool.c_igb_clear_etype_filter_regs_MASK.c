
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int* etype_bitmap; struct e1000_hw hw; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct igb_adapter *VAR_3,
     u16 VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 u32 VAR_6 = FUNC_1(FUNC_0(VAR_4));

 VAR_6 &= ~VAR_1;
 VAR_6 &= ~VAR_2;
 VAR_6 &= ~VAR_0;

 FUNC_2(FUNC_0(VAR_4), VAR_6);

 VAR_3->etype_bitmap[VAR_4] = 0;
}
