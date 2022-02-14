
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_net {unsigned short nfs_callback_tcpport; unsigned short nfs_callback_tcpport6; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct nfs_client {int cl_state; int cl_confirm; int cl_clientid; TYPE_1__ cl_addr; int cl_net; } ;
struct nfs4_setclientid_res {int confirm; int clientid; } ;
struct cred {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 struct nfs_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfs_client*,int ,unsigned short,struct cred const*,struct nfs4_setclientid_res*) ;
 int FUNC_3 (struct nfs_client*,struct nfs4_setclientid_res*,struct cred const*) ;
 int FUNC_4 (struct nfs_client*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct nfs_client *VAR_4, const struct cred *VAR_5)
{
 struct nfs4_setclientid_res VAR_6 = {
  .clientid = VAR_4->cl_clientid,
  .confirm = VAR_4->cl_confirm,
 };
 unsigned short VAR_7;
 int VAR_8;
 struct nfs_net *VAR_9 = FUNC_1(VAR_4->cl_net, VAR_3);

 if (FUNC_6(VAR_1, &VAR_4->cl_state))
  goto do_confirm;
 VAR_7 = VAR_9->nfs_callback_tcpport;
 if (VAR_4->cl_addr.ss_family == VAR_0)
  VAR_7 = VAR_9->nfs_callback_tcpport6;

 VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_7, VAR_5, &VAR_6);
 if (VAR_8 != 0)
  goto out;
 VAR_4->cl_clientid = VAR_6.clientid;
 VAR_4->cl_confirm = VAR_6.confirm;
 FUNC_5(VAR_1, &VAR_4->cl_state);
do_confirm:
 VAR_8 = FUNC_3(VAR_4, &VAR_6, VAR_5);
 if (VAR_8 != 0)
  goto out;
 FUNC_0(VAR_1, &VAR_4->cl_state);
 FUNC_4(VAR_4);
out:
 return VAR_8;
}
