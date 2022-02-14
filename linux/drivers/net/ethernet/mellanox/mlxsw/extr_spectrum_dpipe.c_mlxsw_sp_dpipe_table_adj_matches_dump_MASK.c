
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_match {int field_id; int * header; void* type; int member_0; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct devlink_dpipe_match*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(void *VAR_5,
       struct sk_buff *VAR_6)
{
 struct devlink_dpipe_match VAR_7 = {0};
 int VAR_8;

 VAR_7.type = VAR_0;
 VAR_7.header = &VAR_4;
 VAR_7.field_id = VAR_2;

 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7.type = VAR_0;
 VAR_7.header = &VAR_4;
 VAR_7.field_id = VAR_3;

 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7.type = VAR_0;
 VAR_7.header = &VAR_4;
 VAR_7.field_id = VAR_1;

 return FUNC_0(VAR_6, &VAR_7);
}
