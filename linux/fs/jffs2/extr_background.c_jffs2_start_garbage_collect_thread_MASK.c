
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pid; } ;
struct jffs2_sb_info {int gc_thread_start; int gc_thread_exit; TYPE_1__* mtd; int gc_task; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_0 ;
 struct task_struct* FUNC_6 (int ,struct jffs2_sb_info*,char*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct jffs2_sb_info *VAR_1)
{
 struct task_struct *VAR_2;
 int VAR_3 = 0;

 FUNC_0(VAR_1->gc_task);

 FUNC_4(&VAR_1->gc_thread_start);
 FUNC_4(&VAR_1->gc_thread_exit);

 VAR_2 = FUNC_6(VAR_0, VAR_1, "jffs2_gcd_mtd%d", VAR_1->mtd->index);
 if (FUNC_1(VAR_2)) {
  FUNC_7("fork failed for JFFS2 garbage collect thread: %ld\n",
   -FUNC_2(VAR_2));
  FUNC_3(&VAR_1->gc_thread_exit);
  VAR_3 = FUNC_2(VAR_2);
 } else {

  FUNC_5(1, "Garbage collect thread is pid %d\n", VAR_2->pid);
  FUNC_8(&VAR_1->gc_thread_start);
  VAR_3 = VAR_2->pid;
 }

 return VAR_3;
}
