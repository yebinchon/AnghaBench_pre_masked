
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfsd4_lock {scalar_t__ lk_new_lock_seqid; int lk_new_owner; } ;
struct TYPE_7__ {int fh_dentry; } ;
struct nfsd4_compound_state {int minorversion; TYPE_3__ current_fh; } ;
struct TYPE_6__ {struct nfs4_client* so_client; } ;
struct nfs4_openowner {TYPE_2__ oo_owner; } ;
struct TYPE_5__ {struct nfs4_file* sc_file; } ;
struct nfs4_ol_stateid {int st_stateowner; TYPE_1__ st_stid; } ;
struct TYPE_8__ {scalar_t__ so_seqid; } ;
struct nfs4_lockowner {TYPE_4__ lo_owner; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_client {int dummy; } ;
struct inode {int dummy; } ;
typedef int __be32 ;


 struct nfs4_lockowner* FUNC_0 (unsigned int,struct nfs4_client*,struct nfs4_ol_stateid*,struct nfsd4_lock*) ;
 struct inode* FUNC_1 (int ) ;
 struct nfs4_lockowner* FUNC_2 (struct nfs4_client*,int *) ;
 struct nfs4_ol_stateid* FUNC_3 (struct nfs4_lockowner*,struct nfs4_file*,struct inode*,struct nfs4_ol_stateid*,int*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs4_openowner* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int *) ;

__attribute__((used)) static __be32
FUNC_7(struct nfsd4_compound_state *VAR_3,
       struct nfs4_ol_stateid *VAR_4,
       struct nfsd4_lock *VAR_5,
       struct nfs4_ol_stateid **VAR_6, bool *VAR_7)
{
 __be32 VAR_8;
 struct nfs4_file *VAR_9 = VAR_4->st_stid.sc_file;
 struct nfs4_openowner *VAR_10 = FUNC_5(VAR_4->st_stateowner);
 struct nfs4_client *VAR_11 = VAR_10->oo_owner.so_client;
 struct inode *VAR_12 = FUNC_1(VAR_3->current_fh.fh_dentry);
 struct nfs4_lockowner *VAR_13;
 struct nfs4_ol_stateid *VAR_14;
 unsigned int VAR_15;

 VAR_13 = FUNC_2(VAR_11, &VAR_5->lk_new_owner);
 if (!VAR_13) {
  VAR_15 = FUNC_6(&VAR_5->lk_new_owner);
  VAR_13 = FUNC_0(VAR_15, VAR_11, VAR_4, VAR_5);
  if (VAR_13 == ((void*)0))
   return VAR_2;
 } else {

  VAR_8 = VAR_1;
  if (!VAR_3->minorversion &&
      VAR_5->lk_new_lock_seqid != VAR_13->lo_owner.so_seqid)
   goto out;
 }

 VAR_14 = FUNC_3(VAR_13, VAR_9, VAR_12, VAR_4, VAR_7);
 if (VAR_14 == ((void*)0)) {
  VAR_8 = VAR_2;
  goto out;
 }

 VAR_8 = VAR_0;
 *VAR_6 = VAR_14;
out:
 FUNC_4(&VAR_13->lo_owner);
 return VAR_8;
}
