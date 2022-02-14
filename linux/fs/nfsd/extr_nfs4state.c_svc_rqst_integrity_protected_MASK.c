
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct svc_cred {int cr_flavor; int cr_gss_mech; } ;
struct svc_rqst {struct svc_cred rq_cred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct svc_rqst *VAR_2)
{
 struct svc_cred *VAR_3 = &VAR_2->rq_cred;
 u32 VAR_4;

 if (!VAR_3->cr_gss_mech)
  return 0;
 VAR_4 = FUNC_0(VAR_3->cr_gss_mech, VAR_3->cr_flavor);
 return VAR_4 == VAR_0 ||
        VAR_4 == VAR_1;
}
