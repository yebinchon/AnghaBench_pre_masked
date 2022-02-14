
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_syscall_ops {int (* rename ) (struct kernfs_node*,struct kernfs_node*,int ) ;} ;
struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {struct kernfs_syscall_ops* syscall_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kernfs_node* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 TYPE_2__* FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*,struct kernfs_node*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct dentry *VAR_4,
        struct inode *VAR_5, struct dentry *VAR_6,
        unsigned int VAR_7)
{
 struct kernfs_node *VAR_8 = FUNC_0(VAR_4);
 struct kernfs_node *VAR_9 = VAR_5->i_private;
 struct kernfs_syscall_ops *VAR_10 = FUNC_3(VAR_8)->syscall_ops;
 int VAR_11;

 if (VAR_7)
  return -VAR_0;

 if (!VAR_10 || !VAR_10->rename)
  return -VAR_2;

 if (!FUNC_1(VAR_8))
  return -VAR_1;

 if (!FUNC_1(VAR_9)) {
  FUNC_2(VAR_8);
  return -VAR_1;
 }

 VAR_11 = VAR_10->rename(VAR_8, VAR_9, VAR_6->d_name.name);

 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
 return VAR_11;
}
