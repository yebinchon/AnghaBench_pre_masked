
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int task_enable; int reset_task; int slow_event_task; int task_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rhine_private *VAR_0)
{
 FUNC_1(&VAR_0->task_lock);
 VAR_0->task_enable = 0;
 FUNC_2(&VAR_0->task_lock);

 FUNC_0(&VAR_0->slow_event_task);
 FUNC_0(&VAR_0->reset_task);
}
