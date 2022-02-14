
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xprt_create {size_t addrlen; char const* servername; struct sockaddr* dstaddr; struct net* net; int ident; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rpc_clnt {int cl_timeout; } ;
struct nfs_server {struct nfs_client* nfs_client; int mig_status; struct rpc_clnt* client; } ;
struct nfs_client {int * cl_hostname; int cl_nconnect; int cl_minorversion; int cl_proto; } ;
struct net {int dummy; } ;
typedef int buf ;
typedef int address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct nfs_server*,char const*,struct sockaddr*,size_t,char*,int ,int ,int ,int ,struct net*) ;
 int FUNC_3 (struct nfs_server*) ;
 int FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (struct nfs_server*) ;
 int FUNC_6 (struct nfs_server*) ;
 int FUNC_7 (struct rpc_clnt*,struct sockaddr*,int) ;
 scalar_t__ FUNC_8 (struct sockaddr*,char*,int) ;
 int FUNC_9 (struct rpc_clnt*,struct xprt_create*,int ) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct nfs_server *VAR_4, const char *VAR_5,
         struct sockaddr *VAR_6, size_t VAR_7, struct net *VAR_8)
{
 struct nfs_client *VAR_9 = VAR_4->nfs_client;
 struct rpc_clnt *VAR_10 = VAR_4->client;
 struct xprt_create VAR_11 = {
  .ident = VAR_9->cl_proto,
  .net = VAR_8,
  .dstaddr = VAR_6,
  .addrlen = VAR_7,
  .servername = VAR_5,
 };
 char VAR_12[VAR_2 + 1];
 struct sockaddr_storage VAR_13;
 struct sockaddr *VAR_14 = (struct sockaddr *)&VAR_13;
 int VAR_15;

 VAR_15 = FUNC_9(VAR_10, &VAR_11, VAR_10->cl_timeout);
 if (VAR_15 != 0)
  return VAR_15;

 VAR_15 = FUNC_7(VAR_10, VAR_14, sizeof(VAR_13));
 if (VAR_15 != 0)
  return VAR_15;

 if (FUNC_8(VAR_14, VAR_12, sizeof(VAR_12)) == 0)
  return -VAR_0;

 FUNC_6(VAR_4);
 FUNC_10(VAR_3, &VAR_4->mig_status);
 VAR_15 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_12,
    VAR_9->cl_proto, VAR_10->cl_timeout,
    VAR_9->cl_minorversion,
    VAR_9->cl_nconnect, VAR_8);
 FUNC_0(VAR_3, &VAR_4->mig_status);
 if (VAR_15 != 0) {
  FUNC_5(VAR_4);
  return VAR_15;
 }
 FUNC_4(VAR_9);

 if (VAR_4->nfs_client->cl_hostname == ((void*)0))
  VAR_4->nfs_client->cl_hostname = FUNC_1(VAR_5, VAR_1);
 FUNC_5(VAR_4);

 return FUNC_3(VAR_4);
}
