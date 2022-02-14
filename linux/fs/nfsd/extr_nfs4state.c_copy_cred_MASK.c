
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cred {scalar_t__ cr_gss_mech; int cr_group_info; int cr_gid; int cr_uid; int cr_flavor; void* cr_targ_princ; void* cr_raw_principal; void* cr_principal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(struct svc_cred *VAR_2, struct svc_cred *VAR_3)
{
 VAR_2->cr_principal = FUNC_2(VAR_3->cr_principal, VAR_1);
 VAR_2->cr_raw_principal = FUNC_2(VAR_3->cr_raw_principal,
        VAR_1);
 VAR_2->cr_targ_princ = FUNC_2(VAR_3->cr_targ_princ, VAR_1);
 if ((VAR_3->cr_principal && !VAR_2->cr_principal) ||
     (VAR_3->cr_raw_principal && !VAR_2->cr_raw_principal) ||
     (VAR_3->cr_targ_princ && !VAR_2->cr_targ_princ))
  return -VAR_0;

 VAR_2->cr_flavor = VAR_3->cr_flavor;
 VAR_2->cr_uid = VAR_3->cr_uid;
 VAR_2->cr_gid = VAR_3->cr_gid;
 VAR_2->cr_group_info = VAR_3->cr_group_info;
 FUNC_0(VAR_2->cr_group_info);
 VAR_2->cr_gss_mech = VAR_3->cr_gss_mech;
 if (VAR_3->cr_gss_mech)
  FUNC_1(VAR_3->cr_gss_mech);
 return 0;
}
