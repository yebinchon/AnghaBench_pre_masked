
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nfsd4_op_u {int dummy; } nfsd4_op_u ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
  union nfsd4_op_u *VAR_2)
{
 __be32 VAR_3;

 FUNC_1(&VAR_1->current_fh);
 VAR_3 = FUNC_0(VAR_0, &VAR_1->current_fh);
 return VAR_3;
}
