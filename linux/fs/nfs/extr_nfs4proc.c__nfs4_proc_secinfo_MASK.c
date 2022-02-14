
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {struct rpc_clnt* rpc_client; int flags; struct nfs4_call_sync_data* callback_data; int callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_message {struct cred const* rpc_cred; struct nfs4_secinfo_res* rpc_resp; struct nfs4_secinfo_arg* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct qstr {int name; } ;
struct nfs_client {struct rpc_clnt* cl_rpcclient; TYPE_1__* cl_mvops; } ;
struct nfs4_secinfo_res {int seq_res; struct nfs4_secinfo_flavors* flavors; } ;
struct nfs4_secinfo_flavors {int dummy; } ;
struct nfs4_secinfo_arg {int seq_args; struct qstr const* name; int dir_fh; } ;
struct nfs4_call_sync_data {int * seq_res; int * seq_args; TYPE_2__* seq_server; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {struct nfs_client* nfs_client; struct rpc_clnt* client; } ;
struct TYPE_3__ {int call_sync_ops; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct rpc_task_setup*) ;
 struct cred* FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int * VAR_3 ;
 int FUNC_6 (struct nfs_client*,int ,struct rpc_clnt**,struct rpc_message*) ;
 int FUNC_7 (struct cred const*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, const struct qstr *VAR_5, struct nfs4_secinfo_flavors *VAR_6, bool VAR_7)
{
 int VAR_8;
 struct rpc_clnt *VAR_9 = FUNC_1(VAR_4)->client;
 struct nfs_client *VAR_10 = FUNC_1(VAR_4)->nfs_client;
 struct nfs4_secinfo_arg VAR_11 = {
  .dir_fh = FUNC_0(VAR_4),
  .name = VAR_5,
 };
 struct nfs4_secinfo_res VAR_12 = {
  .flavors = VAR_6,
 };
 struct rpc_message VAR_13 = {
  .rpc_proc = &VAR_3[VAR_0],
  .rpc_argp = &VAR_11,
  .rpc_resp = &VAR_12,
 };
 struct nfs4_call_sync_data VAR_14 = {
  .seq_server = FUNC_1(VAR_4),
  .seq_args = &VAR_11.seq_args,
  .seq_res = &VAR_12.seq_res,
 };
 struct rpc_task_setup VAR_15 = {
  .rpc_client = VAR_9,
  .rpc_message = &VAR_13,
  .callback_ops = VAR_10->cl_mvops->call_sync_ops,
  .callback_data = &VAR_14,
  .flags = VAR_2,
 };
 const struct cred *VAR_16 = ((void*)0);

 if (VAR_7) {
  VAR_9 = VAR_10->cl_rpcclient;
  VAR_15.rpc_client = VAR_9;

  VAR_16 = FUNC_4(VAR_10);
  VAR_13.rpc_cred = VAR_16;
 }

 FUNC_2("NFS call  secinfo %s\n", VAR_5->name);

 FUNC_6(VAR_10, VAR_1, &VAR_9, &VAR_13);
 FUNC_5(&VAR_11.seq_args, &VAR_12.seq_res, 0, 0);
 VAR_8 = FUNC_3(&VAR_15);

 FUNC_2("NFS reply  secinfo: %d\n", VAR_8);

 FUNC_7(VAR_16);
 return VAR_8;
}
