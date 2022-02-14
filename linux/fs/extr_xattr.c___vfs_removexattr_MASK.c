
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int (* set ) (struct xattr_handler const*,struct dentry*,struct inode*,char const*,int *,int ,int ) ;} ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xattr_handler const*) ;
 int FUNC_1 (struct xattr_handler const*) ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct xattr_handler const*,struct dentry*,struct inode*,char const*,int *,int ,int ) ;
 struct xattr_handler* FUNC_4 (struct inode*,char const**) ;

int
FUNC_5(struct dentry *VAR_2, const char *VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_2);
 const struct xattr_handler *VAR_5;

 VAR_5 = FUNC_4(VAR_4, &VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (!VAR_5->set)
  return -VAR_0;
 return VAR_5->set(VAR_5, VAR_2, VAR_4, VAR_3, ((void*)0), 0, VAR_1);
}
