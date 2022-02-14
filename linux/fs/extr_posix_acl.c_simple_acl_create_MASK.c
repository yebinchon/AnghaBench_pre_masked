
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct inode*,int ,struct posix_acl*) ;

int FUNC_3(struct inode *VAR_2, struct inode *VAR_3)
{
 struct posix_acl *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_3->i_mode, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_3, VAR_1, VAR_4);
 FUNC_2(VAR_3, VAR_0, VAR_5);

 if (VAR_4)
  FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_1(VAR_5);
 return 0;
}
