
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_cred {scalar_t__ cr_gss_mech; int cr_principal; int cr_raw_principal; } ;
struct svc_rqst {struct svc_cred rq_cred; } ;
struct TYPE_2__ {scalar_t__ cr_gss_mech; scalar_t__ cr_principal; scalar_t__ cr_raw_principal; } ;
struct nfs4_client {TYPE_1__ cl_cred; int cl_mach_cred; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct svc_rqst*) ;

bool FUNC_2(struct nfs4_client *VAR_0, struct svc_rqst *VAR_1)
{
 struct svc_cred *VAR_2 = &VAR_1->rq_cred;

 if (!VAR_0->cl_mach_cred)
  return 1;
 if (VAR_0->cl_cred.cr_gss_mech != VAR_2->cr_gss_mech)
  return 0;
 if (!FUNC_1(VAR_1))
  return 0;
 if (VAR_0->cl_cred.cr_raw_principal)
  return 0 == FUNC_0(VAR_0->cl_cred.cr_raw_principal,
      VAR_2->cr_raw_principal);
 if (!VAR_2->cr_principal)
  return 0;
 return 0 == FUNC_0(VAR_0->cl_cred.cr_principal, VAR_2->cr_principal);
}
