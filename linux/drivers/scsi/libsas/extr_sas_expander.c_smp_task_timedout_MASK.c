
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sas_task_slow {struct sas_task* task; } ;
struct sas_task {int task_state_flags; int task_state_lock; TYPE_1__* slow_task; } ;
struct TYPE_2__ {int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sas_task_slow* FUNC_1 (int ,struct timer_list*,int ) ;
 struct sas_task_slow* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct sas_task_slow *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct sas_task *VAR_6 = VAR_5->task;
 unsigned long VAR_7;

 FUNC_2(&VAR_6->task_state_lock, VAR_7);
 if (!(VAR_6->task_state_flags & VAR_1)) {
  VAR_6->task_state_flags |= VAR_0;
  FUNC_0(&VAR_6->slow_task->completion);
 }
 FUNC_3(&VAR_6->task_state_lock, VAR_7);
}
