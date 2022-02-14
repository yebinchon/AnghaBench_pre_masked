
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int * i_acl; int * i_default_acl; int i_mode; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct inode*,int ,struct posix_acl*,int ) ;
 int FUNC_1 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_2 (struct posix_acl*) ;

int
FUNC_3(handle_t *VAR_3, struct inode *VAR_4, struct inode *VAR_5)
{
 struct posix_acl *VAR_6, *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_4->i_mode, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_1,
           VAR_6, VAR_2);
  FUNC_2(VAR_6);
 } else {
  VAR_4->i_default_acl = ((void*)0);
 }
 if (VAR_7) {
  if (!VAR_8)
   VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_0,
            VAR_7, VAR_2);
  FUNC_2(VAR_7);
 } else {
  VAR_4->i_acl = ((void*)0);
 }
 return VAR_8;
}
