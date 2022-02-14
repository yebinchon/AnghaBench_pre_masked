
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct stm32_ops {int dummy; } ;
struct stm32_dwmac {int * dev; struct stm32_ops const* ops; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {struct stm32_dwmac* bsp_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (int *,char*) ;
 struct stm32_dwmac* FUNC_3 (int *,int,int ) ;
 struct stm32_ops* FUNC_4 (int *) ;
 int FUNC_5 (struct stm32_dwmac*) ;
 int FUNC_6 (struct plat_stmmacenet_data*) ;
 int FUNC_7 (struct stm32_dwmac*,int *) ;
 int FUNC_8 (int *,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_9 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct plat_stmmacenet_data *VAR_4;
 struct stmmac_resources VAR_5;
 struct stm32_dwmac *VAR_6;
 const struct stm32_ops *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_3, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_4 = FUNC_10(VAR_3, &VAR_5.mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_3(&VAR_3->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err_remove_config_dt;
 }

 VAR_7 = FUNC_4(&VAR_3->dev);
 if (!VAR_7) {
  FUNC_2(&VAR_3->dev, "no of match data provided\n");
  VAR_8 = -VAR_0;
  goto err_remove_config_dt;
 }

 VAR_6->ops = VAR_7;
 VAR_6->dev = &VAR_3->dev;

 VAR_8 = FUNC_7(VAR_6, &VAR_3->dev);
 if (VAR_8) {
  FUNC_2(&VAR_3->dev, "Unable to parse OF data\n");
  goto err_remove_config_dt;
 }

 VAR_4->bsp_priv = VAR_6;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8)
  goto err_remove_config_dt;

 VAR_8 = FUNC_8(&VAR_3->dev, VAR_4, &VAR_5);
 if (VAR_8)
  goto err_clk_disable;

 return 0;

err_clk_disable:
 FUNC_5(VAR_6);
err_remove_config_dt:
 FUNC_11(VAR_3, VAR_4);

 return VAR_8;
}
