
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigevent {scalar_t__ sigev_signo; } ;
struct TYPE_2__ {int mqdes; scalar_t__ sigev_signo; } ;
struct audit_context {int type; TYPE_1__ mq_notify; } ;
typedef int mqd_t ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;

void FUNC_1(mqd_t VAR_1, const struct sigevent *VAR_2)
{
 struct audit_context *VAR_3 = FUNC_0();

 if (VAR_2)
  VAR_3->mq_notify.sigev_signo = VAR_2->sigev_signo;
 else
  VAR_3->mq_notify.sigev_signo = 0;

 VAR_3->mq_notify.mqdes = VAR_1;
 VAR_3->type = VAR_0;
}
