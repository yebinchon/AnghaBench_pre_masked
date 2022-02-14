
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct TYPE_2__ {size_t msg_len; unsigned int msg_prio; int mqdes; struct timespec64 abs_timeout; } ;
struct audit_context {int type; TYPE_1__ mq_sendrecv; } ;
typedef int mqd_t ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (struct timespec64*,struct timespec64 const*,int) ;
 int FUNC_2 (struct timespec64*,int ,int) ;

void FUNC_3(mqd_t VAR_1, size_t VAR_2, unsigned int VAR_3,
   const struct timespec64 *VAR_4)
{
 struct audit_context *VAR_5 = FUNC_0();
 struct timespec64 *VAR_6 = &VAR_5->mq_sendrecv.abs_timeout;

 if (VAR_4)
  FUNC_1(VAR_6, VAR_4, sizeof(*VAR_6));
 else
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 VAR_5->mq_sendrecv.mqdes = VAR_1;
 VAR_5->mq_sendrecv.msg_len = VAR_2;
 VAR_5->mq_sendrecv.msg_prio = VAR_3;

 VAR_5->type = VAR_0;
}
