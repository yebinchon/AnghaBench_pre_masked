
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int signal; } ;
struct task_struct {int blocked; TYPE_3__* signal; TYPE_1__ pending; } ;
struct seq_file {int dummy; } ;
typedef int sigset_t ;
struct TYPE_10__ {TYPE_4__* user; } ;
struct TYPE_9__ {int sigpending; } ;
struct TYPE_7__ {int signal; } ;
struct TYPE_8__ {TYPE_2__ shared_pending; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct task_struct*) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*,int *,int *) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*,unsigned long*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct seq_file*,char*,int *) ;
 int FUNC_8 (struct seq_file*,char*,unsigned long) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (struct task_struct*,int ) ;
 int FUNC_11 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static inline void FUNC_12(struct seq_file *VAR_1, struct task_struct *VAR_2)
{
 unsigned long VAR_3;
 sigset_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned long VAR_11 = 0;

 FUNC_9(&VAR_4);
 FUNC_9(&VAR_5);
 FUNC_9(&VAR_6);
 FUNC_9(&VAR_7);
 FUNC_9(&VAR_8);

 if (FUNC_4(VAR_2, &VAR_3)) {
  VAR_4 = VAR_2->pending.signal;
  VAR_5 = VAR_2->signal->shared_pending.signal;
  VAR_6 = VAR_2->blocked;
  FUNC_2(VAR_2, &VAR_7, &VAR_8);
  VAR_9 = FUNC_3(VAR_2);
  FUNC_5();
  VAR_10 = FUNC_1(&FUNC_0(VAR_2)->user->sigpending);
  FUNC_6();
  VAR_11 = FUNC_10(VAR_2, VAR_0);
  FUNC_11(VAR_2, &VAR_3);
 }

 FUNC_8(VAR_1, "Threads:\t", VAR_9);
 FUNC_8(VAR_1, "\nSigQ:\t", VAR_10);
 FUNC_8(VAR_1, "/", VAR_11);


 FUNC_7(VAR_1, "\nSigPnd:\t", &VAR_4);
 FUNC_7(VAR_1, "ShdPnd:\t", &VAR_5);
 FUNC_7(VAR_1, "SigBlk:\t", &VAR_6);
 FUNC_7(VAR_1, "SigIgn:\t", &VAR_7);
 FUNC_7(VAR_1, "SigCgt:\t", &VAR_8);
}
