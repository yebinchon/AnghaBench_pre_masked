
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_match {int field_id; int * header; int type; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct devlink_dpipe_match*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3,
        struct sk_buff *VAR_4)
{
 struct devlink_dpipe_match VAR_5 = {0};

 VAR_5.type = VAR_0;
 VAR_5.header = &VAR_2;
 VAR_5.field_id = VAR_1;

 return FUNC_0(VAR_4, &VAR_5);
}
