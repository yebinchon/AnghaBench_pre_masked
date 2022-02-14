
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_call_sync_data* callback_data; int callback_ops; struct rpc_message* rpc_message; struct rpc_clnt* rpc_client; } ;
struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {TYPE_1__* cl_mvops; } ;
struct nfs4_sequence_res {int dummy; } ;
struct nfs4_sequence_args {int dummy; } ;
struct nfs4_call_sync_data {struct nfs4_sequence_res* seq_res; struct nfs4_sequence_args* seq_args; struct nfs_server* seq_server; } ;
struct TYPE_2__ {int call_sync_ops; } ;


 int FUNC_0 (struct rpc_task_setup*) ;

__attribute__((used)) static int FUNC_1(struct rpc_clnt *VAR_0,
       struct nfs_server *VAR_1,
       struct rpc_message *VAR_2,
       struct nfs4_sequence_args *VAR_3,
       struct nfs4_sequence_res *VAR_4)
{
 struct nfs_client *VAR_5 = VAR_1->nfs_client;
 struct nfs4_call_sync_data VAR_6 = {
  .seq_server = VAR_1,
  .seq_args = VAR_3,
  .seq_res = VAR_4,
 };
 struct rpc_task_setup VAR_7 = {
  .rpc_client = VAR_0,
  .rpc_message = VAR_2,
  .callback_ops = VAR_5->cl_mvops->call_sync_ops,
  .callback_data = &VAR_6
 };

 return FUNC_0(&VAR_7);
}
