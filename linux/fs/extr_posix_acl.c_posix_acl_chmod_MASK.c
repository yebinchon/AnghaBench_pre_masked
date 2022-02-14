
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct posix_acl {int dummy; } ;
struct inode {TYPE_1__* i_op; } ;
struct TYPE_2__ {int (* set_acl ) (struct inode*,struct posix_acl*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct posix_acl*) ;
 int FUNC_4 (struct posix_acl**,int ,int ) ;
 struct posix_acl* FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct posix_acl*) ;
 int FUNC_7 (struct inode*,struct posix_acl*,int ) ;

int
FUNC_8(struct inode *VAR_3, umode_t VAR_4)
{
 struct posix_acl *VAR_5;
 int VAR_6 = 0;

 if (!FUNC_2(VAR_3))
  return 0;
 if (!VAR_3->i_op->set_acl)
  return -VAR_1;

 VAR_5 = FUNC_5(VAR_3, VAR_0);
 if (FUNC_1(VAR_5)) {
  if (VAR_5 == FUNC_0(-VAR_1))
   return 0;
  return FUNC_3(VAR_5);
 }

 VAR_6 = FUNC_4(&VAR_5, VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = VAR_3->i_op->set_acl(VAR_3, VAR_5, VAR_0);
 FUNC_6(VAR_5);
 return VAR_6;
}
