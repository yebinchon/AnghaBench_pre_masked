
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_match {int field_id; int * header; int type; } ;
struct devlink_dpipe_action {int field_id; int * header; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct devlink_dpipe_match *VAR_5,
       struct devlink_dpipe_action *VAR_6)
{
 VAR_6->type = VAR_0;
 VAR_6->header = &VAR_4;
 VAR_6->field_id = VAR_3;

 VAR_5->type = VAR_1;
 VAR_5->header = &VAR_4;
 VAR_5->field_id = VAR_2;
}
