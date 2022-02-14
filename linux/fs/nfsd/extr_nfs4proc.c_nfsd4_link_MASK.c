
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_link {int li_cinfo; int li_namelen; int li_name; } ;
union nfsd4_op_u {struct nfsd4_link link; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; int save_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int *,int ,int ,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
    union nfsd4_op_u *VAR_2)
{
 struct nfsd4_link *VAR_3 = &VAR_2->link;
 __be32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_1->current_fh,
      VAR_3->li_name, VAR_3->li_namelen, &VAR_1->save_fh);
 if (!VAR_4)
  FUNC_1(&VAR_3->li_cinfo, &VAR_1->current_fh);
 return VAR_4;
}
