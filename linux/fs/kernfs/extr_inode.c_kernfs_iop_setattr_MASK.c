
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_node*,struct iattr*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct dentry*,struct iattr*) ;

int FUNC_6(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 struct kernfs_node *VAR_5 = VAR_4->i_private;
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_1);
 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6)
  goto out;


 FUNC_4(VAR_4, VAR_3);

out:
 FUNC_3(&VAR_1);
 return VAR_6;
}
