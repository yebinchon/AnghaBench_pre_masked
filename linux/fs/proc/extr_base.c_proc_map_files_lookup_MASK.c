
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct dentry*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 struct task_struct* FUNC_4 (struct inode*) ;
 struct mm_struct* FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 struct dentry* FUNC_7 (struct dentry*,struct task_struct*,void*) ;
 int FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct dentry *FUNC_11(struct inode *VAR_4,
  struct dentry *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct vm_area_struct *VAR_9;
 struct task_struct *VAR_10;
 struct dentry *VAR_11;
 struct mm_struct *VAR_12;

 VAR_11 = FUNC_0(-VAR_2);
 VAR_10 = FUNC_4(VAR_4);
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_0(-VAR_0);
 if (!FUNC_8(VAR_10, VAR_3))
  goto out_put_task;

 VAR_11 = FUNC_0(-VAR_2);
 if (FUNC_1(VAR_5, &VAR_7, &VAR_8))
  goto out_put_task;

 VAR_12 = FUNC_5(VAR_10);
 if (!VAR_12)
  goto out_put_task;

 VAR_11 = FUNC_0(-VAR_1);
 if (FUNC_2(&VAR_12->mmap_sem))
  goto out_put_mm;

 VAR_11 = FUNC_0(-VAR_2);
 VAR_9 = FUNC_3(VAR_12, VAR_7, VAR_8);
 if (!VAR_9)
  goto out_no_vma;

 if (VAR_9->vm_file)
  VAR_11 = FUNC_7(VAR_5, VAR_10,
    (void *)(unsigned long)VAR_9->vm_file->f_mode);

out_no_vma:
 FUNC_10(&VAR_12->mmap_sem);
out_put_mm:
 FUNC_6(VAR_12);
out_put_task:
 FUNC_9(VAR_10);
out:
 return VAR_11;
}
