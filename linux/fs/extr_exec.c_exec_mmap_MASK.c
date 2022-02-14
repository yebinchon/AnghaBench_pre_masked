
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; struct mm_struct* mm; struct mm_struct* active_mm; } ;
struct mm_struct {int mmap_sem; scalar_t__ vmacache_seqnum; int core_state; } ;
struct TYPE_2__ {int maxrss; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*) ;
 struct task_struct* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct task_struct*,struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (int *,struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct task_struct*) ;

__attribute__((used)) static int FUNC_15(struct mm_struct *VAR_2)
{
 struct task_struct *VAR_3;
 struct mm_struct *VAR_4, *VAR_5;


 VAR_3 = VAR_1;
 VAR_4 = VAR_1->mm;
 FUNC_4(VAR_3, VAR_4);

 if (VAR_4) {
  FUNC_9(VAR_4);






  FUNC_2(&VAR_4->mmap_sem);
  if (FUNC_12(VAR_4->core_state)) {
   FUNC_13(&VAR_4->mmap_sem);
   return -VAR_0;
  }
 }
 FUNC_10(VAR_3);
 VAR_5 = VAR_3->active_mm;
 FUNC_3(VAR_2);
 VAR_3->mm = VAR_2;
 VAR_3->active_mm = VAR_2;
 FUNC_1(VAR_5, VAR_2);
 VAR_3->mm->vmacache_seqnum = 0;
 FUNC_14(VAR_3);
 FUNC_11(VAR_3);
 if (VAR_4) {
  FUNC_13(&VAR_4->mmap_sem);
  FUNC_0(VAR_5 != VAR_4);
  FUNC_8(&VAR_3->signal->maxrss, VAR_4);
  FUNC_5(VAR_4);
  FUNC_7(VAR_4);
  return 0;
 }
 FUNC_6(VAR_5);
 return 0;
}
