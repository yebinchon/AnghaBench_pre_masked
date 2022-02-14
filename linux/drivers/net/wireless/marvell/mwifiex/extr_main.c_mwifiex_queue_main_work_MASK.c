
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int more_task_flag; int main_work; int workqueue; int main_proc_lock; scalar_t__ mwifiex_processing; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mwifiex_adapter *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->main_proc_lock, VAR_1);
 if (VAR_0->mwifiex_processing) {
  VAR_0->more_task_flag = 1;
  FUNC_2(&VAR_0->main_proc_lock, VAR_1);
 } else {
  FUNC_2(&VAR_0->main_proc_lock, VAR_1);
  FUNC_0(VAR_0->workqueue, &VAR_0->main_work);
 }
}
