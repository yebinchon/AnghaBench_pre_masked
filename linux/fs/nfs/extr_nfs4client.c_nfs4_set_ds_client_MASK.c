
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sockaddr {int dummy; } ;
struct rpc_timeout {int dummy; } ;
struct nfs_server {int flags; int cred; struct nfs_client* nfs_client; } ;
struct nfs_client_initdata {int addrlen; int proto; char* hostname; int nconnect; int init_flags; int cred; struct rpc_timeout* timeparms; int net; int minorversion; int * nfs_mod; int ip_addr; int nodename; struct sockaddr const* addr; } ;
struct nfs_client {int cl_nconnect; int cl_net; int cl_ipaddr; TYPE_1__* cl_rpcclient; } ;
typedef int buf ;
struct TYPE_2__ {int cl_nodename; } ;


 int VAR_0 ;
 struct nfs_client* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 struct nfs_client* FUNC_2 (struct nfs_client_initdata*) ;
 int FUNC_3 (struct rpc_timeout*,int,unsigned int,unsigned int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct sockaddr const*,char*,int) ;

struct nfs_client *FUNC_5(struct nfs_server *VAR_6,
  const struct sockaddr *VAR_7, int VAR_8,
  int VAR_9, unsigned int VAR_10, unsigned int VAR_11,
  u32 VAR_12)
{
 struct rpc_timeout VAR_13;
 struct nfs_client *VAR_14 = VAR_6->nfs_client;
 struct nfs_client_initdata VAR_15 = {
  .addr = VAR_7,
  .addrlen = VAR_8,
  .nodename = VAR_14->cl_rpcclient->cl_nodename,
  .ip_addr = VAR_14->cl_ipaddr,
  .nfs_mod = &VAR_5,
  .proto = VAR_9,
  .minorversion = VAR_12,
  .net = VAR_14->cl_net,
  .timeparms = &VAR_13,
  .cred = VAR_6->cred,
 };
 char VAR_16[VAR_1 + 1];

 if (FUNC_4(VAR_7, VAR_16, sizeof(VAR_16)) <= 0)
  return FUNC_0(-VAR_0);
 VAR_15.hostname = VAR_16;

 if (VAR_14->cl_nconnect > 1 && VAR_9 == VAR_4)
  VAR_15.nconnect = VAR_14->cl_nconnect;

 if (VAR_6->flags & VAR_3)
  FUNC_1(VAR_2, &VAR_15.init_flags);






 FUNC_3(&VAR_13, VAR_9, VAR_10, VAR_11);
 return FUNC_2(&VAR_15);
}
