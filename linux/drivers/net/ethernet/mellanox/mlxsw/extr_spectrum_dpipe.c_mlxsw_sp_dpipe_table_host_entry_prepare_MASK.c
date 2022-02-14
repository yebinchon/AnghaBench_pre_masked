
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct in6_addr {int dummy; } ;
struct devlink_dpipe_value {int value_size; void* value; struct devlink_dpipe_action* action; struct devlink_dpipe_match* match; } ;
struct devlink_dpipe_match {int dummy; } ;
struct devlink_dpipe_entry {int action_values_count; struct devlink_dpipe_value* action_values; int match_values_count; struct devlink_dpipe_value* match_values; } ;
struct devlink_dpipe_action {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(struct devlink_dpipe_entry *VAR_6,
     struct devlink_dpipe_value *VAR_7,
     struct devlink_dpipe_match *VAR_8,
     struct devlink_dpipe_value *VAR_9,
     struct devlink_dpipe_action *VAR_10,
     int VAR_11)
{
 struct devlink_dpipe_value *VAR_12;
 struct devlink_dpipe_match *VAR_13;

 VAR_6->match_values = VAR_7;
 VAR_6->match_values_count = VAR_3;

 VAR_6->action_values = VAR_9;
 VAR_6->action_values_count = 1;

 VAR_13 = &VAR_8[VAR_5];
 VAR_12 = &VAR_7[VAR_5];

 VAR_12->match = VAR_13;
 VAR_12->value_size = sizeof(u32);
 VAR_12->value = FUNC_1(VAR_12->value_size, VAR_2);
 if (!VAR_12->value)
  return -VAR_1;

 VAR_13 = &VAR_8[VAR_4];
 VAR_12 = &VAR_7[VAR_4];

 VAR_12->match = VAR_13;
 switch (VAR_11) {
 case 129:
  VAR_12->value_size = sizeof(u32);
  break;
 case 128:
  VAR_12->value_size = sizeof(struct in6_addr);
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_12->value = FUNC_1(VAR_12->value_size, VAR_2);
 if (!VAR_12->value)
  return -VAR_1;

 VAR_9->action = VAR_10;
 VAR_9->value_size = sizeof(u64);
 VAR_9->value = FUNC_1(VAR_9->value_size, VAR_2);
 if (!VAR_9->value)
  return -VAR_1;

 return 0;
}
