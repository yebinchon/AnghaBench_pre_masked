
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct kernfs_iattrs {int xattrs; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct kernfs_node* FUNC_1 (struct dentry*) ;
 struct kernfs_iattrs* FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (int ,int *,char*,size_t) ;

ssize_t FUNC_4(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct kernfs_node *VAR_4 = FUNC_1(VAR_1);
 struct kernfs_iattrs *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_3(FUNC_0(VAR_1), &VAR_5->xattrs, VAR_2, VAR_3);
}
