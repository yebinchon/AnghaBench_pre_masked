
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd4_open {struct nfs4_ol_stateid* op_stp; struct nfs4_openowner* op_openowner; } ;
struct TYPE_6__ {TYPE_1__* so_client; int so_stateids; } ;
struct nfs4_openowner {TYPE_3__ oo_owner; } ;
struct TYPE_5__ {struct nfs4_file* sc_file; int sc_type; int sc_count; } ;
struct nfs4_ol_stateid {int st_mutex; TYPE_2__ st_stid; int st_perfile; int st_perstateowner; int * st_openstp; scalar_t__ st_deny_bmap; scalar_t__ st_access_bmap; int st_stateowner; int st_locks; } ;
struct nfs4_file {int fi_lock; int fi_stateids; } ;
struct TYPE_4__ {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_file*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 struct nfs4_ol_stateid* FUNC_8 (struct nfs4_file*,struct nfsd4_open*) ;
 scalar_t__ FUNC_9 (struct nfs4_ol_stateid*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct nfs4_ol_stateid *
FUNC_13(struct nfs4_file *VAR_3, struct nfsd4_open *VAR_4)
{

 struct nfs4_openowner *VAR_5 = VAR_4->op_openowner;
 struct nfs4_ol_stateid *VAR_6 = ((void*)0);
 struct nfs4_ol_stateid *VAR_7;

 VAR_7 = VAR_4->op_stp;

 FUNC_3(&VAR_7->st_mutex);
 FUNC_4(&VAR_7->st_mutex, VAR_1);

retry:
 FUNC_11(&VAR_5->oo_owner.so_client->cl_lock);
 FUNC_11(&VAR_3->fi_lock);

 VAR_6 = FUNC_8(VAR_3, VAR_4);
 if (VAR_6)
  goto out_unlock;

 VAR_4->op_stp = ((void*)0);
 FUNC_10(&VAR_7->st_stid.sc_count);
 VAR_7->st_stid.sc_type = VAR_0;
 FUNC_0(&VAR_7->st_locks);
 VAR_7->st_stateowner = FUNC_6(&VAR_5->oo_owner);
 FUNC_1(VAR_3);
 VAR_7->st_stid.sc_file = VAR_3;
 VAR_7->st_access_bmap = 0;
 VAR_7->st_deny_bmap = 0;
 VAR_7->st_openstp = ((void*)0);
 FUNC_2(&VAR_7->st_perstateowner, &VAR_5->oo_owner.so_stateids);
 FUNC_2(&VAR_7->st_perfile, &VAR_3->fi_stateids);

out_unlock:
 FUNC_12(&VAR_3->fi_lock);
 FUNC_12(&VAR_5->oo_owner.so_client->cl_lock);
 if (VAR_6) {

  if (FUNC_9(VAR_6) != VAR_2) {
   FUNC_7(&VAR_6->st_stid);
   goto retry;
  }

  FUNC_5(&VAR_7->st_mutex);
  VAR_7 = VAR_6;
 }
 return VAR_7;
}
