
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int const rss_queues; int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
void FUNC_0(struct igb_adapter *VAR_1,
         const u32 VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_1->hw;


 switch (VAR_3->mac.type) {
 case 134:
 case 130:

  break;
 case 133:
 case 132:
 case 129:
 case 128:
 case 131:
 default:



  if (VAR_1->rss_queues > (VAR_2 / 2))
   VAR_1->flags |= VAR_0;
  else
   VAR_1->flags &= ~VAR_0;
  break;
 }
}
