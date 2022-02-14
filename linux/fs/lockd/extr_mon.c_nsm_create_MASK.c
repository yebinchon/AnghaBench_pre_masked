
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rpc_create_args {int addrsize; char* servername; char const* nodename; int cred; int flags; int authflavor; int version; int * program; struct sockaddr* address; int protocol; struct net* net; } ;
struct rpc_clnt {int dummy; } ;
struct net {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct rpc_clnt* FUNC_2 (struct rpc_create_args*) ;

__attribute__((used)) static struct rpc_clnt *FUNC_3(struct net *VAR_7, const char *VAR_8)
{
 struct sockaddr_in VAR_9 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_1(VAR_1),
 };
 struct rpc_create_args VAR_10 = {
  .net = VAR_7,
  .protocol = VAR_5,
  .address = (struct sockaddr *)&VAR_9,
  .addrsize = sizeof(VAR_9),
  .servername = "rpc.statd",
  .nodename = VAR_8,
  .program = &VAR_6,
  .version = VAR_2,
  .authflavor = VAR_3,
  .flags = VAR_4,
  .cred = FUNC_0(),
 };

 return FUNC_2(&VAR_10);
}
