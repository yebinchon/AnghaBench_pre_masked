
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int VAR_0 ;
 struct posix_acl* FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (struct inode*,int ,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_5(const struct xattr_handler *VAR_1,
      struct dentry *VAR_2, struct inode *VAR_3,
      const char *VAR_4, const void *VAR_5,
      size_t VAR_6, int VAR_7)
{
 struct posix_acl *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_5) {
  VAR_8 = FUNC_2(&VAR_0, VAR_5, VAR_6);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }
 VAR_9 = FUNC_4(VAR_3, VAR_1->flags, VAR_8);
 FUNC_3(VAR_8);
 return VAR_9;
}
