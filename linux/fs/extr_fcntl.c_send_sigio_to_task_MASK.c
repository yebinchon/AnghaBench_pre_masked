
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct fown_struct {int signum; } ;
struct TYPE_5__ {int si_signo; int si_code; long si_band; int si_fd; int si_errno; } ;
typedef TYPE_1__ kernel_siginfo_t ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*,struct task_struct*,int) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct task_struct*,struct fown_struct*,int) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_7,
          struct fown_struct *VAR_8,
          int VAR_9, int VAR_10, enum pid_type VAR_11)
{




 int VAR_12 = FUNC_1(VAR_8->signum);

 if (!FUNC_6(VAR_7, VAR_8, VAR_12))
  return;

 switch (VAR_12) {
  kernel_siginfo_t VAR_13;
  default:






   FUNC_2(&VAR_13);
   VAR_13.si_signo = VAR_12;
   VAR_13.si_errno = 0;
          VAR_13.si_code = VAR_10;
   if ((VAR_12 != VAR_4) && FUNC_5(VAR_12))
    VAR_13.si_code = VAR_5;




   FUNC_0((VAR_10 < VAR_1) || ((VAR_10 - VAR_1) >= VAR_0));
   if (VAR_10 - VAR_1 >= VAR_0)
    VAR_13.si_band = ~0L;
   else
    VAR_13.si_band = FUNC_4(VAR_6[VAR_10 - VAR_1]);
   VAR_13.si_fd = VAR_9;
   if (!FUNC_3(VAR_12, &VAR_13, VAR_7, VAR_11))
    break;

  case 0:
   FUNC_3(VAR_3, VAR_2, VAR_7, VAR_11);
 }
}
