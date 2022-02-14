
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_enet_priv {int irq; int napi; } ;
struct net_device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct nps_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_5(struct net_device *VAR_0)
{
 struct nps_enet_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->napi);
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 FUNC_0(VAR_1->irq, VAR_0);

 return 0;
}
