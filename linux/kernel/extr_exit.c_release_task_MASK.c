
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {scalar_t__ exit_state; int exit_signal; struct task_struct* group_leader; } ;
struct TYPE_4__ {TYPE_1__* user; } ;
struct TYPE_3__ {int processes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 TYPE_2__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct task_struct *VAR_3)
{
 struct task_struct *VAR_4;
 int VAR_5;
repeat:


 FUNC_8();
 FUNC_2(&FUNC_1(VAR_3)->user->processes);
 FUNC_9();

 FUNC_5(VAR_3);
 FUNC_3(VAR_3);

 FUNC_13(&VAR_2);
 FUNC_6(VAR_3);
 FUNC_0(VAR_3);






 VAR_5 = 0;
 VAR_4 = VAR_3->group_leader;
 if (VAR_4 != VAR_3 && FUNC_11(VAR_4)
   && VAR_4->exit_state == VAR_1) {





  VAR_5 = FUNC_4(VAR_4, VAR_4->exit_signal);
  if (VAR_5)
   VAR_4->exit_state = VAR_0;
 }

 FUNC_14(&VAR_2);
 FUNC_10(VAR_3);
 FUNC_7(VAR_3);

 VAR_3 = VAR_4;
 if (FUNC_12(VAR_5))
  goto repeat;
}
