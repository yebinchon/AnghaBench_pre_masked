
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {int dummy; } ;
struct posix_acl {int dummy; } ;
typedef int gfp_t ;


 struct posix_acl* FUNC_0 (size_t const,int ) ;
 int FUNC_1 (struct posix_acl*,int) ;

struct posix_acl *
FUNC_2(int VAR_0, gfp_t VAR_1)
{
 const size_t VAR_2 = sizeof(struct posix_acl) +
                     VAR_0 * sizeof(struct posix_acl_entry);
 struct posix_acl *VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_0);
 return VAR_3;
}
