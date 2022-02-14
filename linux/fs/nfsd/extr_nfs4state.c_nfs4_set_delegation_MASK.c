
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct nfs4_file {int fi_delegees; struct nfsd_file* fi_deleg_file; int fi_lock; scalar_t__ fi_had_conflict; } ;
struct nfs4_delegation {int dl_stid; int dl_clnt_odstate; } ;
struct nfs4_clnt_odstate {int dummy; } ;
struct nfs4_client {int dummy; } ;
struct file_lock {int fl_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs4_delegation* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct nfs4_delegation* FUNC_2 (struct nfs4_client*,struct nfs4_file*,struct svc_fh*,struct nfs4_clnt_odstate*) ;
 struct nfsd_file* FUNC_3 (struct nfs4_file*) ;
 int FUNC_4 (struct nfs4_delegation*,struct nfs4_file*) ;
 int FUNC_5 (struct file_lock*) ;
 struct file_lock* FUNC_6 (struct nfs4_delegation*,int ) ;
 scalar_t__ FUNC_7 (struct nfs4_client*,struct nfs4_file*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nfsd_file*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct nfs4_file*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int FUNC_14 (int ,int ,struct file_lock**,void**) ;

__attribute__((used)) static struct nfs4_delegation *
FUNC_15(struct nfs4_client *VAR_6, struct svc_fh *VAR_7,
      struct nfs4_file *VAR_8, struct nfs4_clnt_odstate *VAR_9)
{
 int VAR_10 = 0;
 struct nfs4_delegation *VAR_11;
 struct nfsd_file *VAR_12;
 struct file_lock *VAR_13;






 if (VAR_8->fi_had_conflict)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_3(VAR_8);
 if (!VAR_12) {

  FUNC_1(1);
  return FUNC_0(-VAR_1);
 }
 FUNC_12(&VAR_5);
 FUNC_12(&VAR_8->fi_lock);
 if (FUNC_7(VAR_6, VAR_8))
  VAR_10 = -VAR_0;
 else if (!VAR_8->fi_deleg_file) {
  VAR_8->fi_deleg_file = VAR_12;


  VAR_8->fi_delegees = 1;
  VAR_12 = ((void*)0);
 } else
  VAR_8->fi_delegees++;
 FUNC_13(&VAR_8->fi_lock);
 FUNC_13(&VAR_5);
 if (VAR_12)
  FUNC_9(VAR_12);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_10 = -VAR_2;
 VAR_11 = FUNC_2(VAR_6, VAR_8, VAR_7, VAR_9);
 if (!VAR_11)
  goto out_delegees;

 VAR_13 = FUNC_6(VAR_11, VAR_4);
 if (!VAR_13)
  goto out_clnt_odstate;

 VAR_10 = FUNC_14(VAR_8->fi_deleg_file->nf_file, VAR_13->fl_type, &VAR_13, ((void*)0));
 if (VAR_13)
  FUNC_5(VAR_13);
 if (VAR_10)
  goto out_clnt_odstate;

 FUNC_12(&VAR_5);
 FUNC_12(&VAR_8->fi_lock);
 if (VAR_8->fi_had_conflict)
  VAR_10 = -VAR_0;
 else
  VAR_10 = FUNC_4(VAR_11, VAR_8);
 FUNC_13(&VAR_8->fi_lock);
 FUNC_13(&VAR_5);

 if (VAR_10)
  goto out_unlock;

 return VAR_11;
out_unlock:
 FUNC_14(VAR_8->fi_deleg_file->nf_file, VAR_3, ((void*)0), (void **)&VAR_11);
out_clnt_odstate:
 FUNC_10(VAR_11->dl_clnt_odstate);
 FUNC_8(&VAR_11->dl_stid);
out_delegees:
 FUNC_11(VAR_8);
 return FUNC_0(VAR_10);
}
