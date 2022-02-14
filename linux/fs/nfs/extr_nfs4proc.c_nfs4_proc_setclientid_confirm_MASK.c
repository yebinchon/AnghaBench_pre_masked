
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_message {struct cred const* rpc_cred; struct nfs4_setclientid_res* rpc_argp; int * rpc_proc; } ;
struct nfs_client {TYPE_3__* cl_rpcclient; int cl_clientid; } ;
struct nfs4_setclientid_res {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cl_auth; } ;
struct TYPE_5__ {TYPE_1__* au_ops; } ;
struct TYPE_4__ {int au_name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_3__*,struct rpc_message*,int) ;
 int FUNC_2 (struct nfs_client*,int) ;

int FUNC_3(struct nfs_client *VAR_4,
  struct nfs4_setclientid_res *VAR_5,
  const struct cred *VAR_6)
{
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_3[VAR_0],
  .rpc_argp = VAR_5,
  .rpc_cred = VAR_6,
 };
 int VAR_8;

 FUNC_0("NFS call  setclientid_confirm auth=%s, (client ID %llx)\n",
  VAR_4->cl_rpcclient->cl_auth->au_ops->au_name,
  VAR_4->cl_clientid);
 VAR_8 = FUNC_1(VAR_4->cl_rpcclient, &VAR_7,
          VAR_2 | VAR_1);
 FUNC_2(VAR_4, VAR_8);
 FUNC_0("NFS reply setclientid_confirm: %d\n", VAR_8);
 return VAR_8;
}
