
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__* mac_table; struct e1000_hw hw; } ;
struct TYPE_4__ {scalar_t__ queue; int addr; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct igb_adapter*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->mac.rar_entry_count; VAR_4++) {
  VAR_2->mac_table[VAR_4].state &= ~VAR_1;
  FUNC_1(VAR_2->mac_table[VAR_4].addr, 0, VAR_0);
  VAR_2->mac_table[VAR_4].queue = 0;
  FUNC_0(VAR_2, VAR_4);
 }
}
