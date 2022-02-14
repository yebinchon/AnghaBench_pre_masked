
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct kernfs_syscall_ops {int (* mkdir ) (struct kernfs_node*,int ,int ) ;} ;
struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {struct kernfs_syscall_ops* syscall_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 TYPE_2__* FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct dentry *VAR_3,
       umode_t VAR_4)
{
 struct kernfs_node *VAR_5 = VAR_2->i_private;
 struct kernfs_syscall_ops *VAR_6 = FUNC_2(VAR_5)->syscall_ops;
 int VAR_7;

 if (!VAR_6 || !VAR_6->mkdir)
  return -VAR_1;

 if (!FUNC_0(VAR_5))
  return -VAR_0;

 VAR_7 = VAR_6->mkdir(VAR_5, VAR_3->d_name.name, VAR_4);

 FUNC_1(VAR_5);
 return VAR_7;
}
