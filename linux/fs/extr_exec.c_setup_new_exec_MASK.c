
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rlim_cur; } ;
struct linux_binprm {int secureexec; int cap_elevated; int interp_flags; int filename; TYPE_5__ rlim_stack; } ;
struct TYPE_8__ {int self_exec_id; TYPE_1__* mm; scalar_t__ sas_ss_size; scalar_t__ sas_ss_sp; scalar_t__ pdeath_signal; } ;
struct TYPE_7__ {int task_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int ,int ) ;

void FUNC_13(struct linux_binprm * VAR_6)
{





 VAR_6->secureexec |= VAR_6->cap_elevated;

 if (VAR_6->secureexec) {

  VAR_4->pdeath_signal = 0;
  if (VAR_6->rlim_stack.rlim_cur > VAR_3)
   VAR_6->rlim_stack.rlim_cur = VAR_3;
 }

 FUNC_1(VAR_4->mm, &VAR_6->rlim_stack);

 VAR_4->sas_ss_sp = VAR_4->sas_ss_size = 0;






 if (VAR_6->interp_flags & VAR_0 ||
     !(FUNC_12(FUNC_4(), FUNC_6()) &&
       FUNC_8(FUNC_3(), FUNC_5())))
  FUNC_11(VAR_4->mm, VAR_5);
 else
  FUNC_11(VAR_4->mm, VAR_1);

 FUNC_2();
 FUNC_10();
 FUNC_0(VAR_4, FUNC_9(VAR_6->filename), 1);





 VAR_4->mm->task_size = VAR_2;



 VAR_4->self_exec_id++;
 FUNC_7(VAR_4, 0);
}
