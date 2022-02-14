
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct rpc_rqst {TYPE_1__* rq_task; } ;
struct TYPE_2__ {int tk_client; } ;


 struct user_namespace VAR_0 ;
 struct user_namespace* FUNC_0 (int ) ;

__attribute__((used)) static struct user_namespace *FUNC_1(const struct rpc_rqst *VAR_1)
{
 if (VAR_1->rq_task)
  return FUNC_0(VAR_1->rq_task->tk_client);
 return &VAR_0;
}
