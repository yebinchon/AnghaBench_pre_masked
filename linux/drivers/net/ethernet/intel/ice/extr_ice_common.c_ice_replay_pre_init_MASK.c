
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ice_switch_info {TYPE_1__* recp_list; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {int filt_replay_rules; int filt_rules; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static enum ice_status FUNC_2(struct ice_hw *VAR_1)
{
 struct ice_switch_info *VAR_2 = VAR_1->switch_info;
 u8 VAR_3;


 FUNC_0(VAR_1);




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(&VAR_2->recp_list[VAR_3].filt_rules,
      &VAR_2->recp_list[VAR_3].filt_replay_rules);

 return 0;
}
