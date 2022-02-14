
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int mmap_sem; int core_state; } ;
struct core_thread {struct core_thread* next; int task; } ;
struct TYPE_2__ {struct core_thread* next; struct task_struct* task; } ;
struct core_state {TYPE_1__ dumper; int startup; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct task_struct*,struct mm_struct*,struct core_state*,int) ;

__attribute__((used)) static int FUNC_8(int VAR_3, struct core_state *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;
 struct mm_struct *VAR_6 = VAR_5->mm;
 int VAR_7 = -VAR_0;

 FUNC_3(&VAR_4->startup);
 VAR_4->dumper.task = VAR_5;
 VAR_4->dumper.next = ((void*)0);

 if (FUNC_0(&VAR_6->mmap_sem))
  return -VAR_1;

 if (!VAR_6->core_state)
  VAR_7 = FUNC_7(VAR_5, VAR_6, VAR_4, VAR_3);
 FUNC_4(&VAR_6->mmap_sem);

 if (VAR_7 > 0) {
  struct core_thread *VAR_8;

  FUNC_2();
  FUNC_5(&VAR_4->startup);
  FUNC_1();





  VAR_8 = VAR_4->dumper.next;
  while (VAR_8 != ((void*)0)) {
   FUNC_6(VAR_8->task, 0);
   VAR_8 = VAR_8->next;
  }
 }

 return VAR_7;
}
