
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rl_fhp; struct svc_rqst* rl_rqstp; } ;
union nfsd4_op_u {TYPE_1__ readlink; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int VAR_0 ;

__attribute__((used)) static __be32
FUNC_0(struct svc_rqst *VAR_1, struct nfsd4_compound_state *VAR_2,
        union nfsd4_op_u *VAR_3)
{
 VAR_3->readlink.rl_rqstp = VAR_1;
 VAR_3->readlink.rl_fhp = &VAR_2->current_fh;
 return VAR_0;
}
