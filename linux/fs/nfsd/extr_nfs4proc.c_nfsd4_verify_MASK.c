
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nfsd4_op_u {int nverify; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
      union nfsd4_op_u *VAR_4)
{
 __be32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4->nverify);
 return VAR_5 == VAR_1 ? VAR_0 : VAR_5;
}
