
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cr_flavor; } ;
struct svc_rqst {scalar_t__ rq_gssclient; TYPE_1__ rq_cred; } ;
struct svc_export {int ex_nflavors; scalar_t__ ex_client; struct exp_flavor_info* ex_flavors; } ;
struct exp_flavor_info {scalar_t__ pseudoflavor; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*) ;
 int VAR_2 ;

__be32 FUNC_1(struct svc_export *VAR_3, struct svc_rqst *VAR_4)
{
 struct exp_flavor_info *VAR_5;
 struct exp_flavor_info *VAR_6 = VAR_3->ex_flavors + VAR_3->ex_nflavors;


 if (VAR_3->ex_client == VAR_4->rq_gssclient)
  return 0;

 for (VAR_5 = VAR_3->ex_flavors; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_5->pseudoflavor == VAR_4->rq_cred.cr_flavor)
   return 0;
 }

 if (VAR_3->ex_nflavors == 0) {
  if (VAR_4->rq_cred.cr_flavor == VAR_0 ||
      VAR_4->rq_cred.cr_flavor == VAR_1)
   return 0;
 }







 if (FUNC_0(VAR_4))
  return 0;

 return VAR_2;
}
