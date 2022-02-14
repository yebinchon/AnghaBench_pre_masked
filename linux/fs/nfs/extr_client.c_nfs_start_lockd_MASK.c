
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nlmclnt_initdata {int nfs_version; int noresvport; int protocol; int cred; int nlmclnt_ops; int net; int addrlen; struct sockaddr* address; int hostname; } ;
struct nlm_host {int dummy; } ;
struct nfs_server {int flags; int destroy; struct nlm_host* nlm_host; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_proto; TYPE_3__* cl_nfs_mod; int cl_net; TYPE_1__* rpc_ops; int cl_addrlen; int cl_addr; int cl_hostname; } ;
struct TYPE_6__ {TYPE_2__* rpc_ops; } ;
struct TYPE_5__ {int nlmclnt_ops; } ;
struct TYPE_4__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nlm_host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nlm_host*) ;

 int FUNC_2 () ;
 int VAR_5 ;
 struct nlm_host* FUNC_3 (struct nlmclnt_initdata*) ;

__attribute__((used)) static int FUNC_4(struct nfs_server *VAR_6)
{
 struct nlm_host *VAR_7;
 struct nfs_client *VAR_8 = VAR_6->nfs_client;
 struct nlmclnt_initdata VAR_9 = {
  .hostname = VAR_8->cl_hostname,
  .address = (struct sockaddr *)&VAR_8->cl_addr,
  .addrlen = VAR_8->cl_addrlen,
  .nfs_version = VAR_8->rpc_ops->version,
  .noresvport = VAR_6->flags & VAR_4 ?
     1 : 0,
  .net = VAR_8->cl_net,
  .nlmclnt_ops = VAR_8->cl_nfs_mod->rpc_ops->nlmclnt_ops,
  .cred = FUNC_2(),
 };

 if (VAR_9.nfs_version > 3)
  return 0;
 if ((VAR_6->flags & VAR_3) &&
   (VAR_6->flags & VAR_2))
  return 0;

 switch (VAR_8->cl_proto) {
  default:
   VAR_9.protocol = VAR_0;
   break;
  case 128:
   VAR_9.protocol = VAR_1;
 }

 VAR_7 = FUNC_3(&VAR_9);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6->nlm_host = VAR_7;
 VAR_6->destroy = VAR_5;
 return 0;
}
