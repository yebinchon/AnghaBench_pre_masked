
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_1__* mac_table; struct e1000_hw hw; } ;
struct TYPE_3__ {int state; scalar_t__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct igb_adapter *VAR_2, u8 VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_2->hw;

 int VAR_5 = VAR_4->mac.rar_entry_count -
     VAR_2->vfs_allocated_count;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  if (VAR_2->mac_table[VAR_6].state & VAR_0)
   continue;


  if ((VAR_2->mac_table[VAR_6].state & VAR_1) &&
      (VAR_2->mac_table[VAR_6].queue != VAR_3))
   continue;

  VAR_7++;
 }

 return VAR_7;
}
