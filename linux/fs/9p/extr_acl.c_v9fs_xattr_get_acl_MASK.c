
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; int name; } ;
struct v9fs_session_info {int flags; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (int *,struct posix_acl*,void*,size_t) ;
 struct v9fs_session_info* FUNC_4 (struct dentry*) ;
 struct posix_acl* FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct dentry*,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_7(const struct xattr_handler *VAR_4,
         struct dentry *VAR_5, struct inode *VAR_6,
         const char *VAR_7, void *VAR_8, size_t VAR_9)
{
 struct v9fs_session_info *VAR_10;
 struct posix_acl *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(VAR_5);



 if ((VAR_10->flags & VAR_2) != VAR_1)
  return FUNC_6(VAR_5, VAR_4->name, VAR_8, VAR_9);

 VAR_11 = FUNC_5(VAR_6, VAR_4->flags);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);
 if (VAR_11 == ((void*)0))
  return -VAR_0;
 VAR_12 = FUNC_3(&VAR_3, VAR_11, VAR_8, VAR_9);
 FUNC_2(VAR_11);

 return VAR_12;
}
