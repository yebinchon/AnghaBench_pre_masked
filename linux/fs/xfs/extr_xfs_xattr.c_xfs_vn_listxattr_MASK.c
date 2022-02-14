
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_attr_list_context {int resynch; char* alist; size_t bufsize; size_t firstu; scalar_t__ count; int put_listent; struct attrlist_cursor_kern* cursor; int dp; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct attrlist_cursor_kern {int member_0; } ;
typedef int ssize_t ;
typedef int context ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct xfs_attr_list_context*,int ,int) ;
 int FUNC_3 (struct xfs_attr_list_context*) ;
 int VAR_1 ;

ssize_t
FUNC_4(
 struct dentry *VAR_2,
 char *VAR_3,
 size_t VAR_4)
{
 struct xfs_attr_list_context VAR_5;
 struct attrlist_cursor_kern VAR_6 = { 0 };
 struct inode *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;




 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.dp = FUNC_0(VAR_7);
 VAR_5.cursor = &VAR_6;
 VAR_5.resynch = 1;
 VAR_5.alist = VAR_4 ? VAR_3 : ((void*)0);
 VAR_5.bufsize = VAR_4;
 VAR_5.firstu = VAR_5.bufsize;
 VAR_5.put_listent = VAR_1;

 VAR_8 = FUNC_3(&VAR_5);
 if (VAR_8)
  return VAR_8;
 if (VAR_5.count < 0)
  return -VAR_0;

 return VAR_5.count;
}
