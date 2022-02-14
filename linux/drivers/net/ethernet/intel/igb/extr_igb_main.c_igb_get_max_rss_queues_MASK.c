
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
unsigned int FUNC_0(struct igb_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 unsigned int VAR_5;


 switch (VAR_4->mac.type) {
 case 130:
  VAR_5 = VAR_2;
  break;
 case 134:
 case 131:
  VAR_5 = VAR_1;
  break;
 case 129:

  if (!!VAR_3->vfs_allocated_count) {
   VAR_5 = 1;
   break;
  }

 case 133:
  if (!!VAR_3->vfs_allocated_count) {
   VAR_5 = 2;
   break;
  }

 case 132:
 case 128:
 default:
  VAR_5 = VAR_0;
  break;
 }

 return VAR_5;
}
