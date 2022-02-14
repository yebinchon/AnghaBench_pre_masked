
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xol_area {unsigned long vaddr; int wq; int slot_count; int bitmap; } ;
struct task_struct {TYPE_3__* utask; TYPE_2__* mm; } ;
struct TYPE_6__ {unsigned long xol_vaddr; } ;
struct TYPE_4__ {struct xol_area* xol_area; } ;
struct TYPE_5__ {TYPE_1__ uprobes_state; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_3)
{
 struct xol_area *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (!VAR_3->mm || !VAR_3->mm->uprobes_state.xol_area || !VAR_3->utask)
  return;

 VAR_6 = VAR_3->utask->xol_vaddr;
 if (FUNC_3(!VAR_6))
  return;

 VAR_4 = VAR_3->mm->uprobes_state.xol_area;
 VAR_5 = VAR_4->vaddr + VAR_0;
 if (VAR_4->vaddr <= VAR_6 && VAR_6 < VAR_5) {
  unsigned long VAR_7;
  int VAR_8;

  VAR_7 = VAR_6 - VAR_4->vaddr;
  VAR_8 = VAR_7 / VAR_2;
  if (VAR_8 >= VAR_1)
   return;

  FUNC_1(VAR_8, VAR_4->bitmap);
  FUNC_0(&VAR_4->slot_count);
  FUNC_2();
  if (FUNC_4(&VAR_4->wq))
   FUNC_5(&VAR_4->wq);

  VAR_3->utask->xol_vaddr = 0;
 }
}
