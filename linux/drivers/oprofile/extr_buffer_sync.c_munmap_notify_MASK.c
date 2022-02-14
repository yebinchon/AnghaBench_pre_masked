
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; scalar_t__ vm_file; } ;
struct notifier_block {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct notifier_block *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_4;
 struct mm_struct *VAR_6 = VAR_1->mm;
 struct vm_area_struct *VAR_7;

 FUNC_0(&VAR_6->mmap_sem);

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 && VAR_7->vm_file && (VAR_7->vm_flags & VAR_0)) {
  FUNC_4(&VAR_6->mmap_sem);



  FUNC_3(FUNC_2());
  return 0;
 }

 FUNC_4(&VAR_6->mmap_sem);
 return 0;
}
