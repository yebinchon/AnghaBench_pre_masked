
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct rpc_xprt {int xprt_net; } ;
struct nfs_server {TYPE_2__* nfs_client; TYPE_1__* client; } ;
struct TYPE_5__ {int cl_addr; } ;
struct TYPE_4__ {struct rpc_xprt* cl_xprt; } ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_0,
         struct nfs_server *VAR_1)
{
 struct sockaddr *VAR_2, *VAR_3;
 struct rpc_xprt *VAR_4 = VAR_0->client->cl_xprt;
 struct rpc_xprt *VAR_5 = VAR_1->client->cl_xprt;

 if (!FUNC_1(VAR_4->xprt_net, VAR_5->xprt_net))
  return 0;

 VAR_2 = (struct sockaddr *)&VAR_0->nfs_client->cl_addr;
 VAR_3 = (struct sockaddr *)&VAR_1->nfs_client->cl_addr;

 if (VAR_2->sa_family != VAR_3->sa_family)
  return 0;

 switch (VAR_2->sa_family) {
 case 129: {
  struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_2;
  struct sockaddr_in *VAR_7 = (struct sockaddr_in *)VAR_3;
  if (VAR_6->sin_addr.s_addr != VAR_7->sin_addr.s_addr)
   return 0;
  if (VAR_6->sin_port != VAR_7->sin_port)
   return 0;
  break;
 }
 case 128: {
  struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)VAR_2;
  struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)VAR_3;
  if (!FUNC_0(&VAR_8->sin6_addr, &VAR_9->sin6_addr))
   return 0;
  if (VAR_8->sin6_port != VAR_9->sin6_port)
   return 0;
  break;
 }
 default:
  return 0;
 }

 return 1;
}
