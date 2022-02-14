
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nfsd4_op_u {int allocate; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int ) ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
        union nfsd4_op_u *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, &VAR_2->allocate, 0);
}
