
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mm_struct {int mmap_sem; struct core_state* core_state; } ;
struct core_thread {TYPE_2__* task; int next; } ;
struct TYPE_7__ {int next; } ;
struct core_state {int startup; int nr_threads; TYPE_1__ dumper; } ;
struct TYPE_8__ {struct mm_struct* mm; struct mm_struct* active_mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mm_struct*,TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct mm_struct*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,struct core_thread*) ;

__attribute__((used)) static void FUNC_19(void)
{
 struct mm_struct *VAR_4 = VAR_3->mm;
 struct core_state *VAR_5;

 FUNC_8(VAR_3, VAR_4);
 if (!VAR_4)
  return;
 FUNC_13(VAR_4);







 FUNC_4(&VAR_4->mmap_sem);
 VAR_5 = VAR_4->core_state;
 if (VAR_5) {
  struct core_thread VAR_6;

  FUNC_17(&VAR_4->mmap_sem);

  VAR_6.task = VAR_3;
  VAR_6.next = FUNC_18(&VAR_5->dumper.next, &VAR_6);




  if (FUNC_2(&VAR_5->nr_threads))
   FUNC_3(&VAR_5->startup);

  for (;;) {
   FUNC_12(VAR_1);
   if (!VAR_6.task)
    break;
   FUNC_7();
  }
  FUNC_1(VAR_0);
  FUNC_4(&VAR_4->mmap_sem);
 }
 FUNC_10(VAR_4);
 FUNC_0(VAR_4 != VAR_3->active_mm);

 FUNC_14(VAR_3);
 VAR_3->mm = ((void*)0);
 FUNC_17(&VAR_4->mmap_sem);
 FUNC_5(VAR_4, VAR_3);
 FUNC_15(VAR_3);
 FUNC_9(VAR_4);
 FUNC_11(VAR_4);
 if (FUNC_16(VAR_2))
  FUNC_6();
}
