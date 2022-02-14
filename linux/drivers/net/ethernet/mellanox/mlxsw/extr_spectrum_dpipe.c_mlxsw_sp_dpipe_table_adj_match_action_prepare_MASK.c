
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_match {int field_id; int * header; void* type; } ;
struct devlink_dpipe_action {int field_id; int * header; void* type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_0(struct devlink_dpipe_match *VAR_14,
           struct devlink_dpipe_action *VAR_15)
{
 struct devlink_dpipe_action *VAR_16;
 struct devlink_dpipe_match *VAR_17;

 VAR_17 = &VAR_14[VAR_10];
 VAR_17->type = VAR_2;
 VAR_17->header = &VAR_13;
 VAR_17->field_id = VAR_4;

 VAR_17 = &VAR_14[VAR_11];
 VAR_17->type = VAR_2;
 VAR_17->header = &VAR_13;
 VAR_17->field_id = VAR_5;

 VAR_17 = &VAR_14[VAR_9];
 VAR_17->type = VAR_2;
 VAR_17->header = &VAR_13;
 VAR_17->field_id = VAR_3;

 VAR_16 = &VAR_15[VAR_7];
 VAR_16->type = VAR_0;
 VAR_16->header = &VAR_12;
 VAR_16->field_id = VAR_1;

 VAR_16 = &VAR_15[VAR_8];
 VAR_16->type = VAR_0;
 VAR_16->header = &VAR_13;
 VAR_16->field_id = VAR_6;
}
