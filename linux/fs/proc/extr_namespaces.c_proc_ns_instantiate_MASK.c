
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {int dummy; } ;
struct proc_inode {struct proc_ns_operations const* ns_ops; } ;
struct inode {int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,int *) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 int VAR_3 ;
 int FUNC_4 (struct task_struct*,struct inode*) ;
 int VAR_4 ;
 struct inode* FUNC_5 (int ,struct task_struct*,int) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry *VAR_5,
 struct task_struct *VAR_6, const void *VAR_7)
{
 const struct proc_ns_operations *VAR_8 = VAR_7;
 struct inode *VAR_9;
 struct proc_inode *VAR_10;

 VAR_9 = FUNC_5(VAR_5->d_sb, VAR_6, VAR_1 | VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_1(VAR_9);
 VAR_9->i_op = &VAR_4;
 VAR_10->ns_ops = VAR_8;
 FUNC_4(VAR_6, VAR_9);

 FUNC_2(VAR_5, &VAR_3);
 return FUNC_3(VAR_9, VAR_5);
}
