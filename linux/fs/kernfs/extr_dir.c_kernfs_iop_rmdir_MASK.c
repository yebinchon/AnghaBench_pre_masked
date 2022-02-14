
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_syscall_ops {int (* rmdir ) (struct kernfs_node*) ;} ;
struct kernfs_node {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct kernfs_syscall_ops* syscall_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kernfs_node* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 TYPE_1__* FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct kernfs_node *VAR_4 = FUNC_0(VAR_3);
 struct kernfs_syscall_ops *VAR_5 = FUNC_3(VAR_4)->syscall_ops;
 int VAR_6;

 if (!VAR_5 || !VAR_5->rmdir)
  return -VAR_1;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6 = VAR_5->rmdir(VAR_4);

 FUNC_2(VAR_4);
 return VAR_6;
}
