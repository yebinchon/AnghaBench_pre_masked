
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_match {int field_id; int * header; void* type; int member_0; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,struct devlink_dpipe_match*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_8, int VAR_9)
{
 struct devlink_dpipe_match VAR_10 = {0};
 int VAR_11;

 VAR_10.type = VAR_2;
 VAR_10.header = &VAR_7;
 VAR_10.field_id = VAR_4;

 VAR_11 = FUNC_1(VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9) {
 case 129:
  VAR_10.type = VAR_2;
  VAR_10.header = &VAR_5;
  VAR_10.field_id = VAR_0;
  break;
 case 128:
  VAR_10.type = VAR_2;
  VAR_10.header = &VAR_6;
  VAR_10.field_id = VAR_1;
  break;
 default:
  FUNC_0(1);
  return -VAR_3;
 }

 return FUNC_1(VAR_8, &VAR_10);
}
