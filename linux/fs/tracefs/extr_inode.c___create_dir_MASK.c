
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode_operations {int dummy; } ;
struct inode {int i_mode; int * i_fop; struct inode_operations const* i_op; } ;
struct dentry {TYPE_1__* d_parent; int d_sb; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_4 ;
 struct dentry* FUNC_6 (char const*,struct dentry*) ;
 struct inode* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct dentry *FUNC_9(const char *VAR_5, struct dentry *VAR_6,
       const struct inode_operations *VAR_7)
{
 struct dentry *VAR_8 = FUNC_6(VAR_5, VAR_6);
 struct inode *VAR_9;

 if (FUNC_0(VAR_8))
  return ((void*)0);

 VAR_9 = FUNC_7(VAR_8->d_sb);
 if (FUNC_8(!VAR_9))
  return FUNC_3(VAR_8);

 VAR_9->i_mode = VAR_0 | VAR_2 | VAR_1 | VAR_3;
 VAR_9->i_op = VAR_7;
 VAR_9->i_fop = &VAR_4;


 FUNC_5(VAR_9);
 FUNC_1(VAR_8, VAR_9);
 FUNC_5(VAR_8->d_parent->d_inode);
 FUNC_4(VAR_8->d_parent->d_inode, VAR_8);
 return FUNC_2(VAR_8);
}
