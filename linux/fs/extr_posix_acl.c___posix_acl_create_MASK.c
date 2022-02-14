
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct posix_acl* FUNC_0 (struct posix_acl*,int ) ;
 int FUNC_1 (struct posix_acl*,int *) ;
 int FUNC_2 (struct posix_acl*) ;

int
FUNC_3(struct posix_acl **VAR_1, gfp_t VAR_2, umode_t *VAR_3)
{
 struct posix_acl *VAR_4 = FUNC_0(*VAR_1, VAR_2);
 int VAR_5 = -VAR_0;
 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  if (VAR_5 < 0) {
   FUNC_2(VAR_4);
   VAR_4 = ((void*)0);
  }
 }
 FUNC_2(*VAR_1);
 *VAR_1 = VAR_4;
 return VAR_5;
}
