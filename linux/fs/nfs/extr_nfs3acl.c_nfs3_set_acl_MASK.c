
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct posix_acl*,struct posix_acl*) ;
 struct posix_acl* FUNC_4 (struct inode*,int const) ;
 struct posix_acl* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct posix_acl*) ;

int FUNC_7(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 struct posix_acl *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6;

 if (FUNC_2(VAR_1->i_mode)) {
  switch(VAR_3) {
  case 129:
   VAR_4 = VAR_5 = FUNC_4(VAR_1, 128);
   if (FUNC_0(VAR_4))
    goto fail;
   break;

  case 128:
   VAR_5 = VAR_2;
   VAR_4 = VAR_2 = FUNC_4(VAR_1, 129);
   if (FUNC_0(VAR_4))
    goto fail;
   break;
  }
 }

 if (VAR_2 == ((void*)0)) {
  VAR_4 = VAR_2 = FUNC_5(VAR_1->i_mode, VAR_0);
  if (FUNC_0(VAR_4))
   goto fail;
 }
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5);
 FUNC_6(VAR_4);
 return VAR_6;

fail:
 return FUNC_1(VAR_4);
}
