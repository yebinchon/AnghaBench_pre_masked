
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char const*,void*,size_t) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const struct xattr_handler *VAR_1,
        struct dentry *VAR_2, struct inode *VAR_3,
        const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 if (FUNC_1(VAR_4))
  return -VAR_0;
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}
