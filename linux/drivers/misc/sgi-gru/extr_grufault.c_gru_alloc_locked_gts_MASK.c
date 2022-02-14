
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct gru_thread_state {int ts_ctxlock; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 struct gru_thread_state* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct gru_thread_state*) ;
 int FUNC_2 (unsigned long,struct vm_area_struct*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct gru_thread_state* FUNC_5 (struct vm_area_struct*,int ) ;
 struct vm_area_struct* FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct gru_thread_state *FUNC_9(unsigned long VAR_2)
{
 struct mm_struct *VAR_3 = VAR_1->mm;
 struct vm_area_struct *VAR_4;
 struct gru_thread_state *VAR_5 = FUNC_0(-VAR_0);

 FUNC_3(&VAR_3->mmap_sem);
 VAR_4 = FUNC_6(VAR_2);
 if (!VAR_4)
  goto err;

 VAR_5 = FUNC_5(VAR_4, FUNC_2(VAR_2, VAR_4));
 if (FUNC_1(VAR_5))
  goto err;
 FUNC_7(&VAR_5->ts_ctxlock);
 FUNC_4(&VAR_3->mmap_sem);
 return VAR_5;

err:
 FUNC_8(&VAR_3->mmap_sem);
 return VAR_5;
}
