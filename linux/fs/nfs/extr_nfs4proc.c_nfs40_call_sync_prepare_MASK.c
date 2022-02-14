
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs4_call_sync_data {int seq_res; int seq_args; TYPE_1__* seq_server; } ;
struct TYPE_2__ {int nfs_client; } ;


 int FUNC_0 (int ,int ,int ,struct rpc_task*) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs4_call_sync_data *VAR_2 = VAR_1;
 FUNC_0(VAR_2->seq_server->nfs_client,
    VAR_2->seq_args, VAR_2->seq_res, VAR_0);
}
