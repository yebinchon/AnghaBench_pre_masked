
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {int nfs_client; } ;
struct TYPE_4__ {int seq_res; struct nfs_server* server; } ;
struct TYPE_3__ {int seq_args; } ;
struct nfs_commit_data {TYPE_2__ res; TYPE_1__ args; int * commit_done_cb; int inode; } ;


 size_t VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *,int,int ) ;
 int * VAR_3 ;
 int FUNC_2 (int ,int ,struct rpc_clnt**,struct rpc_message*) ;

__attribute__((used)) static void FUNC_3(struct nfs_commit_data *VAR_4, struct rpc_message *VAR_5,
       struct rpc_clnt **VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_0(VAR_4->inode);

 if (VAR_4->commit_done_cb == ((void*)0))
  VAR_4->commit_done_cb = VAR_2;
 VAR_4->res.server = VAR_7;
 VAR_5->rpc_proc = &VAR_3[VAR_0];
 FUNC_1(&VAR_4->args.seq_args, &VAR_4->res.seq_res, 1, 0);
 FUNC_2(VAR_7->nfs_client, VAR_1, VAR_6, VAR_5);
}
