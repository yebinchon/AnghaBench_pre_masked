
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_seqid {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_4__ {int stateid; struct nfs_seqid* seqid; int * fl; int fh; } ;
struct TYPE_3__ {struct nfs_seqid* seqid; } ;
struct nfs4_unlockdata {TYPE_2__ arg; int server; int fl; int l_ctx; int ctx; struct nfs4_lock_state* lsp; TYPE_1__ res; } ;
struct nfs4_state {int state_lock; struct inode* inode; } ;
struct nfs4_lock_state {int ls_stateid; struct nfs4_state* ls_state; } ;
struct inode {int dummy; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_open_context*) ;
 struct nfs4_unlockdata* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct file_lock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct nfs_open_context*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct nfs4_unlockdata *FUNC_10(struct file_lock *VAR_1,
  struct nfs_open_context *VAR_2,
  struct nfs4_lock_state *VAR_3,
  struct nfs_seqid *VAR_4)
{
 struct nfs4_unlockdata *VAR_5;
 struct nfs4_state *VAR_6 = VAR_3->ls_state;
 struct inode *VAR_7 = VAR_6->inode;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->arg.fh = FUNC_0(VAR_7);
 VAR_5->arg.fl = &VAR_5->fl;
 VAR_5->arg.seqid = VAR_4;
 VAR_5->res.seqid = VAR_4;
 VAR_5->lsp = VAR_3;

 VAR_5->ctx = FUNC_2(VAR_2);
 VAR_5->l_ctx = FUNC_7(VAR_2);
 FUNC_5(&VAR_5->fl);
 FUNC_4(&VAR_5->fl, VAR_1);
 VAR_5->server = FUNC_1(VAR_7);
 FUNC_8(&VAR_6->state_lock);
 FUNC_6(&VAR_5->arg.stateid, &VAR_3->ls_stateid);
 FUNC_9(&VAR_6->state_lock);
 return VAR_5;
}
