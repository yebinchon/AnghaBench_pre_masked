
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct kernfs_syscall_ops {int (* show_path ) (struct seq_file*,struct kernfs_node*,struct kernfs_root*) ;} ;
struct kernfs_root {struct kernfs_syscall_ops* syscall_ops; } ;
struct kernfs_node {int dummy; } ;
struct dentry {int dummy; } ;


 struct kernfs_node* FUNC_0 (struct dentry*) ;
 struct kernfs_root* FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct seq_file*,struct dentry*,char*) ;
 int FUNC_3 (struct seq_file*,struct kernfs_node*,struct kernfs_root*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 struct kernfs_node *VAR_2 = FUNC_0(VAR_1);
 struct kernfs_root *VAR_3 = FUNC_1(VAR_2);
 struct kernfs_syscall_ops *VAR_4 = VAR_3->syscall_ops;

 if (VAR_4 && VAR_4->show_path)
  return VAR_4->show_path(VAR_0, VAR_2, VAR_3);

 FUNC_2(VAR_0, VAR_1, " \t\n\\");
 return 0;
}
