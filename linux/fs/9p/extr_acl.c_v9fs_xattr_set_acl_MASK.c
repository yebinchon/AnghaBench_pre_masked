
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int flags; int name; } ;
struct v9fs_session_info {int flags; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_mode; TYPE_1__* i_sb; } ;
struct iattr {int ia_valid; int ia_mode; int member_0; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_user_ns; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct inode*) ;
 struct posix_acl* FUNC_6 (int *,void const*,size_t) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (struct inode*,int *,struct posix_acl**) ;
 int FUNC_9 (int ,struct posix_acl*) ;
 int FUNC_10 (struct inode*,int,struct posix_acl*) ;
 struct v9fs_session_info* FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*,struct iattr*) ;
 int FUNC_13 (struct dentry*,int ,void const*,size_t,int) ;

__attribute__((used)) static int FUNC_14(const struct xattr_handler *VAR_7,
         struct dentry *VAR_8, struct inode *VAR_9,
         const char *VAR_10, const void *VAR_11,
         size_t VAR_12, int VAR_13)
{
 int VAR_14;
 struct posix_acl *VAR_15;
 struct v9fs_session_info *VAR_16;

 VAR_16 = FUNC_11(VAR_8);




 if ((VAR_16->flags & VAR_5) != VAR_4)
  return FUNC_13(VAR_8, VAR_7->name, VAR_11, VAR_12,
          VAR_13);

 if (FUNC_4(VAR_9->i_mode))
  return -VAR_2;
 if (!FUNC_5(VAR_9))
  return -VAR_3;
 if (VAR_11) {

  VAR_15 = FUNC_6(&VAR_6, VAR_11, VAR_12);
  if (FUNC_1(VAR_15))
   return FUNC_2(VAR_15);
  else if (VAR_15) {
   VAR_14 = FUNC_9(VAR_9->i_sb->s_user_ns, VAR_15);
   if (VAR_14)
    goto err_out;
  }
 } else
  VAR_15 = ((void*)0);

 switch (VAR_7->flags) {
 case 129:
  if (VAR_15) {
   struct iattr VAR_17 = { 0 };
   struct posix_acl *VAR_18 = VAR_15;

   VAR_14 = FUNC_8(VAR_9, &VAR_17.ia_mode, &VAR_15);
   if (VAR_14)
    goto err_out;
   if (!VAR_15) {





    FUNC_7(VAR_18);
    VAR_11 = ((void*)0);
    VAR_12 = 0;
   }
   VAR_17.ia_valid = VAR_0;




   FUNC_12(VAR_8, &VAR_17);
  }
  break;
 case 128:
  if (!FUNC_3(VAR_9->i_mode)) {
   VAR_14 = VAR_15 ? -VAR_1 : 0;
   goto err_out;
  }
  break;
 default:
  FUNC_0();
 }
 VAR_14 = FUNC_13(VAR_8, VAR_7->name, VAR_11, VAR_12, VAR_13);
 if (!VAR_14)
  FUNC_10(VAR_9, VAR_7->flags, VAR_15);
err_out:
 FUNC_7(VAR_15);
 return VAR_14;
}
