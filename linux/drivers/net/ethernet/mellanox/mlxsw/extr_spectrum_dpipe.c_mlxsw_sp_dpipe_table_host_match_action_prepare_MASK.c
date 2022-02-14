
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_match {int field_id; int * header; void* type; } ;
struct devlink_dpipe_action {int field_id; int * header; int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_1(struct devlink_dpipe_match *VAR_12,
            struct devlink_dpipe_action *VAR_13,
            int VAR_14)
{
 struct devlink_dpipe_match *VAR_15;

 VAR_15 = &VAR_12[VAR_7];
 VAR_15->type = VAR_4;
 VAR_15->header = &VAR_11;
 VAR_15->field_id = VAR_5;

 VAR_15 = &VAR_12[VAR_6];
 VAR_15->type = VAR_4;
 switch (VAR_14) {
 case 129:
  VAR_15->header = &VAR_9;
  VAR_15->field_id = VAR_2;
  break;
 case 128:
  VAR_15->header = &VAR_10;
  VAR_15->field_id = VAR_3;
  break;
 default:
  FUNC_0(1);
  return;
 }

 VAR_13->type = VAR_0;
 VAR_13->header = &VAR_8;
 VAR_13->field_id = VAR_1;
}
