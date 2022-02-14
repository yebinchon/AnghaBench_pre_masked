
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_style; int sin_exp; } ;
union nfsd4_op_u {TYPE_1__ secinfo_no_name; } ;
struct svc_rqst {int dummy; } ;
struct TYPE_5__ {int fh_export; } ;
struct nfsd4_compound_state {TYPE_2__ current_fh; } ;
typedef int __be32 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (struct svc_rqst*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
  union nfsd4_op_u *VAR_4)
{
 __be32 VAR_5;

 switch (VAR_4->secinfo_no_name.sin_style) {
 case 129:
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_2, &VAR_3->current_fh);
  if (VAR_5)
   return VAR_5;
  break;
 default:
  return VAR_1;
 }

 VAR_4->secinfo_no_name.sin_exp = FUNC_0(VAR_3->current_fh.fh_export);
 FUNC_1(&VAR_3->current_fh);
 return VAR_0;
}
