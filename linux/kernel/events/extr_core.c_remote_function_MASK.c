
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct remote_function_call {int info; int (* func ) (int ) ;int ret; struct task_struct* p; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct remote_function_call *VAR_3 = VAR_2;
 struct task_struct *VAR_4 = VAR_3->p;

 if (VAR_4) {

  if (FUNC_2(VAR_4) != FUNC_0())
   return;






  VAR_3->ret = -VAR_0;
  if (VAR_4 != VAR_1)
   return;
 }

 VAR_3->ret = VAR_3->func(VAR_3->info);
}
