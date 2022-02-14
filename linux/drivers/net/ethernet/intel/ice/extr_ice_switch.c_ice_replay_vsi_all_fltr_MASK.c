
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct list_head {int dummy; } ;
struct ice_switch_info {TYPE_1__* recp_list; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {struct list_head filt_replay_rules; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,size_t,struct list_head*) ;

enum ice_status FUNC_1(struct ice_hw *VAR_1, u16 VAR_2)
{
 struct ice_switch_info *VAR_3 = VAR_1->switch_info;
 enum ice_status VAR_4 = 0;
 u8 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct list_head *VAR_6;

  VAR_6 = &VAR_3->recp_list[VAR_5].filt_replay_rules;
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);
  if (VAR_4)
   return VAR_4;
 }
 return VAR_4;
}
