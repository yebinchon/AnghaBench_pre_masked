
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_lock; } ;
struct iattr {int ia_valid; int ia_mode; } ;
struct TYPE_2__ {int attr_valid; int attr_gid; int attr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct iattr*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct inode*,int) ;

int FUNC_14(struct inode *VAR_6, struct iattr *VAR_7)
{
 int VAR_8;

 if (VAR_7->ia_valid & VAR_0) {
  if (VAR_7->ia_mode & (VAR_5)) {
   if (FUNC_5(VAR_6)) {





    VAR_7->ia_mode -= VAR_5;
   } else {
    FUNC_4(VAR_3,
          "User attempted to set sticky bit on non-root directory; returning EINVAL.\n");
    VAR_8 = -VAR_2;
    goto out;
   }
  }
  if (VAR_7->ia_mode & (VAR_4)) {
   FUNC_4(VAR_3,
         "Attempting to set setuid bit (not supported); returning EINVAL.\n");
   VAR_8 = -VAR_2;
   goto out;
  }
 }

 if (VAR_7->ia_valid & VAR_1) {
  VAR_8 = FUNC_7(VAR_6, VAR_7);
  if (VAR_8)
   goto out;
 }

again:
 FUNC_10(&VAR_6->i_lock);
 if (FUNC_0(VAR_6)->attr_valid) {
  if (FUNC_12(FUNC_0(VAR_6)->attr_uid, FUNC_2()) &&
      FUNC_3(FUNC_0(VAR_6)->attr_gid, FUNC_1())) {
   FUNC_0(VAR_6)->attr_valid = VAR_7->ia_valid;
  } else {
   FUNC_11(&VAR_6->i_lock);
   FUNC_13(VAR_6, 1);
   goto again;
  }
 } else {
  FUNC_0(VAR_6)->attr_valid = VAR_7->ia_valid;
  FUNC_0(VAR_6)->attr_uid = FUNC_2();
  FUNC_0(VAR_6)->attr_gid = FUNC_1();
 }
 FUNC_9(VAR_6, VAR_7);
 FUNC_11(&VAR_6->i_lock);
 FUNC_6(VAR_6);

 if (VAR_7->ia_valid & VAR_0)

  VAR_8 = FUNC_8(VAR_6, VAR_6->i_mode);

 VAR_8 = 0;
out:
 return VAR_8;
}
