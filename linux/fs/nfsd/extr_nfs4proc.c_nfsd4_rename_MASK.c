
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_rename {int rn_tinfo; int rn_sinfo; int rn_tnamelen; int rn_tname; int rn_snamelen; int rn_sname; } ;
union nfsd4_op_u {struct nfsd4_rename rename; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int save_fh; int current_fh; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct svc_rqst*,int *,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
      union nfsd4_op_u *VAR_4)
{
 struct nfsd4_rename *VAR_5 = &VAR_4->rename;
 __be32 VAR_6;

 if (FUNC_2(FUNC_0(VAR_2)))
  return VAR_1;
 VAR_6 = FUNC_1(VAR_2, &VAR_3->save_fh, VAR_5->rn_sname,
        VAR_5->rn_snamelen, &VAR_3->current_fh,
        VAR_5->rn_tname, VAR_5->rn_tnamelen);
 if (VAR_6)
  return VAR_6;
 FUNC_3(&VAR_5->rn_sinfo, &VAR_3->current_fh);
 FUNC_3(&VAR_5->rn_tinfo, &VAR_3->save_fh);
 return VAR_0;
}
