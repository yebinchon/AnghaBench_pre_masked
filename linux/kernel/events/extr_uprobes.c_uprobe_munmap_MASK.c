
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_2__ {int flags; int mm_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct vm_area_struct*,int) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long) ;

void FUNC_6(struct vm_area_struct *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 if (FUNC_1() || !FUNC_4(VAR_2, 0))
  return;

 if (!FUNC_0(&VAR_2->vm_mm->mm_users))
  return;

 if (!FUNC_3(VAR_0, &VAR_2->vm_mm->flags) ||
      FUNC_3(VAR_1, &VAR_2->vm_mm->flags))
  return;

 if (FUNC_5(VAR_2, VAR_3, VAR_4))
  FUNC_2(VAR_1, &VAR_2->vm_mm->flags);
}
