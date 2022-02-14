
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_action {int field_id; int * header; void* type; int member_0; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct devlink_dpipe_action*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void *VAR_4,
        struct sk_buff *VAR_5)
{
 struct devlink_dpipe_action VAR_6 = {0};
 int VAR_7;

 VAR_6.type = VAR_0;
 VAR_6.header = &VAR_3;
 VAR_6.field_id = VAR_2;

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6.type = VAR_0;
 VAR_6.header = &VAR_3;
 VAR_6.field_id = VAR_1;

 return FUNC_0(VAR_5, &VAR_6);
}
