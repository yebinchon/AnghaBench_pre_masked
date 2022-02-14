
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct task_struct {int dummy; } ;
struct super_block {int dummy; } ;
struct proc_inode {int pid; } ;
struct inode {int i_gid; int i_uid; int * i_op; int i_ctime; int i_atime; int i_mtime; int i_ino; int i_mode; } ;


 int VAR_0 ;
 struct proc_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*,int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_6 (struct task_struct*,struct inode*) ;
 int FUNC_7 (struct task_struct*,int ,int *,int *) ;

struct inode *FUNC_8(struct super_block * VAR_2,
      struct task_struct *VAR_3, umode_t VAR_4)
{
 struct inode * VAR_5;
 struct proc_inode *VAR_6;



 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5)
  goto out;


 VAR_6 = FUNC_0(VAR_5);
 VAR_5->i_mode = VAR_4;
 VAR_5->i_ino = FUNC_2();
 VAR_5->i_mtime = VAR_5->i_atime = VAR_5->i_ctime = FUNC_1(VAR_5);
 VAR_5->i_op = &VAR_1;




 VAR_6->pid = FUNC_3(VAR_3, VAR_0);
 if (!VAR_6->pid)
  goto out_unlock;

 FUNC_7(VAR_3, 0, &VAR_5->i_uid, &VAR_5->i_gid);
 FUNC_6(VAR_3, VAR_5);

out:
 return VAR_5;

out_unlock:
 FUNC_4(VAR_5);
 return ((void*)0);
}
