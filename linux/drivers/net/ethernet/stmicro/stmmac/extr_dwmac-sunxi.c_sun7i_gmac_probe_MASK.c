
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {struct plat_stmmacenet_data* regulator; struct plat_stmmacenet_data* tx_clk; int interface; } ;
struct stmmac_resources {int mac; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct plat_stmmacenet_data {int tx_coe; int has_gmac; int (* init ) (struct platform_device*,struct sunxi_priv_data*) ;struct sunxi_priv_data* bsp_priv; int fix_mac_speed; int (* exit ) (struct platform_device*,struct sunxi_priv_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct plat_stmmacenet_data* FUNC_4 (struct device*,char*) ;
 struct sunxi_priv_data* FUNC_5 (struct device*,int,int ) ;
 struct plat_stmmacenet_data* FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_9 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (struct platform_device*,struct plat_stmmacenet_data*) ;
 int VAR_3 ;
 int FUNC_12 (struct platform_device*,struct sunxi_priv_data*) ;
 int FUNC_13 (struct platform_device*,struct sunxi_priv_data*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 struct plat_stmmacenet_data *VAR_5;
 struct stmmac_resources VAR_6;
 struct sunxi_priv_data *VAR_7;
 struct device *VAR_8 = &VAR_4->dev;
 int VAR_9;

 VAR_9 = FUNC_9(VAR_4, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_5 = FUNC_10(VAR_4, &VAR_6.mac);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto err_remove_config_dt;
 }

 VAR_7->interface = FUNC_7(VAR_8->of_node);

 VAR_7->tx_clk = FUNC_4(VAR_8, "allwinner_gmac_tx");
 if (FUNC_0(VAR_7->tx_clk)) {
  FUNC_2(VAR_8, "could not get tx clock\n");
  VAR_9 = FUNC_1(VAR_7->tx_clk);
  goto err_remove_config_dt;
 }


 VAR_7->regulator = FUNC_6(VAR_8, "phy");
 if (FUNC_0(VAR_7->regulator)) {
  if (FUNC_1(VAR_7->regulator) == -VAR_1) {
   VAR_9 = -VAR_1;
   goto err_remove_config_dt;
  }
  FUNC_3(VAR_8, "no regulator found\n");
  VAR_7->regulator = ((void*)0);
 }



 VAR_5->tx_coe = 1;
 VAR_5->has_gmac = 1;
 VAR_5->bsp_priv = VAR_7;
 VAR_5->init = FUNC_13;
 VAR_5->exit = FUNC_12;
 VAR_5->fix_mac_speed = VAR_3;

 VAR_9 = FUNC_13(VAR_4, VAR_5->bsp_priv);
 if (VAR_9)
  goto err_remove_config_dt;

 VAR_9 = FUNC_8(&VAR_4->dev, VAR_5, &VAR_6);
 if (VAR_9)
  goto err_gmac_exit;

 return 0;

err_gmac_exit:
 FUNC_12(VAR_4, VAR_5->bsp_priv);
err_remove_config_dt:
 FUNC_11(VAR_4, VAR_5);

 return VAR_9;
}
