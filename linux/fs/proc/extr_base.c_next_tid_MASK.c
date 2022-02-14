
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 struct task_struct* FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct task_struct*) ;

__attribute__((used)) static struct task_struct *FUNC_7(struct task_struct *VAR_0)
{
 struct task_struct *VAR_1 = ((void*)0);
 FUNC_4();
 if (FUNC_2(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0);
  if (FUNC_6(VAR_1))
   VAR_1 = ((void*)0);
  else
   FUNC_0(VAR_1);
 }
 FUNC_5();
 FUNC_3(VAR_0);
 return VAR_1;
}
