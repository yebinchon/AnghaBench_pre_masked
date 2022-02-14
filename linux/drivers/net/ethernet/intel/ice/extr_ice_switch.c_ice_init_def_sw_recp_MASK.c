
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ice_sw_recipe {size_t root_rid; int filt_rule_lock; int filt_replay_rules; int filt_rules; } ;
struct ice_hw {TYPE_1__* switch_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {struct ice_sw_recipe* recp_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 struct ice_sw_recipe* FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (int *) ;

enum ice_status FUNC_4(struct ice_hw *VAR_4)
{
 struct ice_sw_recipe *VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_1(FUNC_2(VAR_4), VAR_2,
        sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5[VAR_6].root_rid = VAR_6;
  FUNC_0(&VAR_5[VAR_6].filt_rules);
  FUNC_0(&VAR_5[VAR_6].filt_replay_rules);
  FUNC_3(&VAR_5[VAR_6].filt_rule_lock);
 }

 VAR_4->switch_info->recp_list = VAR_5;

 return 0;
}
