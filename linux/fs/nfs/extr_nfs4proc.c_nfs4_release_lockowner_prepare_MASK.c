
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_server {TYPE_4__* nfs_client; } ;
struct TYPE_7__ {int clientid; } ;
struct TYPE_5__ {TYPE_3__ lock_owner; int seq_args; } ;
struct TYPE_6__ {int seq_res; } ;
struct nfs_release_lockowner_data {int timestamp; TYPE_1__ args; TYPE_2__ res; struct nfs_server* server; } ;
struct TYPE_8__ {int cl_clientid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,struct rpc_task*) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_1, void *VAR_2)
{
 struct nfs_release_lockowner_data *VAR_3 = VAR_2;
 struct nfs_server *VAR_4 = VAR_3->server;
 FUNC_0(VAR_4->nfs_client, &VAR_3->args.seq_args,
      &VAR_3->res.seq_res, VAR_1);
 VAR_3->args.lock_owner.clientid = VAR_4->nfs_client->cl_clientid;
 VAR_3->timestamp = VAR_0;
}
