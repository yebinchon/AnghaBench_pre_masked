
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int (* get ) (struct xattr_handler const*,struct dentry*,struct inode*,char const*,void*,size_t) ;} ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xattr_handler const*) ;
 int FUNC_1 (struct xattr_handler const*) ;
 int FUNC_2 (struct xattr_handler const*,struct dentry*,struct inode*,char const*,void*,size_t) ;
 struct xattr_handler* FUNC_3 (struct inode*,char const**) ;

ssize_t
FUNC_4(struct dentry *VAR_1, struct inode *VAR_2, const char *VAR_3,
        void *VAR_4, size_t VAR_5)
{
 const struct xattr_handler *VAR_6;

 VAR_6 = FUNC_3(VAR_2, &VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 if (!VAR_6->get)
  return -VAR_0;
 return VAR_6->get(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
