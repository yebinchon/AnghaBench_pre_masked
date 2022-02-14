
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct posix_acl*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct posix_acl*) ;
 int FUNC_6 (int *,struct posix_acl*,void*,size_t) ;

__attribute__((used)) static int
FUNC_7(const struct xattr_handler *VAR_3,
      struct dentry *VAR_4, struct inode *VAR_5,
      const char *VAR_6, void *VAR_7, size_t VAR_8)
{
 struct posix_acl *VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_5))
  return -VAR_1;
 if (FUNC_3(VAR_5->i_mode))
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_5, VAR_3->flags);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_6(&VAR_2, VAR_9, VAR_7, VAR_8);
 FUNC_5(VAR_9);

 return VAR_10;
}
