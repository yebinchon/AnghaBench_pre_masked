
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mq_attr {int dummy; } ;
struct TYPE_2__ {struct mq_attr mqstat; int mqdes; } ;
struct audit_context {int type; TYPE_1__ mq_getsetattr; } ;
typedef int mqd_t ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;

void FUNC_1(mqd_t VAR_1, struct mq_attr *VAR_2)
{
 struct audit_context *VAR_3 = FUNC_0();
 VAR_3->mq_getsetattr.mqdes = VAR_1;
 VAR_3->mq_getsetattr.mqstat = *VAR_2;
 VAR_3->type = VAR_0;
}
