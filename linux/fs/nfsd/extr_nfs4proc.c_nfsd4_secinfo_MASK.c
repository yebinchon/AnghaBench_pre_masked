
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_secinfo {struct svc_export* si_exp; int si_namelen; int si_name; } ;
union nfsd4_op_u {struct nfsd4_secinfo secinfo; } ;
struct svc_rqst {int dummy; } ;
struct svc_export {int dummy; } ;
struct nfsd4_compound_state {int current_fh; scalar_t__ minorversion; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct svc_export*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,int *,int ,int ,struct svc_export**,struct dentry**) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
       union nfsd4_op_u *VAR_5)
{
 struct nfsd4_secinfo *VAR_6 = &VAR_5->secinfo;
 struct svc_export *VAR_7;
 struct dentry *VAR_8;
 __be32 VAR_9;

 VAR_9 = FUNC_5(VAR_3, &VAR_4->current_fh, VAR_1, VAR_0);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_6(VAR_3, &VAR_4->current_fh,
        VAR_6->si_name, VAR_6->si_namelen,
        &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;
 FUNC_4(&VAR_4->current_fh);
 if (FUNC_0(VAR_8)) {
  FUNC_2(VAR_7);
  VAR_9 = VAR_2;
 } else
  VAR_6->si_exp = VAR_7;
 FUNC_1(VAR_8);
 if (VAR_4->minorversion)

  FUNC_3(&VAR_4->current_fh);
 return VAR_9;
}
