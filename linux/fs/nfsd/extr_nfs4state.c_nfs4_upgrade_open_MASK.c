
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_open {int op_share_deny; int op_share_access; } ;
struct nfs4_ol_stateid {unsigned char st_deny_bmap; } ;
struct nfs4_file {int fi_share_deny; int fi_lock; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs4_file*,int) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct nfs4_file*,struct svc_fh*,struct nfs4_ol_stateid*,struct nfsd4_open*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*) ;
 int FUNC_3 (unsigned char,struct nfs4_ol_stateid*) ;
 int FUNC_4 (int,struct nfs4_ol_stateid*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct nfs4_ol_stateid*) ;

__attribute__((used)) static __be32
FUNC_8(struct svc_rqst *VAR_2, struct nfs4_file *VAR_3, struct svc_fh *VAR_4, struct nfs4_ol_stateid *VAR_5, struct nfsd4_open *VAR_6)
{
 __be32 VAR_7;
 unsigned char VAR_8 = VAR_5->st_deny_bmap;

 if (!FUNC_7(VAR_6->op_share_access, VAR_5))
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);


 FUNC_5(&VAR_3->fi_lock);
 VAR_7 = FUNC_0(VAR_3, VAR_6->op_share_deny);
 if (VAR_7 == VAR_1) {
  FUNC_4(VAR_6->op_share_deny, VAR_5);
  VAR_3->fi_share_deny |=
    (VAR_6->op_share_deny & VAR_0);
 }
 FUNC_6(&VAR_3->fi_lock);

 if (VAR_7 != VAR_1)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_6);
 if (VAR_7 != VAR_1)
  FUNC_3(VAR_8, VAR_5);
 return VAR_7;
}
