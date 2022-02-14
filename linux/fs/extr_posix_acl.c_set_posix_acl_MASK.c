
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct inode {TYPE_2__* i_op; TYPE_1__* i_sb; int i_mode; } ;
struct TYPE_4__ {int (* set_acl ) (struct inode*,struct posix_acl*,int) ;} ;
struct TYPE_3__ {int s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,struct posix_acl*) ;
 int FUNC_4 (struct inode*,struct posix_acl*,int) ;

int
FUNC_5(struct inode *VAR_4, int VAR_5, struct posix_acl *VAR_6)
{
 if (!FUNC_0(VAR_4))
  return -VAR_2;
 if (!VAR_4->i_op->set_acl)
  return -VAR_2;

 if (VAR_5 == VAR_0 && !FUNC_1(VAR_4->i_mode))
  return VAR_6 ? -VAR_1 : 0;
 if (!FUNC_2(VAR_4))
  return -VAR_3;

 if (VAR_6) {
  int VAR_7 = FUNC_3(VAR_4->i_sb->s_user_ns, VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 return VAR_4->i_op->set_acl(VAR_4, VAR_6, VAR_5);
}
