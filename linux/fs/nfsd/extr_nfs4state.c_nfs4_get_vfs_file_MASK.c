
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd_file {int dummy; } ;
struct nfsd4_open {int op_share_deny; int op_share_access; } ;
struct nfs4_ol_stateid {unsigned char st_access_bmap; unsigned char st_deny_bmap; } ;
struct nfs4_file {int fi_share_deny; int fi_lock; struct nfsd_file** fi_fds; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct nfs4_file*,int) ;
 scalar_t__ FUNC_4 (struct nfs4_file*,int ) ;
 int FUNC_5 (struct nfs4_file*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_fh*,int,struct nfsd_file**) ;
 int FUNC_8 (struct nfsd_file*) ;
 int FUNC_9 (int ,struct nfs4_ol_stateid*) ;
 int FUNC_10 (int ,struct nfs4_ol_stateid*) ;
 int FUNC_11 (int,struct nfs4_ol_stateid*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static __be32 FUNC_14(struct svc_rqst *VAR_2, struct nfs4_file *VAR_3,
  struct svc_fh *VAR_4, struct nfs4_ol_stateid *VAR_5,
  struct nfsd4_open *VAR_6)
{
 struct nfsd_file *VAR_7 = ((void*)0);
 __be32 VAR_8;
 int VAR_9 = FUNC_2(VAR_6->op_share_access);
 int VAR_10 = FUNC_1(VAR_6->op_share_access);
 unsigned char VAR_11, VAR_12;

 FUNC_12(&VAR_3->fi_lock);





 VAR_8 = FUNC_3(VAR_3, VAR_6->op_share_deny);
 if (VAR_8 != VAR_1) {
  FUNC_13(&VAR_3->fi_lock);
  goto out;
 }


 VAR_8 = FUNC_4(VAR_3, VAR_6->op_share_access);
 if (VAR_8 != VAR_1) {
  FUNC_13(&VAR_3->fi_lock);
  goto out;
 }


 VAR_11 = VAR_5->st_access_bmap;
 FUNC_10(VAR_6->op_share_access, VAR_5);


 VAR_12 = VAR_5->st_deny_bmap;
 FUNC_11(VAR_6->op_share_deny, VAR_5);
 VAR_3->fi_share_deny |= (VAR_6->op_share_deny & VAR_0);

 if (!VAR_3->fi_fds[VAR_9]) {
  FUNC_13(&VAR_3->fi_lock);
  VAR_8 = FUNC_7(VAR_2, VAR_4, VAR_10, &VAR_7);
  if (VAR_8)
   goto out_put_access;
  FUNC_12(&VAR_3->fi_lock);
  if (!VAR_3->fi_fds[VAR_9]) {
   VAR_3->fi_fds[VAR_9] = VAR_7;
   VAR_7 = ((void*)0);
  }
 }
 FUNC_13(&VAR_3->fi_lock);
 if (VAR_7)
  FUNC_8(VAR_7);

 VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_6);
 if (VAR_8)
  goto out_put_access;
out:
 return VAR_8;
out_put_access:
 VAR_5->st_access_bmap = VAR_11;
 FUNC_5(VAR_3, VAR_6->op_share_access);
 FUNC_9(FUNC_0(VAR_12), VAR_5);
 goto out;
}
