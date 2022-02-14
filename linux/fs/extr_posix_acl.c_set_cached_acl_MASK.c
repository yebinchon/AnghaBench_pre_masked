
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 struct posix_acl** FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct posix_acl*) ;
 struct posix_acl* FUNC_4 (struct posix_acl**,int ) ;

void FUNC_5(struct inode *VAR_0, int VAR_1, struct posix_acl *VAR_2)
{
 struct posix_acl **VAR_3 = FUNC_0(VAR_0, VAR_1);
 struct posix_acl *VAR_4;

 VAR_4 = FUNC_4(VAR_3, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_4))
  FUNC_3(VAR_4);
}
