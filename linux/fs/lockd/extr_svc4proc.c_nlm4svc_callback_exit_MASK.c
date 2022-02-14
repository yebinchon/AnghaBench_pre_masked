
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; int tk_pid; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 FUNC_0("lockd: %5u callback returned %d\n", VAR_0->tk_pid,
   -VAR_0->tk_status);
}
