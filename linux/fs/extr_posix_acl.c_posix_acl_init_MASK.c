
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; int a_refcount; } ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(struct posix_acl *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->a_refcount, 1);
 VAR_0->a_count = VAR_1;
}
