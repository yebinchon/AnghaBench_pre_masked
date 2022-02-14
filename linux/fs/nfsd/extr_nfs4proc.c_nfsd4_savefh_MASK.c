
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nfsd4_op_u {int dummy; } nfsd4_op_u ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_stateid; int save_stateid; int current_fh; int save_fh; } ;
typedef int stateid_t ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd4_compound_state*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nfsd4_compound_state*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
      union nfsd4_op_u *VAR_5)
{
 FUNC_2(&VAR_4->save_fh, &VAR_4->current_fh);
 if (FUNC_0(VAR_4, VAR_0)) {
  FUNC_3(&VAR_4->save_stateid, &VAR_4->current_stateid, sizeof(stateid_t));
  FUNC_1(VAR_4, VAR_1);
 }
 return VAR_2;
}
