
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct waitid_info {int pid; int status; int uid; int cause; } ;
struct wait_opts {int wo_flags; int wo_stat; struct waitid_info* wo_info; scalar_t__ wo_rusage; } ;
struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
typedef int pid_t ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ,scalar_t__) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int VAR_6 ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct wait_opts *VAR_7, struct task_struct *VAR_8)
{
 struct waitid_info *VAR_9;
 pid_t VAR_10;
 uid_t VAR_11;

 if (!FUNC_11(VAR_7->wo_flags & VAR_4))
  return 0;

 if (!(VAR_8->signal->flags & VAR_3))
  return 0;

 FUNC_7(&VAR_8->sighand->siglock);

 if (!(VAR_8->signal->flags & VAR_3)) {
  FUNC_8(&VAR_8->sighand->siglock);
  return 0;
 }
 if (!FUNC_11(VAR_7->wo_flags & VAR_5))
  VAR_8->signal->flags &= ~VAR_3;
 VAR_11 = FUNC_1(FUNC_0(), FUNC_10(VAR_8));
 FUNC_8(&VAR_8->sighand->siglock);

 VAR_10 = FUNC_9(VAR_8);
 FUNC_2(VAR_8);
 FUNC_5(&VAR_6);
 FUNC_6();
 if (VAR_7->wo_rusage)
  FUNC_3(VAR_8, VAR_1, VAR_7->wo_rusage);
 FUNC_4(VAR_8);

 VAR_9 = VAR_7->wo_info;
 if (!VAR_9) {
  VAR_7->wo_stat = 0xffff;
 } else {
  VAR_9->cause = VAR_0;
  VAR_9->pid = VAR_10;
  VAR_9->uid = VAR_11;
  VAR_9->status = VAR_2;
 }
 return VAR_10;
}
