
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rpc_task_setup {int flags; struct nfs4_setclientid* callback_data; int * callback_ops; struct rpc_message* rpc_message; TYPE_3__* rpc_client; } ;
struct rpc_message {struct cred const* rpc_cred; struct nfs4_setclientid_res* rpc_resp; struct nfs4_setclientid* rpc_argp; int * rpc_proc; } ;
struct nfs_client {int cl_acceptor; int cl_owner_id; TYPE_3__* cl_rpcclient; int cl_ipaddr; int cl_flags; } ;
struct nfs4_setclientid_res {int dummy; } ;
struct nfs4_setclientid {scalar_t__ sc_cred; int sc_uaddr; int sc_uaddr_len; int sc_netid; int sc_netid_len; struct nfs_client* sc_clnt; int sc_prog; int * sc_verifier; } ;
struct cred {int dummy; } ;
typedef int nfs4_verifier ;
struct TYPE_6__ {TYPE_2__* cl_auth; } ;
struct TYPE_5__ {TYPE_1__* au_ops; } ;
struct TYPE_4__ {int au_name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task_setup*) ;
 int FUNC_3 (struct nfs_client*,int *) ;
 int FUNC_4 (struct nfs_client*,int ,int) ;
 int FUNC_5 (struct nfs_client*) ;
 int FUNC_6 (struct nfs_client*) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int,char*,int ,unsigned short,unsigned short) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct nfs_client*,int) ;

int FUNC_12(struct nfs_client *VAR_6, u32 VAR_7,
  unsigned short VAR_8, const struct cred *VAR_9,
  struct nfs4_setclientid_res *VAR_10)
{
 nfs4_verifier VAR_11;
 struct nfs4_setclientid VAR_12 = {
  .sc_verifier = &VAR_11,
  .sc_prog = VAR_7,
  .sc_clnt = VAR_6,
 };
 struct rpc_message VAR_13 = {
  .rpc_proc = &VAR_4[VAR_0],
  .rpc_argp = &VAR_12,
  .rpc_resp = VAR_10,
  .rpc_cred = VAR_9,
 };
 struct rpc_task_setup VAR_14 = {
  .rpc_client = VAR_6->cl_rpcclient,
  .rpc_message = &VAR_13,
  .callback_ops = &VAR_5,
  .callback_data = &VAR_12,
  .flags = VAR_3 | VAR_2,
 };
 int VAR_15;


 FUNC_3(VAR_6, &VAR_11);

 if (FUNC_10(VAR_1, &VAR_6->cl_flags))
  VAR_15 = FUNC_6(VAR_6);
 else
  VAR_15 = FUNC_5(VAR_6);

 if (VAR_15)
  goto out;


 VAR_12.sc_netid_len =
    FUNC_4(VAR_6,
      VAR_12.sc_netid,
      sizeof(VAR_12.sc_netid));
 VAR_12.sc_uaddr_len = FUNC_9(VAR_12.sc_uaddr,
    sizeof(VAR_12.sc_uaddr), "%s.%u.%u",
    VAR_6->cl_ipaddr, VAR_8 >> 8, VAR_8 & 255);

 FUNC_0("NFS call  setclientid auth=%s, '%s'\n",
  VAR_6->cl_rpcclient->cl_auth->au_ops->au_name,
  VAR_6->cl_owner_id);

 VAR_15 = FUNC_2(&VAR_14);
 if (VAR_12.sc_cred) {
  FUNC_1(VAR_6->cl_acceptor);
  VAR_6->cl_acceptor = FUNC_8(VAR_12.sc_cred);
  FUNC_7(VAR_12.sc_cred);
 }
out:
 FUNC_11(VAR_6, VAR_15);
 FUNC_0("NFS reply setclientid: %d\n", VAR_15);
 return VAR_15;
}
