
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {int nfs_client; int * cache_consistency_bitmask; } ;
struct TYPE_4__ {int seq_res; struct nfs_server* server; int * fattr; } ;
struct TYPE_3__ {int seq_args; int * bitmask; } ;
struct nfs_pgio_header {TYPE_2__ res; TYPE_1__ args; int timestamp; scalar_t__ pgio_done_cb; int inode; } ;


 size_t VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int,int ) ;
 int * VAR_2 ;
 int FUNC_2 (int ,struct rpc_clnt**,struct rpc_message*,struct nfs_pgio_header*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct nfs_pgio_header*) ;

__attribute__((used)) static void FUNC_4(struct nfs_pgio_header *VAR_4,
      struct rpc_message *VAR_5,
      struct rpc_clnt **VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_0(VAR_4->inode);

 if (!FUNC_3(VAR_4)) {
  VAR_4->args.bitmask = ((void*)0);
  VAR_4->res.fattr = ((void*)0);
 } else
  VAR_4->args.bitmask = VAR_7->cache_consistency_bitmask;

 if (!VAR_4->pgio_done_cb)
  VAR_4->pgio_done_cb = VAR_3;
 VAR_4->res.server = VAR_7;
 VAR_4->timestamp = VAR_1;

 VAR_5->rpc_proc = &VAR_2[VAR_0];
 FUNC_1(&VAR_4->args.seq_args, &VAR_4->res.seq_res, 1, 0);
 FUNC_2(VAR_7->nfs_client, VAR_6, VAR_5, VAR_4);
}
