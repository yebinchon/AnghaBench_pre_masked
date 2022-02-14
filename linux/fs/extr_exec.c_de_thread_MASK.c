
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ exit_state; int exit_signal; struct sighand_struct* sighand; int parent; int ptrace; struct task_struct* group_leader; int sibling; int tasks; int pid; int real_start_time; int start_time; struct signal_struct* signal; } ;
struct signal_struct {int notify_count; struct task_struct* group_exit_task; } ;
struct sighand_struct {int siglock; int action; int count; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sighand_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,int ,int ) ;
 int FUNC_8 (struct signal_struct*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*) ;
 struct sighand_struct* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (struct sighand_struct*,struct sighand_struct*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (struct task_struct*) ;
 int FUNC_22 (struct task_struct*,struct task_struct*) ;
 int FUNC_23 () ;
 int VAR_11 ;
 scalar_t__ FUNC_24 (struct signal_struct*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct task_struct*) ;
 int VAR_12 ;
 scalar_t__ FUNC_30 (struct task_struct*) ;
 int FUNC_31 (struct task_struct*) ;
 int FUNC_32 (struct task_struct*,struct task_struct*,int ) ;
 scalar_t__ FUNC_33 (int ) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (struct task_struct*) ;

__attribute__((used)) static int FUNC_37(struct task_struct *VAR_13)
{
 struct signal_struct *VAR_14 = VAR_13->signal;
 struct sighand_struct *VAR_15 = VAR_13->sighand;
 spinlock_t *VAR_16 = &VAR_15->siglock;

 if (FUNC_30(VAR_13))
  goto no_thread_group;




 FUNC_26(VAR_16);
 if (FUNC_24(VAR_14)) {




  FUNC_28(VAR_16);
  return -VAR_0;
 }

 VAR_14->group_exit_task = VAR_13;
 VAR_14->notify_count = FUNC_36(VAR_13);
 if (!FUNC_31(VAR_13))
  VAR_14->notify_count--;

 while (VAR_14->notify_count) {
  FUNC_3(VAR_10);
  FUNC_28(VAR_16);
  FUNC_23();
  if (FUNC_2(VAR_13))
   goto killed;
  FUNC_26(VAR_16);
 }
 FUNC_28(VAR_16);






 if (!FUNC_31(VAR_13)) {
  struct task_struct *VAR_17 = VAR_13->group_leader;

  for (;;) {
   FUNC_5(VAR_13);
   FUNC_34(&VAR_12);




   VAR_14->notify_count = -1;
   if (FUNC_12(VAR_17->exit_state))
    break;
   FUNC_3(VAR_10);
   FUNC_35(&VAR_12);
   FUNC_6(VAR_13);
   FUNC_23();
   if (FUNC_2(VAR_13))
    goto killed;
  }
  VAR_13->start_time = VAR_17->start_time;
  VAR_13->real_start_time = VAR_17->real_start_time;

  FUNC_0(!FUNC_22(VAR_17, VAR_13));
  FUNC_0(FUNC_10(VAR_13));
  VAR_13->pid = VAR_17->pid;
  FUNC_7(VAR_13, VAR_6, FUNC_29(VAR_17));
  FUNC_32(VAR_17, VAR_13, VAR_8);
  FUNC_32(VAR_17, VAR_13, VAR_5);
  FUNC_32(VAR_17, VAR_13, VAR_7);

  FUNC_14(&VAR_17->tasks, &VAR_13->tasks);
  FUNC_13(&VAR_17->sibling, &VAR_13->sibling);

  VAR_13->group_leader = VAR_13;
  VAR_17->group_leader = VAR_13;

  VAR_13->exit_signal = VAR_9;
  VAR_17->exit_signal = -1;

  FUNC_0(VAR_17->exit_state != VAR_3);
  VAR_17->exit_state = VAR_2;






  if (FUNC_33(VAR_17->ptrace))
   FUNC_4(VAR_17, VAR_17->parent);
  FUNC_35(&VAR_12);
  FUNC_6(VAR_13);

  FUNC_21(VAR_17);
 }

 VAR_14->group_exit_task = ((void*)0);
 VAR_14->notify_count = 0;

no_thread_group:

 VAR_13->exit_signal = VAR_9;






 if (FUNC_19(&VAR_15->count) != 1) {
  struct sighand_struct *VAR_18;




  VAR_18 = FUNC_11(VAR_11, VAR_4);
  if (!VAR_18)
   return -VAR_1;

  FUNC_20(&VAR_18->count, 1);
  FUNC_15(VAR_18->action, VAR_15->action,
         sizeof(VAR_18->action));

  FUNC_34(&VAR_12);
  FUNC_25(&VAR_15->siglock);
  FUNC_16(VAR_13->sighand, VAR_18);
  FUNC_27(&VAR_15->siglock);
  FUNC_35(&VAR_12);

  FUNC_1(VAR_15);
 }

 FUNC_0(!FUNC_31(VAR_13));
 return 0;

killed:

 FUNC_17(&VAR_12);
 VAR_14->group_exit_task = ((void*)0);
 VAR_14->notify_count = 0;
 FUNC_18(&VAR_12);
 return -VAR_0;
}
