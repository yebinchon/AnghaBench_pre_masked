
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct devlink_dpipe_value {int value_size; void* value; struct devlink_dpipe_action* action; struct devlink_dpipe_match* match; } ;
struct devlink_dpipe_match {int dummy; } ;
struct devlink_dpipe_entry {int action_values_count; struct devlink_dpipe_value* action_values; int match_values_count; struct devlink_dpipe_value* match_values; } ;
struct devlink_dpipe_action {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct devlink_dpipe_entry *VAR_9,
           struct devlink_dpipe_value *VAR_10,
           struct devlink_dpipe_match *VAR_11,
           struct devlink_dpipe_value *VAR_12,
           struct devlink_dpipe_action *VAR_13)
{ struct devlink_dpipe_value *VAR_14;
 struct devlink_dpipe_value *VAR_15;
 struct devlink_dpipe_action *VAR_16;
 struct devlink_dpipe_match *VAR_17;

 VAR_9->match_values = VAR_10;
 VAR_9->match_values_count = VAR_5;

 VAR_9->action_values = VAR_12;
 VAR_9->action_values_count = VAR_2;

 VAR_17 = &VAR_11[VAR_7];
 VAR_15 = &VAR_10[VAR_7];

 VAR_15->match = VAR_17;
 VAR_15->value_size = sizeof(u32);
 VAR_15->value = FUNC_0(VAR_15->value_size, VAR_1);
 if (!VAR_15->value)
  return -VAR_0;

 VAR_17 = &VAR_11[VAR_8];
 VAR_15 = &VAR_10[VAR_8];

 VAR_15->match = VAR_17;
 VAR_15->value_size = sizeof(u32);
 VAR_15->value = FUNC_0(VAR_15->value_size, VAR_1);
 if (!VAR_15->value)
  return -VAR_0;

 VAR_17 = &VAR_11[VAR_6];
 VAR_15 = &VAR_10[VAR_6];

 VAR_15->match = VAR_17;
 VAR_15->value_size = sizeof(u32);
 VAR_15->value = FUNC_0(VAR_15->value_size, VAR_1);
 if (!VAR_15->value)
  return -VAR_0;

 VAR_16 = &VAR_13[VAR_3];
 VAR_14 = &VAR_12[VAR_3];

 VAR_14->action = VAR_16;
 VAR_14->value_size = sizeof(u64);
 VAR_14->value = FUNC_0(VAR_14->value_size, VAR_1);
 if (!VAR_14->value)
  return -VAR_0;

 VAR_16 = &VAR_13[VAR_4];
 VAR_14 = &VAR_12[VAR_4];

 VAR_14->action = VAR_16;
 VAR_14->value_size = sizeof(u32);
 VAR_14->value = FUNC_0(VAR_14->value_size, VAR_1);
 if (!VAR_14->value)
  return -VAR_0;

 return 0;
}
