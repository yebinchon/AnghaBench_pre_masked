
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int signal; int usage; int exit_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*,int) ;

void FUNC_10(struct task_struct *VAR_1)
{
 FUNC_0(!VAR_1->exit_state);
 FUNC_0(FUNC_7(&VAR_1->usage));
 FUNC_0(VAR_1 == VAR_0);

 FUNC_1(VAR_1);
 FUNC_9(VAR_1, 1);
 FUNC_8(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1->signal);

 if (!FUNC_5(VAR_1))
  FUNC_4(VAR_1);
}
