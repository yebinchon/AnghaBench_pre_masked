
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {scalar_t__ nboot_acl; int security_level; } ;
struct icm {scalar_t__ max_boot_acl; int rpm; scalar_t__ safe_mode; } ;


 int FUNC_0 (struct tb*,int *,scalar_t__*,int *) ;
 int FUNC_1 (struct tb*) ;
 int FUNC_2 (struct tb*,char*) ;
 struct icm* FUNC_3 (struct tb*) ;

__attribute__((used)) static int FUNC_4(struct tb *VAR_0)
{
 struct icm *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->safe_mode) {
  FUNC_2(VAR_0, "Thunderbolt host controller is in safe mode.\n");
  FUNC_2(VAR_0, "You need to update NVM firmware of the controller before it can be used.\n");
  FUNC_2(VAR_0, "For latest updates check https://thunderbolttechnology.net/updates.\n");
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, &VAR_0->security_level, &VAR_0->nboot_acl,
     &VAR_1->rpm);
 if (VAR_2)
  return VAR_2;





 if (VAR_0->nboot_acl > VAR_1->max_boot_acl)
  VAR_0->nboot_acl = 0;

 return 0;
}
