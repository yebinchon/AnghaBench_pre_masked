
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_message {TYPE_6__* rpc_resp; TYPE_5__* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; int s_dev; TYPE_2__* nfs_client; } ;
struct TYPE_12__ {int seq_res; } ;
struct TYPE_10__ {int s_dev; int id; int clientid; } ;
struct TYPE_11__ {int seq_args; TYPE_4__ lock_owner; } ;
struct nfs_release_lockowner_data {TYPE_6__ res; TYPE_5__ args; struct nfs_server* server; struct nfs4_lock_state* lsp; } ;
struct TYPE_9__ {int owner_id; } ;
struct nfs4_lock_state {TYPE_3__ ls_seqid; } ;
struct TYPE_8__ {int cl_clientid; TYPE_1__* cl_mvops; } ;
struct TYPE_7__ {scalar_t__ minor_version; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct nfs_release_lockowner_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct rpc_message*,int ,int *,struct nfs_release_lockowner_data*) ;

__attribute__((used)) static void
FUNC_3(struct nfs_server *VAR_4, struct nfs4_lock_state *VAR_5)
{
 struct nfs_release_lockowner_data *VAR_6;
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_1],
 };

 if (VAR_4->nfs_client->cl_mvops->minor_version != 0)
  return;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;
 VAR_6->lsp = VAR_5;
 VAR_6->server = VAR_4;
 VAR_6->args.lock_owner.clientid = VAR_4->nfs_client->cl_clientid;
 VAR_6->args.lock_owner.id = VAR_5->ls_seqid.owner_id;
 VAR_6->args.lock_owner.s_dev = VAR_4->s_dev;

 VAR_7.rpc_argp = &VAR_6->args;
 VAR_7.rpc_resp = &VAR_6->res;
 FUNC_1(&VAR_6->args.seq_args, &VAR_6->res.seq_res, 0, 0);
 FUNC_2(VAR_4->client, &VAR_7, 0, &VAR_3, VAR_6);
}
