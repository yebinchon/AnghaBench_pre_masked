
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef scalar_t__ u64 ;
struct waitid_info {int status; int pid; int uid; int cause; } ;
struct wait_opts {int wo_flags; int wo_stat; struct waitid_info* wo_info; scalar_t__ wo_rusage; } ;
struct task_struct {int exit_code; int exit_state; int exit_signal; struct signal_struct* signal; int ioac; scalar_t__ nivcsw; scalar_t__ nvcsw; scalar_t__ maj_flt; scalar_t__ min_flt; } ;
struct signal_struct {unsigned long cmaxrss; int flags; int group_exit_code; int stats_lock; int ioac; int maxrss; scalar_t__ coublock; scalar_t__ oublock; scalar_t__ cinblock; scalar_t__ inblock; scalar_t__ cnivcsw; scalar_t__ nivcsw; scalar_t__ cnvcsw; scalar_t__ nvcsw; scalar_t__ cmaj_flt; scalar_t__ maj_flt; scalar_t__ cmin_flt; scalar_t__ min_flt; scalar_t__ cgtime; scalar_t__ gtime; scalar_t__ cstime; scalar_t__ cutime; } ;
typedef int pid_t ;
struct TYPE_4__ {TYPE_1__* sighand; struct signal_struct* signal; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int*,int,int) ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*,int ,scalar_t__) ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (int ,unsigned long) ;
 scalar_t__ FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct task_struct*) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (struct task_struct*) ;
 scalar_t__ FUNC_19 (struct task_struct*) ;
 int FUNC_20 (struct task_struct*) ;
 int FUNC_21 (struct task_struct*) ;
 int VAR_11 ;
 int FUNC_22 (struct task_struct*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_23 (struct task_struct*) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct wait_opts *VAR_12, struct task_struct *VAR_13)
{
 int VAR_14, VAR_15;
 pid_t VAR_16 = FUNC_20(VAR_13);
 uid_t VAR_17 = FUNC_3(FUNC_1(), FUNC_21(VAR_13));
 struct waitid_info *VAR_18;

 if (!FUNC_6(VAR_12->wo_flags & VAR_8))
  return 0;

 if (FUNC_24(VAR_12->wo_flags & VAR_9)) {
  VAR_15 = VAR_13->exit_code;
  FUNC_4(VAR_13);
  FUNC_11(&VAR_11);
  FUNC_13();
  if (VAR_12->wo_rusage)
   FUNC_5(VAR_13, VAR_6, VAR_12->wo_rusage);
  FUNC_10(VAR_13);
  goto out_info;
 }



 VAR_14 = (FUNC_8(VAR_13) && FUNC_23(VAR_13)) ?
  VAR_4 : VAR_3;
 if (FUNC_0(&VAR_13->exit_state, VAR_5, VAR_14) != VAR_5)
  return 0;



 FUNC_11(&VAR_11);
 FUNC_13();




 if (VAR_14 == VAR_3 && FUNC_23(VAR_13)) {
  struct signal_struct *VAR_19 = VAR_13->signal;
  struct signal_struct *VAR_20 = VAR_10->signal;
  unsigned long VAR_21;
  u64 VAR_22, VAR_23;
  FUNC_22(VAR_13, &VAR_22, &VAR_23);
  FUNC_14(&VAR_10->sighand->siglock);
  FUNC_26(&VAR_20->stats_lock);
  VAR_20->cutime += VAR_22 + VAR_19->cutime;
  VAR_20->cstime += VAR_23 + VAR_19->cstime;
  VAR_20->cgtime += FUNC_16(VAR_13) + VAR_19->gtime + VAR_19->cgtime;
  VAR_20->cmin_flt +=
   VAR_13->min_flt + VAR_19->min_flt + VAR_19->cmin_flt;
  VAR_20->cmaj_flt +=
   VAR_13->maj_flt + VAR_19->maj_flt + VAR_19->cmaj_flt;
  VAR_20->cnvcsw +=
   VAR_13->nvcsw + VAR_19->nvcsw + VAR_19->cnvcsw;
  VAR_20->cnivcsw +=
   VAR_13->nivcsw + VAR_19->nivcsw + VAR_19->cnivcsw;
  VAR_20->cinblock +=
   FUNC_18(VAR_13) +
   VAR_19->inblock + VAR_19->cinblock;
  VAR_20->coublock +=
   FUNC_19(VAR_13) +
   VAR_19->oublock + VAR_19->coublock;
  VAR_21 = FUNC_7(VAR_19->maxrss, VAR_19->cmaxrss);
  if (VAR_20->cmaxrss < VAR_21)
   VAR_20->cmaxrss = VAR_21;
  FUNC_17(&VAR_20->ioac, &VAR_13->ioac);
  FUNC_17(&VAR_20->ioac, &VAR_19->ioac);
  FUNC_27(&VAR_20->stats_lock);
  FUNC_15(&VAR_10->sighand->siglock);
 }

 if (VAR_12->wo_rusage)
  FUNC_5(VAR_13, VAR_6, VAR_12->wo_rusage);
 VAR_15 = (VAR_13->signal->flags & VAR_7)
  ? VAR_13->signal->group_exit_code : VAR_13->exit_code;
 VAR_12->wo_stat = VAR_15;

 if (VAR_14 == VAR_4) {
  FUNC_25(&VAR_11);

  FUNC_9(VAR_13);


  VAR_14 = VAR_5;
  if (FUNC_2(VAR_13, VAR_13->exit_signal))
   VAR_14 = VAR_3;
  VAR_13->exit_state = VAR_14;
  FUNC_28(&VAR_11);
 }
 if (VAR_14 == VAR_3)
  FUNC_12(VAR_13);

out_info:
 VAR_18 = VAR_12->wo_info;
 if (VAR_18) {
  if ((VAR_15 & 0x7f) == 0) {
   VAR_18->cause = VAR_1;
   VAR_18->status = VAR_15 >> 8;
  } else {
   VAR_18->cause = (VAR_15 & 0x80) ? VAR_0 : VAR_2;
   VAR_18->status = VAR_15 & 0x7f;
  }
  VAR_18->pid = VAR_16;
  VAR_18->uid = VAR_17;
 }

 return VAR_16;
}
