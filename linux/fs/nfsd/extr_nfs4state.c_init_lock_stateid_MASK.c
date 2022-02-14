
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nfs4_file* sc_file; int sc_type; int sc_count; } ;
struct nfs4_ol_stateid {int st_mutex; TYPE_1__ st_stid; int st_perfile; int st_perstateowner; int st_locks; struct nfs4_ol_stateid* st_openstp; int st_deny_bmap; scalar_t__ st_access_bmap; int st_stateowner; } ;
struct TYPE_4__ {int so_stateids; struct nfs4_client* so_client; } ;
struct nfs4_lockowner {TYPE_2__ lo_owner; } ;
struct nfs4_file {int fi_lock; int fi_stateids; } ;
struct nfs4_client {int cl_lock; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_ol_stateid* FUNC_0 (struct nfs4_lockowner*,struct nfs4_file*) ;
 int FUNC_1 (struct nfs4_file*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (struct nfs4_ol_stateid*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct nfs4_ol_stateid *
FUNC_12(struct nfs4_ol_stateid *VAR_3, struct nfs4_lockowner *VAR_4,
    struct nfs4_file *VAR_5, struct inode *VAR_6,
    struct nfs4_ol_stateid *VAR_7)
{
 struct nfs4_client *VAR_8 = VAR_4->lo_owner.so_client;
 struct nfs4_ol_stateid *VAR_9;

 FUNC_3(&VAR_3->st_mutex);
 FUNC_4(&VAR_3->st_mutex, VAR_1);
retry:
 FUNC_10(&VAR_8->cl_lock);
 FUNC_10(&VAR_5->fi_lock);
 VAR_9 = FUNC_0(VAR_4, VAR_5);
 if (VAR_9)
  goto out_unlock;

 FUNC_9(&VAR_3->st_stid.sc_count);
 VAR_3->st_stid.sc_type = VAR_0;
 VAR_3->st_stateowner = FUNC_6(&VAR_4->lo_owner);
 FUNC_1(VAR_5);
 VAR_3->st_stid.sc_file = VAR_5;
 VAR_3->st_access_bmap = 0;
 VAR_3->st_deny_bmap = VAR_7->st_deny_bmap;
 VAR_3->st_openstp = VAR_7;
 FUNC_2(&VAR_3->st_locks, &VAR_7->st_locks);
 FUNC_2(&VAR_3->st_perstateowner, &VAR_4->lo_owner.so_stateids);
 FUNC_2(&VAR_3->st_perfile, &VAR_5->fi_stateids);
out_unlock:
 FUNC_11(&VAR_5->fi_lock);
 FUNC_11(&VAR_8->cl_lock);
 if (VAR_9) {
  if (FUNC_8(VAR_9) != VAR_2) {
   FUNC_7(&VAR_9->st_stid);
   goto retry;
  }

  FUNC_5(&VAR_3->st_mutex);
  VAR_3 = VAR_9;
 }
 return VAR_3;
}
