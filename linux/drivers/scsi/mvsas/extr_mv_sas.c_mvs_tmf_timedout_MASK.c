
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sas_task_slow {struct sas_task* task; } ;
struct sas_task {TYPE_1__* slow_task; int task_state_flags; } ;
struct TYPE_2__ {int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sas_task_slow* FUNC_1 (int ,struct timer_list*,int ) ;
 struct sas_task_slow* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 struct sas_task_slow *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct sas_task *VAR_5 = VAR_4->task;

 VAR_5->task_state_flags |= VAR_0;
 FUNC_0(&VAR_5->slow_task->completion);
}
