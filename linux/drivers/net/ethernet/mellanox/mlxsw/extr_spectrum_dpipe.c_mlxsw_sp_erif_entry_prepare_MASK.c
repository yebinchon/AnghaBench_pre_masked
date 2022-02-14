
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct devlink_dpipe_value {int value_size; void* value; struct devlink_dpipe_action* action; struct devlink_dpipe_match* match; } ;
struct devlink_dpipe_match {int dummy; } ;
struct devlink_dpipe_entry {int match_values_count; int action_values_count; struct devlink_dpipe_value* action_values; struct devlink_dpipe_value* match_values; } ;
struct devlink_dpipe_action {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct devlink_dpipe_entry *VAR_2,
           struct devlink_dpipe_value *VAR_3,
           struct devlink_dpipe_match *VAR_4,
           struct devlink_dpipe_value *VAR_5,
           struct devlink_dpipe_action *VAR_6)
{
 VAR_2->match_values = VAR_3;
 VAR_2->match_values_count = 1;

 VAR_2->action_values = VAR_5;
 VAR_2->action_values_count = 1;

 VAR_3->match = VAR_4;
 VAR_3->value_size = sizeof(u32);
 VAR_3->value = FUNC_1(VAR_3->value_size, VAR_1);
 if (!VAR_3->value)
  return -VAR_0;

 VAR_5->action = VAR_6;
 VAR_5->value_size = sizeof(u32);
 VAR_5->value = FUNC_1(VAR_5->value_size, VAR_1);
 if (!VAR_5->value)
  goto err_action_alloc;
 return 0;

err_action_alloc:
 FUNC_0(VAR_3->value);
 return -VAR_0;
}
