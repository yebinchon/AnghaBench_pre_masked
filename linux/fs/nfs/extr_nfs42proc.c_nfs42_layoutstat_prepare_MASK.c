
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct pnfs_layout_hdr {int plh_stateid; } ;
struct nfs_server {int nfs_client; } ;
struct TYPE_5__ {int seq_res; } ;
struct TYPE_4__ {int seq_args; int stateid; } ;
struct nfs42_layoutstat_data {TYPE_2__ res; TYPE_1__ args; struct inode* inode; } ;
struct inode {int i_lock; } ;
struct TYPE_6__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pnfs_layout_hdr*) ;
 int FUNC_5 (struct rpc_task*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs42_layoutstat_data *VAR_2 = VAR_1;
 struct inode *VAR_3 = VAR_2->inode;
 struct nfs_server *VAR_4 = FUNC_1(VAR_3);
 struct pnfs_layout_hdr *VAR_5;

 FUNC_6(&VAR_3->i_lock);
 VAR_5 = FUNC_0(VAR_3)->layout;
 if (!FUNC_4(VAR_5)) {
  FUNC_7(&VAR_3->i_lock);
  FUNC_5(VAR_0, 0);
  return;
 }
 FUNC_3(&VAR_2->args.stateid, &VAR_5->plh_stateid);
 FUNC_7(&VAR_3->i_lock);
 FUNC_2(VAR_4->nfs_client, &VAR_2->args.seq_args,
       &VAR_2->res.seq_res, VAR_0);
}
