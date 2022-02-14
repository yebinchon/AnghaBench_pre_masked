
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int caps; } ;
struct nfs_open_context {struct dentry* dentry; struct nfs4_state* state; } ;
struct nfs4_state_owner {int so_reclaim_seqcount; int so_cred; struct nfs_server* so_server; } ;
struct nfs4_state {scalar_t__ inode; int flags; } ;
struct TYPE_2__ {int rflags; int seq_res; } ;
struct nfs4_opendata {TYPE_1__ o_res; int cancelled; int lgp; struct dentry* dir; struct dentry* dentry; struct nfs4_state_owner* owner; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;


 scalar_t__ FUNC_0 (struct nfs4_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nfs4_state*) ;
 int FUNC_2 (struct nfs_open_context*) ;
 struct nfs4_state* FUNC_3 (struct nfs4_opendata*) ;
 int FUNC_4 (struct nfs4_opendata*,struct nfs_open_context*) ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 struct dentry* FUNC_9 (int ,struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,struct nfs4_opendata*,struct nfs4_state*,int ,int) ;
 int FUNC_13 (struct nfs_server*,struct nfs4_state*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct nfs_open_context*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct dentry*,int ) ;
 int FUNC_18 (scalar_t__,int ,struct nfs_open_context*) ;
 unsigned int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,unsigned int) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct nfs4_opendata *VAR_4,
  int VAR_5, struct nfs_open_context *VAR_6)
{
 struct nfs4_state_owner *VAR_7 = VAR_4->owner;
 struct nfs_server *VAR_8 = VAR_7->so_server;
 struct dentry *VAR_9;
 struct nfs4_state *VAR_10;
 fmode_t VAR_11 = FUNC_2(VAR_6);
 unsigned int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_19(&VAR_7->so_reclaim_seqcount);

 VAR_13 = FUNC_4(VAR_4, VAR_6);
 if (VAR_13 != 0)
  goto out;

 VAR_10 = FUNC_3(VAR_4);
 VAR_13 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10))
  goto out;
 VAR_6->state = VAR_10;
 if (VAR_8->caps & VAR_1)
  FUNC_21(VAR_3, &VAR_10->flags);
 if (VAR_4->o_res.rflags & VAR_0)
  FUNC_21(VAR_2, &VAR_10->flags);

 VAR_9 = VAR_4->dentry;
 if (FUNC_8(VAR_9)) {
  struct dentry *VAR_14;
  FUNC_5(VAR_9);
  VAR_14 = FUNC_6(VAR_9, VAR_10->inode);
  if (!VAR_14)
   VAR_14 = FUNC_9(FUNC_11(VAR_10->inode), VAR_9);

  if (VAR_14) {
   FUNC_10(VAR_6->dentry);
   VAR_6->dentry = VAR_9 = VAR_14;
  }
  FUNC_17(VAR_9,
    FUNC_16(FUNC_7(VAR_4->dir)));
 }


 FUNC_18(VAR_10->inode, VAR_4->lgp, VAR_6);

 VAR_13 = FUNC_12(VAR_7->so_cred, VAR_4, VAR_10,
   VAR_11, VAR_5);
 if (VAR_13 != 0)
  goto out;

 if (FUNC_7(VAR_9) == VAR_10->inode) {
  FUNC_15(VAR_6);
  if (FUNC_20(&VAR_7->so_reclaim_seqcount, VAR_12))
   FUNC_13(VAR_8, VAR_10);
 }

out:
 if (!VAR_4->cancelled)
  FUNC_14(&VAR_4->o_res.seq_res);
 return VAR_13;
}
