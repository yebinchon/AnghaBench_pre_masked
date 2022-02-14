
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode_operations {int dummy; } ;
struct inode {void* i_private; struct file_operations const* i_fop; struct inode_operations const* i_op; int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*,struct inode*) ;
 struct inode* FUNC_3 (int ,struct inode*,int ) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, umode_t VAR_1, void *VAR_2,
    const struct inode_operations *VAR_3,
    const struct file_operations *VAR_4)
{
 struct inode *VAR_5 = VAR_0->d_parent->d_inode;
 struct inode *VAR_6 = FUNC_3(VAR_5->i_sb, VAR_5, VAR_1);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->i_op = VAR_3;
 VAR_6->i_fop = VAR_4;
 VAR_6->i_private = VAR_2;

 FUNC_2(VAR_0, VAR_6, VAR_5);
 return 0;
}
