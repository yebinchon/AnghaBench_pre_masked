
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct pnfs_layout_hdr {int dummy; } ;
struct TYPE_10__ {int seq_res; TYPE_3__* server; int * lr_res; } ;
struct TYPE_9__ {int seq_args; TYPE_2__* lr_args; } ;
struct TYPE_6__ {int roc; } ;
struct nfs4_delegreturndata {TYPE_5__ res; TYPE_4__ args; int inode; TYPE_1__ lr; } ;
struct TYPE_8__ {int nfs_client; } ;
struct TYPE_7__ {struct pnfs_layout_hdr* layout; } ;


 int FUNC_0 (int ,int *,int *,struct rpc_task*) ;
 scalar_t__ FUNC_1 (int ,struct rpc_task*) ;
 int FUNC_2 (struct pnfs_layout_hdr*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs4_delegreturndata *VAR_2;
 struct pnfs_layout_hdr *VAR_3;

 VAR_2 = (struct nfs4_delegreturndata *)VAR_1;

 if (!VAR_2->lr.roc && FUNC_1(VAR_2->inode, VAR_0))
  return;

 VAR_3 = VAR_2->args.lr_args ? VAR_2->args.lr_args->layout : ((void*)0);
 if (VAR_3 && !FUNC_2(VAR_3)) {
  VAR_2->args.lr_args = ((void*)0);
  VAR_2->res.lr_res = ((void*)0);
 }

 FUNC_0(VAR_2->res.server->nfs_client,
   &VAR_2->args.seq_args,
   &VAR_2->res.seq_res,
   VAR_0);
}
