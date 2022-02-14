
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_sb_info {int gc_thread_exit; int erase_completion_lock; TYPE_1__* gc_task; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct jffs2_sb_info *VAR_1)
{
 int VAR_2 = 0;
 FUNC_2(&VAR_1->erase_completion_lock);
 if (VAR_1->gc_task) {
  FUNC_0(1, "Killing GC task %d\n", VAR_1->gc_task->pid);
  FUNC_1(VAR_0, VAR_1->gc_task, 1);
  VAR_2 = 1;
 }
 FUNC_3(&VAR_1->erase_completion_lock);
 if (VAR_2)
  FUNC_4(&VAR_1->gc_thread_exit);
}
