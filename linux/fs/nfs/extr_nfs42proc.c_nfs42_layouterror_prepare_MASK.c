
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct pnfs_layout_hdr {int plh_stateid; } ;
struct nfs_server {int nfs_client; } ;
struct TYPE_8__ {int seq_res; } ;
struct TYPE_7__ {unsigned int num_errors; int seq_args; TYPE_2__* errors; } ;
struct nfs42_layouterror_data {TYPE_4__ res; TYPE_3__ args; TYPE_1__* lseg; struct inode* inode; } ;
struct inode {int i_lock; } ;
struct TYPE_6__ {int stateid; } ;
struct TYPE_5__ {struct pnfs_layout_hdr* pls_layout; } ;


 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct pnfs_layout_hdr*) ;
 int FUNC_4 (struct rpc_task*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs42_layouterror_data *VAR_2 = VAR_1;
 struct inode *VAR_3 = VAR_2->inode;
 struct nfs_server *VAR_4 = FUNC_0(VAR_3);
 struct pnfs_layout_hdr *VAR_5 = VAR_2->lseg->pls_layout;
 unsigned VAR_6;

 FUNC_5(&VAR_3->i_lock);
 if (!FUNC_3(VAR_5)) {
  FUNC_6(&VAR_3->i_lock);
  FUNC_4(VAR_0, 0);
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_2->args.num_errors; VAR_6++)
  FUNC_2(&VAR_2->args.errors[VAR_6].stateid,
    &VAR_5->plh_stateid);
 FUNC_6(&VAR_3->i_lock);
 FUNC_1(VAR_4->nfs_client, &VAR_2->args.seq_args,
       &VAR_2->res.seq_res, VAR_0);
}
