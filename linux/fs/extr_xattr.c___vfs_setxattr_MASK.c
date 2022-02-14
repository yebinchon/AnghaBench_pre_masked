
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int (* set ) (struct xattr_handler const*,struct dentry*,struct inode*,char const*,void const*,size_t,int) ;} ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xattr_handler const*) ;
 int FUNC_1 (struct xattr_handler const*) ;
 int FUNC_2 (struct xattr_handler const*,struct dentry*,struct inode*,char const*,void const*,size_t,int) ;
 struct xattr_handler* FUNC_3 (struct inode*,char const**) ;

int
FUNC_4(struct dentry *VAR_1, struct inode *VAR_2, const char *VAR_3,
        const void *VAR_4, size_t VAR_5, int VAR_6)
{
 const struct xattr_handler *VAR_7;

 VAR_7 = FUNC_3(VAR_2, &VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 if (!VAR_7->set)
  return -VAR_0;
 if (VAR_5 == 0)
  VAR_4 = "";
 return VAR_7->set(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
