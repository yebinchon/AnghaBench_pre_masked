
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_ctime; int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int *,struct posix_acl**) ;
 int FUNC_2 (struct inode*,int,struct posix_acl*) ;

int FUNC_3(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_0) {
  VAR_4 = FUNC_1(VAR_1,
    &VAR_1->i_mode, &VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 VAR_1->i_ctime = FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_3, VAR_2);
 return 0;
}
