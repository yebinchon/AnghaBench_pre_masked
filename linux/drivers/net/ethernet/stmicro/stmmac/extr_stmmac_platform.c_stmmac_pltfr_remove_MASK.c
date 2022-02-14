
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {struct plat_stmmacenet_data* plat; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {int bsp_priv; int (* exit ) (struct platform_device*,int ) ;} ;
struct net_device {int dummy; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*,struct plat_stmmacenet_data*) ;
 int FUNC_4 (struct platform_device*,int ) ;

int FUNC_5(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_0(VAR_1);
 struct plat_stmmacenet_data *VAR_3 = VAR_2->plat;
 int VAR_4 = FUNC_2(&VAR_0->dev);

 if (VAR_3->exit)
  VAR_3->exit(VAR_0, VAR_3->bsp_priv);

 FUNC_3(VAR_0, VAR_3);

 return VAR_4;
}
