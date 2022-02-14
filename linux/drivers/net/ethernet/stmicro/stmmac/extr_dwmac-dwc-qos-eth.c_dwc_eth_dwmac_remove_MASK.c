
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int plat; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct dwc_eth_dwmac_data {int (* remove ) (struct platform_device*) ;} ;


 int FUNC_0 (int *,char*,int) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 struct dwc_eth_dwmac_data* FUNC_2 (int *) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_1(VAR_1);
 const struct dwc_eth_dwmac_data *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(&VAR_0->dev);

 VAR_4 = FUNC_4(&VAR_0->dev);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev, "failed to remove platform: %d\n", VAR_4);

 VAR_4 = VAR_3->remove(VAR_0);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev, "failed to remove subdriver: %d\n", VAR_4);

 FUNC_5(VAR_0, VAR_2->plat);

 return VAR_4;
}
