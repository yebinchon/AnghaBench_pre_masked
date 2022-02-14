
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo_len; int lo_name; } ;
union nfsd4_op_u {TYPE_1__ lookup; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int *,int ,int ,int *) ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
      union nfsd4_op_u *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->current_fh,
      VAR_2->lookup.lo_name, VAR_2->lookup.lo_len,
      &VAR_1->current_fh);
}
