
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct waitid_info {int cause; int status; int pid; int uid; } ;
struct wait_opts {int wo_flags; int wo_stat; struct waitid_info* wo_info; scalar_t__ wo_rusage; } ;
struct task_struct {TYPE_1__* sighand; } ;
typedef int pid_t ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct task_struct*) ;
 int* FUNC_11 (struct task_struct*,int) ;
 int FUNC_12 (struct task_struct*) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct wait_opts *VAR_6,
    int VAR_7, struct task_struct *VAR_8)
{
 struct waitid_info *VAR_9;
 int VAR_10, *VAR_11, VAR_12;
 uid_t VAR_13 = 0;
 pid_t VAR_14;




 if (!VAR_7 && !(VAR_6->wo_flags & VAR_4))
  return 0;

 if (!FUNC_11(VAR_8, VAR_7))
  return 0;

 VAR_10 = 0;
 FUNC_8(&VAR_8->sighand->siglock);

 VAR_11 = FUNC_11(VAR_8, VAR_7);
 if (FUNC_13(!VAR_11))
  goto unlock_sig;

 VAR_10 = *VAR_11;
 if (!VAR_10)
  goto unlock_sig;

 if (!FUNC_13(VAR_6->wo_flags & VAR_3))
  *VAR_11 = 0;

 VAR_13 = FUNC_1(FUNC_0(), FUNC_12(VAR_8));
unlock_sig:
 FUNC_9(&VAR_8->sighand->siglock);
 if (!VAR_10)
  return 0;
 FUNC_2(VAR_8);
 VAR_14 = FUNC_10(VAR_8);
 VAR_12 = VAR_7 ? VAR_1 : VAR_0;
 FUNC_6(&VAR_5);
 FUNC_7();
 if (VAR_6->wo_rusage)
  FUNC_3(VAR_8, VAR_2, VAR_6->wo_rusage);
 FUNC_5(VAR_8);

 if (FUNC_4(!(VAR_6->wo_flags & VAR_3)))
  VAR_6->wo_stat = (VAR_10 << 8) | 0x7f;

 VAR_9 = VAR_6->wo_info;
 if (VAR_9) {
  VAR_9->cause = VAR_12;
  VAR_9->status = VAR_10;
  VAR_9->pid = VAR_14;
  VAR_9->uid = VAR_13;
 }
 return VAR_14;
}
