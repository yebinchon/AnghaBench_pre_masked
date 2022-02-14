
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct rk_gmac_ops {int dummy; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {int has_gmac; struct plat_stmmacenet_data* bsp_priv; int fix_mac_speed; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (int *,char*) ;
 struct rk_gmac_ops* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct plat_stmmacenet_data*) ;
 int FUNC_5 (struct plat_stmmacenet_data*) ;
 int FUNC_6 (struct plat_stmmacenet_data*) ;
 struct plat_stmmacenet_data* FUNC_7 (struct platform_device*,struct plat_stmmacenet_data*,struct rk_gmac_ops const*) ;
 int FUNC_8 (int *,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_9 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_2)
{
 struct plat_stmmacenet_data *VAR_3;
 struct stmmac_resources VAR_4;
 const struct rk_gmac_ops *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_2->dev);
 if (!VAR_5) {
  FUNC_2(&VAR_2->dev, "no of match data provided\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_9(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_3 = FUNC_10(VAR_2, &VAR_4.mac);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_3->has_gmac = 1;
 VAR_3->fix_mac_speed = VAR_1;

 VAR_3->bsp_priv = FUNC_7(VAR_2, VAR_3, VAR_5);
 if (FUNC_0(VAR_3->bsp_priv)) {
  VAR_6 = FUNC_1(VAR_3->bsp_priv);
  goto err_remove_config_dt;
 }

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_3->bsp_priv);
 if (VAR_6)
  goto err_remove_config_dt;

 VAR_6 = FUNC_8(&VAR_2->dev, VAR_3, &VAR_4);
 if (VAR_6)
  goto err_gmac_powerdown;

 return 0;

err_gmac_powerdown:
 FUNC_5(VAR_3->bsp_priv);
err_remove_config_dt:
 FUNC_11(VAR_2, VAR_3);

 return VAR_6;
}
