
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_net {unsigned short nfs_callback_tcpport; unsigned short nfs_callback_tcpport6; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct nfs_client {scalar_t__ cl_state; int cl_confirm; int cl_clientid; TYPE_1__ cl_addr; int cl_net; } ;
struct nfs4_setclientid_res {int confirm; int clientid; } ;
struct cred {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nfs_net* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfs_client*,struct nfs_client**,struct cred const*) ;
 int FUNC_2 (struct nfs_client*,int ,unsigned short,struct cred const*,struct nfs4_setclientid_res*) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_client*) ;
 int VAR_2 ;

int FUNC_5(struct nfs_client *VAR_3,
       struct nfs_client **VAR_4,
       const struct cred *VAR_5)
{
 struct nfs4_setclientid_res VAR_6 = {
  .clientid = VAR_3->cl_clientid,
  .confirm = VAR_3->cl_confirm,
 };
 struct nfs_net *VAR_7 = FUNC_0(VAR_3->cl_net, VAR_2);
 unsigned short VAR_8;
 int VAR_9;

 VAR_8 = VAR_7->nfs_callback_tcpport;
 if (VAR_3->cl_addr.ss_family == VAR_0)
  VAR_8 = VAR_7->nfs_callback_tcpport6;

 VAR_9 = FUNC_2(VAR_3, VAR_1, VAR_8, VAR_5, &VAR_6);
 if (VAR_9 != 0)
  goto out;
 VAR_3->cl_clientid = VAR_6.clientid;
 VAR_3->cl_confirm = VAR_6.confirm;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_9 == 0) {


  FUNC_4(*VAR_4);


  if (VAR_3->cl_state)
   FUNC_3(VAR_3);
 }
out:
 return VAR_9;
}
