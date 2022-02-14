
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {struct nfp_app* app; } ;
struct nfp_net {struct nfp_app* app; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 void* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

struct nfp_app *FUNC_4(struct net_device *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  struct nfp_net *VAR_1 = FUNC_1(VAR_0);

  return VAR_1->app;
 }

 if (FUNC_3(VAR_0)) {
  struct nfp_repr *VAR_2 = FUNC_1(VAR_0);

  return VAR_2->app;
 }

 FUNC_0(1, "Unknown netdev type for nfp_app\n");

 return ((void*)0);
}
