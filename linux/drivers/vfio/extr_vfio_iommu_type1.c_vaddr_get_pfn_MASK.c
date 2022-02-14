
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_pgoff; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,int,unsigned int,struct page**,struct vm_area_struct**) ;
 int FUNC_3 (int *,struct mm_struct*,unsigned long,int,unsigned int,struct page**,struct vm_area_struct**,int *) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 unsigned long FUNC_7 (unsigned long) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_10(struct mm_struct *VAR_7, unsigned long VAR_8,
    int VAR_9, unsigned long *VAR_10)
{
 struct page *VAR_11[1];
 struct vm_area_struct *VAR_12;
 struct vm_area_struct *VAR_13[1];
 unsigned int VAR_14 = 0;
 int VAR_15;

 if (VAR_9 & VAR_3)
  VAR_14 |= VAR_2;

 FUNC_0(&VAR_7->mmap_sem);
 if (VAR_7 == VAR_6->mm) {
  VAR_15 = FUNC_2(VAR_8, 1, VAR_14 | VAR_1, VAR_11,
         VAR_13);
 } else {
  VAR_15 = FUNC_3(((void*)0), VAR_7, VAR_8, 1, VAR_14, VAR_11,
         VAR_13, ((void*)0));







  if (VAR_15 > 0 && FUNC_9(VAR_13[0])) {
   VAR_15 = -VAR_0;
   FUNC_6(VAR_11[0]);
  }
 }
 FUNC_8(&VAR_7->mmap_sem);

 if (VAR_15 == 1) {
  *VAR_10 = FUNC_5(VAR_11[0]);
  return 0;
 }

 FUNC_0(&VAR_7->mmap_sem);

 VAR_8 = FUNC_7(VAR_8);

 VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_8 + 1);

 if (VAR_12 && VAR_12->vm_flags & VAR_5) {
  *VAR_10 = ((VAR_8 - VAR_12->vm_start) >> VAR_4) + VAR_12->vm_pgoff;
  if (FUNC_4(*VAR_10))
   VAR_15 = 0;
 }

 FUNC_8(&VAR_7->mmap_sem);
 return VAR_15;
}
