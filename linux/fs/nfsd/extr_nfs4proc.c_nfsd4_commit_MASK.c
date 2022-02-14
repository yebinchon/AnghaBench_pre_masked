
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_commit {int co_count; int co_offset; int co_verf; } ;
union nfsd4_op_u {struct nfsd4_commit commit; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct svc_rqst*,int *,int ,int ) ;

__attribute__((used)) static __be32
FUNC_3(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
      union nfsd4_op_u *VAR_2)
{
 struct nfsd4_commit *VAR_3 = &VAR_2->commit;

 FUNC_1(&VAR_3->co_verf, FUNC_0(VAR_0));
 return FUNC_2(VAR_0, &VAR_1->current_fh, VAR_3->co_offset,
        VAR_3->co_count);
}
