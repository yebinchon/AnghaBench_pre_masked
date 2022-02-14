
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stmmac_resources {int mac; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacenet_data {int (* init ) (struct platform_device*,struct oxnas_dwmac*) ;struct oxnas_dwmac* bsp_priv; int (* exit ) (struct platform_device*,struct oxnas_dwmac*) ;} ;
struct oxnas_dwmac {struct plat_stmmacenet_data* clk; struct plat_stmmacenet_data* regmap; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct plat_stmmacenet_data* FUNC_3 (TYPE_1__*,char*) ;
 struct oxnas_dwmac* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct oxnas_dwmac*) ;
 int FUNC_6 (struct platform_device*,struct oxnas_dwmac*) ;
 int FUNC_7 (TYPE_1__*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_8 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_9 (struct platform_device*,int *) ;
 int FUNC_10 (struct platform_device*,struct plat_stmmacenet_data*) ;
 struct plat_stmmacenet_data* FUNC_11 (int ,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_2)
{
 struct plat_stmmacenet_data *VAR_3;
 struct stmmac_resources VAR_4;
 struct oxnas_dwmac *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_3 = FUNC_9(VAR_2, &VAR_4.mac);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = FUNC_4(&VAR_2->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err_remove_config_dt;
 }

 VAR_5->dev = &VAR_2->dev;
 VAR_3->bsp_priv = VAR_5;
 VAR_3->init = FUNC_6;
 VAR_3->exit = FUNC_5;

 VAR_5->regmap = FUNC_11(VAR_2->dev.of_node,
       "oxsemi,sys-ctrl");
 if (FUNC_0(VAR_5->regmap)) {
  FUNC_2(&VAR_2->dev, "failed to have sysctrl regmap\n");
  VAR_6 = FUNC_1(VAR_5->regmap);
  goto err_remove_config_dt;
 }

 VAR_5->clk = FUNC_3(&VAR_2->dev, "gmac");
 if (FUNC_0(VAR_5->clk)) {
  VAR_6 = FUNC_1(VAR_5->clk);
  goto err_remove_config_dt;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_3->bsp_priv);
 if (VAR_6)
  goto err_remove_config_dt;

 VAR_6 = FUNC_7(&VAR_2->dev, VAR_3, &VAR_4);
 if (VAR_6)
  goto err_dwmac_exit;


 return 0;

err_dwmac_exit:
 FUNC_5(VAR_2, VAR_3->bsp_priv);
err_remove_config_dt:
 FUNC_10(VAR_2, VAR_3);

 return VAR_6;
}
