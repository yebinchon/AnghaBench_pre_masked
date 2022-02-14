
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct kernfs_syscall_ops {int (* show_options ) (struct seq_file*,struct kernfs_root*) ;} ;
struct kernfs_root {struct kernfs_syscall_ops* syscall_ops; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 struct kernfs_root* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,struct kernfs_root*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 struct kernfs_root *VAR_2 = FUNC_1(FUNC_0(VAR_1));
 struct kernfs_syscall_ops *VAR_3 = VAR_2->syscall_ops;

 if (VAR_3 && VAR_3->show_options)
  return VAR_3->show_options(VAR_0, VAR_2);
 return 0;
}
