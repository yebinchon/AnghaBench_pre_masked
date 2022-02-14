
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct gru_thread_state {int ts_ctxlock; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (unsigned long,struct vm_area_struct*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 struct gru_thread_state* FUNC_2 (struct vm_area_struct*,int ) ;
 struct vm_area_struct* FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct gru_thread_state *FUNC_6(unsigned long VAR_1)
{
 struct mm_struct *VAR_2 = VAR_0->mm;
 struct vm_area_struct *VAR_3;
 struct gru_thread_state *VAR_4 = ((void*)0);

 FUNC_1(&VAR_2->mmap_sem);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_1, VAR_3));
 if (VAR_4)
  FUNC_4(&VAR_4->ts_ctxlock);
 else
  FUNC_5(&VAR_2->mmap_sem);
 return VAR_4;
}
