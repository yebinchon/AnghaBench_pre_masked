
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task_setup {int flags; struct nfs4_get_lease_time_data* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_message {struct nfs4_get_lease_time_res* rpc_resp; struct nfs4_get_lease_time_args* rpc_argp; int * rpc_proc; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_client {int cl_rpcclient; } ;
struct nfs4_get_lease_time_res {int lr_seq_res; struct nfs_fsinfo* lr_fsinfo; } ;
struct nfs4_get_lease_time_data {struct nfs_client* clp; struct nfs4_get_lease_time_res* res; struct nfs4_get_lease_time_args* args; } ;
struct nfs4_get_lease_time_args {int la_seq_args; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task_setup*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ,int) ;
 int * VAR_3 ;

int FUNC_2(struct nfs_client *VAR_4, struct nfs_fsinfo *VAR_5)
{
 struct nfs4_get_lease_time_args VAR_6;
 struct nfs4_get_lease_time_res VAR_7 = {
  .lr_fsinfo = VAR_5,
 };
 struct nfs4_get_lease_time_data VAR_8 = {
  .args = &VAR_6,
  .res = &VAR_7,
  .clp = VAR_4,
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_3[VAR_0],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };
 struct rpc_task_setup VAR_10 = {
  .rpc_client = VAR_4->cl_rpcclient,
  .rpc_message = &VAR_9,
  .callback_ops = &VAR_2,
  .callback_data = &VAR_8,
  .flags = VAR_1,
 };

 FUNC_1(&VAR_6.la_seq_args, &VAR_7.lr_seq_res, 0, 1);
 return FUNC_0(&VAR_10);
}
