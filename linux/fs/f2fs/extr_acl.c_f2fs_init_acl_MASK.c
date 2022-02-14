
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct page {int dummy; } ;
struct inode {int * i_acl; int * i_default_acl; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ,struct posix_acl*,struct page*) ;
 int FUNC_1 (struct inode*,int *,struct posix_acl**,struct posix_acl**,struct page*) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct posix_acl*) ;

int FUNC_4(struct inode *VAR_2, struct inode *VAR_3, struct page *VAR_4,
       struct page *VAR_5)
{
 struct posix_acl *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_3, &VAR_2->i_mode, &VAR_6, &VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_2, 1);

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_2, VAR_1, VAR_6,
           VAR_4);
  FUNC_3(VAR_6);
 } else {
  VAR_2->i_default_acl = ((void*)0);
 }
 if (VAR_7) {
  if (!VAR_8)
   VAR_8 = FUNC_0(VAR_2, VAR_0, VAR_7,
            VAR_4);
  FUNC_3(VAR_7);
 } else {
  VAR_2->i_acl = ((void*)0);
 }

 return VAR_8;
}
