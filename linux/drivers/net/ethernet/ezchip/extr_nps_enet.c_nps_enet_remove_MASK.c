
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nps_enet_priv {int napi; } ;
struct net_device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct net_device*) ;
 struct nps_enet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_5(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct nps_enet_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_2->napi);

 return 0;
}
