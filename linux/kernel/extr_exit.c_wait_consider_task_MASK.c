
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_opts {int wo_flags; scalar_t__ notask_error; } ;
struct task_struct {int ptrace; int exit_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct wait_opts*,int,struct task_struct*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct wait_opts*,struct task_struct*) ;
 int FUNC_7 (struct wait_opts*,int,struct task_struct*) ;
 int FUNC_8 (struct wait_opts*,struct task_struct*) ;

__attribute__((used)) static int FUNC_9(struct wait_opts *VAR_5, int VAR_6,
    struct task_struct *VAR_7)
{





 int VAR_8 = FUNC_0(VAR_7->exit_state);
 int VAR_9;

 if (FUNC_5(VAR_8 == VAR_0))
  return 0;

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!VAR_9)
  return VAR_9;

 if (FUNC_5(VAR_8 == VAR_1)) {




  if (FUNC_3(!VAR_6))
   VAR_5->notask_error = 0;
  return 0;
 }

 if (FUNC_3(!VAR_6) && FUNC_5(VAR_7->ptrace)) {
  if (!FUNC_4(VAR_7))
   VAR_6 = 1;
 }


 if (VAR_8 == VAR_2) {

  if (!FUNC_1(VAR_7)) {





   if (FUNC_5(VAR_6) || FUNC_3(!VAR_7->ptrace))
    return FUNC_8(VAR_5, VAR_7);
  }
  if (FUNC_3(!VAR_6) || (VAR_5->wo_flags & (VAR_3 | VAR_4)))
   VAR_5->notask_error = 0;
 } else {




  VAR_5->notask_error = 0;
 }





 VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;






 return FUNC_6(VAR_5, VAR_7);
}
