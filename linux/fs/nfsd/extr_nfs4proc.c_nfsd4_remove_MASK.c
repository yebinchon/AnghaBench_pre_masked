
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_remove {int rm_cinfo; int rm_namelen; int rm_name; } ;
union nfsd4_op_u {struct nfsd4_remove remove; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct svc_rqst*,int *,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_1, struct nfsd4_compound_state *VAR_2,
      union nfsd4_op_u *VAR_3)
{
 struct nfsd4_remove *VAR_4 = &VAR_3->remove;
 __be32 VAR_5;

 if (FUNC_3(FUNC_0(VAR_1)))
  return VAR_0;
 VAR_5 = FUNC_2(VAR_1, &VAR_2->current_fh, 0,
        VAR_4->rm_name, VAR_4->rm_namelen);
 if (!VAR_5) {
  FUNC_1(&VAR_2->current_fh);
  FUNC_4(&VAR_4->rm_cinfo, &VAR_2->current_fh);
 }
 return VAR_5;
}
