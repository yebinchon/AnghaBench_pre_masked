
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int wvbr; struct e1000_hw hw; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3 = 0;

 switch (VAR_2->mac.type) {
 case 129:
 case 128:
  VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3)
   return;
  break;
 default:
  break;
 }

 VAR_1->wvbr |= VAR_3;
}
