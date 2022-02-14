
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* bsp_priv; } ;


 struct net_device* FUNC_0 (struct device*) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void *FUNC_2(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_1(VAR_1);

 return VAR_2->plat->bsp_priv;
}
