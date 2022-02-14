
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_acl {struct yfs_acl* vol_acl; struct yfs_acl* acl; } ;


 int FUNC_0 (struct yfs_acl*) ;

void FUNC_1(struct yfs_acl *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->acl);
  FUNC_0(VAR_0->vol_acl);
  FUNC_0(VAR_0);
 }
}
