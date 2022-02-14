
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,void const*,size_t,int) ;

__attribute__((used)) static int FUNC_1(const struct xattr_handler *VAR_1,
    struct dentry *VAR_2, struct inode *VAR_3,
    const char *VAR_4, const void *VAR_5, size_t VAR_6,
    int VAR_7)
{
 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_1->flags, VAR_5, VAR_6, VAR_7);
}
