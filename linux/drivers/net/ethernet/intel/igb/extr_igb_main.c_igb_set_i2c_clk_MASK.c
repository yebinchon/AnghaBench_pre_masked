
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_3, int VAR_4)
{
 struct igb_adapter *VAR_5 = (struct igb_adapter *)VAR_3;
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 s32 VAR_7 = FUNC_0(VAR_0);

 if (VAR_4) {
  VAR_7 |= VAR_2;
  VAR_7 &= ~VAR_1;
 } else {
  VAR_7 &= ~VAR_2;
  VAR_7 &= ~VAR_1;
 }
 FUNC_1(VAR_0, VAR_7);
 FUNC_2();
}
