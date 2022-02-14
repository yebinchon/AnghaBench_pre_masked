
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct proc_maps_private* private; } ;
typedef void rb_node ;
struct proc_maps_private {struct mm_struct* mm; int task; int inode; } ;
struct mm_struct {int mmap_sem; int mm_rb; } ;
typedef int loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void *FUNC_8(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct proc_maps_private *VAR_4 = VAR_2->private;
 struct mm_struct *VAR_5;
 struct rb_node *VAR_6;
 loff_t VAR_7 = *VAR_3;


 VAR_4->task = FUNC_2(VAR_4->inode);
 if (!VAR_4->task)
  return FUNC_0(-VAR_1);

 VAR_5 = VAR_4->mm;
 if (!VAR_5 || !FUNC_3(VAR_5))
  return ((void*)0);

 if (FUNC_1(&VAR_5->mmap_sem)) {
  FUNC_4(VAR_5);
  return FUNC_0(-VAR_0);
 }


 for (VAR_6 = FUNC_5(&VAR_5->mm_rb); VAR_6; VAR_6 = FUNC_6(VAR_6))
  if (VAR_7-- == 0)
   return VAR_6;

 FUNC_7(&VAR_5->mmap_sem);
 FUNC_4(VAR_5);
 return ((void*)0);
}
