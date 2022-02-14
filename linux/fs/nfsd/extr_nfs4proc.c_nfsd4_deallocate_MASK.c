
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nfsd4_op_u {int deallocate; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int *,int) ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
   union nfsd4_op_u *VAR_4)
{
 return FUNC_0(VAR_2, VAR_3, &VAR_4->deallocate,
          VAR_1 | VAR_0);
}
