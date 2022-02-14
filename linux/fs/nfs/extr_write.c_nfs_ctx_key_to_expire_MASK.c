
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_cred {TYPE_3__* cr_ops; } ;
struct rpc_auth {TYPE_2__* au_ops; } ;
struct nfs_open_context {struct rpc_cred* ll_cred; int cred; } ;
struct inode {int dummy; } ;
struct auth_cred {int cred; } ;
struct TYPE_8__ {TYPE_1__* client; } ;
struct TYPE_7__ {scalar_t__ (* crkey_timeout ) (struct rpc_cred*) ;int (* crmatch ) (struct auth_cred*,struct rpc_cred*,int ) ;} ;
struct TYPE_6__ {struct rpc_cred* (* lookup_cred ) (struct rpc_auth*,struct auth_cred*,int ) ;} ;
struct TYPE_5__ {struct rpc_auth* cl_auth; } ;


 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_cred*) ;
 int FUNC_3 (struct auth_cred*,struct rpc_cred*,int ) ;
 struct rpc_cred* FUNC_4 (struct rpc_auth*,struct auth_cred*,int ) ;
 scalar_t__ FUNC_5 (struct rpc_cred*) ;

bool FUNC_6(struct nfs_open_context *VAR_0, struct inode *VAR_1)
{
 struct rpc_auth *VAR_2 = FUNC_1(VAR_1)->client->cl_auth;
 struct rpc_cred *VAR_3 = VAR_0->ll_cred;
 struct auth_cred VAR_4 = {
  .cred = VAR_0->cred,
 };

 if (VAR_3 && !VAR_3->cr_ops->crmatch(&VAR_4, VAR_3, 0)) {
  FUNC_2(VAR_3);
  VAR_0->ll_cred = ((void*)0);
  VAR_3 = ((void*)0);
 }
 if (!VAR_3)
  VAR_3 = VAR_2->au_ops->lookup_cred(VAR_2, &VAR_4, 0);
 if (!VAR_3 || FUNC_0(VAR_3))
  return 1;
 VAR_0->ll_cred = VAR_3;
 return !!(VAR_3->cr_ops->crkey_timeout &&
    VAR_3->cr_ops->crkey_timeout(VAR_3));
}
