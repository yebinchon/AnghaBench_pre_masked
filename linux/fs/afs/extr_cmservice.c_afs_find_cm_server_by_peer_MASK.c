
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_rxrpc {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_call {struct afs_server* server; TYPE_1__* net; int rxcall; } ;
struct TYPE_2__ {int socket; } ;


 struct afs_server* FUNC_0 (TYPE_1__*,struct sockaddr_rxrpc*) ;
 int FUNC_1 (struct afs_call*,struct afs_server*) ;
 int FUNC_2 (int ,int ,struct sockaddr_rxrpc*) ;
 int FUNC_3 (struct afs_call*,struct sockaddr_rxrpc*) ;

__attribute__((used)) static int FUNC_4(struct afs_call *VAR_0)
{
 struct sockaddr_rxrpc VAR_1;
 struct afs_server *VAR_2;

 FUNC_2(VAR_0->net->socket, VAR_0->rxcall, &VAR_1);

 VAR_2 = FUNC_0(VAR_0->net, &VAR_1);
 if (!VAR_2) {
  FUNC_3(VAR_0, &VAR_1);
  return 0;
 }

 VAR_0->server = VAR_2;
 return FUNC_1(VAR_0, VAR_2);
}
