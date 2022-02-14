
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int * i_acl; int * i_default_acl; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct posix_acl*,int ) ;
 int FUNC_1 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_2 (struct posix_acl*) ;

int
FUNC_3(struct inode *VAR_2, struct inode *VAR_3)
{
 struct posix_acl *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_2->i_mode, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_1);
  FUNC_2(VAR_4);
 } else {
  VAR_2->i_default_acl = ((void*)0);
 }
 if (VAR_5) {
  if (!VAR_6)
   VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_0);
  FUNC_2(VAR_5);
 } else {
  VAR_2->i_acl = ((void*)0);
 }
 return VAR_6;
}
