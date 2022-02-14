
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*,int ,char const*,void*,size_t) ;

__attribute__((used)) static int FUNC_1(const struct xattr_handler *VAR_0,
          struct dentry *VAR_1,
          struct inode *VAR_2,
          const char *VAR_3,
          void *VAR_4, size_t VAR_5)
{
 return FUNC_0(VAR_2, VAR_0->flags, VAR_3,
  VAR_4, VAR_5);
}
