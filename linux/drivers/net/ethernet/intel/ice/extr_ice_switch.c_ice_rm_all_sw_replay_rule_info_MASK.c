
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct list_head {int dummy; } ;
struct ice_switch_info {TYPE_1__* recp_list; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
struct TYPE_2__ {struct list_head filt_replay_rules; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

void FUNC_2(struct ice_hw *VAR_1)
{
 struct ice_switch_info *VAR_2 = VAR_1->switch_info;
 u8 VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_1(&VAR_2->recp_list[VAR_3].filt_replay_rules)) {
   struct list_head *VAR_4;

   VAR_4 = &VAR_2->recp_list[VAR_3].filt_replay_rules;
   FUNC_0(VAR_1, VAR_4);
  }
 }
}
