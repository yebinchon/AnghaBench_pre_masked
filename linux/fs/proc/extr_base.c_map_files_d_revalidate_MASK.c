
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct inode {int i_gid; int i_uid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mm_struct*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,unsigned long*,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*,unsigned long,unsigned long) ;
 struct task_struct* FUNC_5 (struct inode*) ;
 struct mm_struct* FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*,struct inode*) ;
 int FUNC_10 (struct task_struct*,int ,int *,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dentry *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 bool VAR_7 = 0;
 struct mm_struct *VAR_8 = ((void*)0);
 struct task_struct *VAR_9;
 struct inode *VAR_10;
 int VAR_11 = 0;

 if (VAR_4 & VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_3);
 VAR_9 = FUNC_5(VAR_10);
 if (!VAR_9)
  goto out_notask;

 VAR_8 = FUNC_6(VAR_9, VAR_2);
 if (FUNC_0(VAR_8))
  goto out;

 if (!FUNC_2(VAR_3, &VAR_5, &VAR_6)) {
  VAR_11 = FUNC_3(&VAR_8->mmap_sem);
  if (!VAR_11) {
   VAR_7 = !!FUNC_4(VAR_8, VAR_5,
           VAR_6);
   FUNC_11(&VAR_8->mmap_sem);
  }
 }

 FUNC_7(VAR_8);

 if (VAR_7) {
  FUNC_10(VAR_9, 0, &VAR_10->i_uid, &VAR_10->i_gid);

  FUNC_9(VAR_9, VAR_10);
  VAR_11 = 1;
 }

out:
 FUNC_8(VAR_9);

out_notask:
 return VAR_11;
}
