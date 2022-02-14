
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cred {scalar_t__ cr_principal; int cr_group_info; int cr_gid; int cr_uid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct svc_cred*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(struct svc_cred *VAR_0, struct svc_cred *VAR_1)
{
 if ((FUNC_2(VAR_0) != FUNC_2(VAR_1))
  || (!FUNC_4(VAR_0->cr_uid, VAR_1->cr_uid))
  || (!FUNC_0(VAR_0->cr_gid, VAR_1->cr_gid))
  || !FUNC_1(VAR_0->cr_group_info, VAR_1->cr_group_info))
  return 0;

 if (VAR_0->cr_principal == VAR_1->cr_principal)
  return 1;
 if (!VAR_0->cr_principal || !VAR_1->cr_principal)
  return 0;
 return 0 == FUNC_3(VAR_0->cr_principal, VAR_1->cr_principal);
}
