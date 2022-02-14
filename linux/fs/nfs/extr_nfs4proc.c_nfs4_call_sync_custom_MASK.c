
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int dummy; } ;
struct rpc_task {int tk_status; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 struct rpc_task* FUNC_3 (struct rpc_task_setup*) ;

__attribute__((used)) static int FUNC_4(struct rpc_task_setup *VAR_0)
{
 int VAR_1;
 struct rpc_task *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1 = VAR_2->tk_status;
 FUNC_2(VAR_2);
 return VAR_1;
}
