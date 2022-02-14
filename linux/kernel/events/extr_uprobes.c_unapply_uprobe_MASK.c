
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; scalar_t__ vm_pgoff; int vm_file; struct vm_area_struct* vm_next; } ;
struct uprobe {scalar_t__ inode; int offset; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct vm_area_struct*,int) ;
 int FUNC_3 (struct uprobe*,struct mm_struct*,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vm_area_struct*,int) ;

__attribute__((used)) static int FUNC_6(struct uprobe *VAR_1, struct mm_struct *VAR_2)
{
 struct vm_area_struct *VAR_3;
 int VAR_4 = 0;

 FUNC_0(&VAR_2->mmap_sem);
 for (VAR_3 = VAR_2->mmap; VAR_3; VAR_3 = VAR_3->vm_next) {
  unsigned long VAR_5;
  loff_t VAR_6;

  if (!FUNC_5(VAR_3, 0) ||
      FUNC_1(VAR_3->vm_file) != VAR_1->inode)
   continue;

  VAR_6 = (loff_t)VAR_3->vm_pgoff << VAR_0;
  if (VAR_1->offset < VAR_6 ||
      VAR_1->offset >= VAR_6 + VAR_3->vm_end - VAR_3->vm_start)
   continue;

  VAR_5 = FUNC_2(VAR_3, VAR_1->offset);
  VAR_4 |= FUNC_3(VAR_1, VAR_2, VAR_5);
 }
 FUNC_4(&VAR_2->mmap_sem);

 return VAR_4;
}
