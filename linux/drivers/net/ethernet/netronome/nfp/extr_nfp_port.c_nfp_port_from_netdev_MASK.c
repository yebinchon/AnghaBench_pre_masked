
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {struct nfp_port* port; } ;
struct nfp_port {int dummy; } ;
struct nfp_net {struct nfp_port* port; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 void* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

struct nfp_port *FUNC_4(struct net_device *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  struct nfp_net *VAR_1 = FUNC_1(VAR_0);

  return VAR_1->port;
 }

 if (FUNC_3(VAR_0)) {
  struct nfp_repr *VAR_2 = FUNC_1(VAR_0);

  return VAR_2->port;
 }

 FUNC_0(1, "Unknown netdev type for nfp_port\n");

 return ((void*)0);
}
