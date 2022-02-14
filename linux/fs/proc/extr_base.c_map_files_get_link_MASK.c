
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct path f_path; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,unsigned long*,unsigned long*) ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 struct task_struct* FUNC_4 (int ) ;
 struct mm_struct* FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_1, struct path *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct vm_area_struct *VAR_5;
 struct task_struct *VAR_6;
 struct mm_struct *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_0;
 VAR_6 = FUNC_4(FUNC_0(VAR_1));
 if (!VAR_6)
  goto out;

 VAR_7 = FUNC_5(VAR_6);
 FUNC_8(VAR_6);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_1(VAR_1, &VAR_3, &VAR_4);
 if (VAR_8)
  goto out_mmput;

 VAR_8 = FUNC_2(&VAR_7->mmap_sem);
 if (VAR_8)
  goto out_mmput;

 VAR_8 = -VAR_0;
 VAR_5 = FUNC_3(VAR_7, VAR_3, VAR_4);
 if (VAR_5 && VAR_5->vm_file) {
  *VAR_2 = VAR_5->vm_file->f_path;
  FUNC_7(VAR_2);
  VAR_8 = 0;
 }
 FUNC_9(&VAR_7->mmap_sem);

out_mmput:
 FUNC_6(VAR_7);
out:
 return VAR_8;
}
