
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {int fix_mac_speed; struct meson_dwmac* bsp_priv; } ;
struct meson_dwmac {struct plat_stmmacenet_data* reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 struct meson_dwmac* FUNC_2 (int *,int,int ) ;
 struct plat_stmmacenet_data* FUNC_3 (struct platform_device*,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_5 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct plat_stmmacenet_data *VAR_4;
 struct stmmac_resources VAR_5;
 struct meson_dwmac *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_3, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_6(VAR_3, &VAR_5.mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_2(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_remove_config_dt;
 }

 VAR_6->reg = FUNC_3(VAR_3, 1);
 if (FUNC_0(VAR_6->reg)) {
  VAR_7 = FUNC_1(VAR_6->reg);
  goto err_remove_config_dt;
 }

 VAR_4->bsp_priv = VAR_6;
 VAR_4->fix_mac_speed = VAR_2;

 VAR_7 = FUNC_4(&VAR_3->dev, VAR_4, &VAR_5);
 if (VAR_7)
  goto err_remove_config_dt;

 return 0;

err_remove_config_dt:
 FUNC_7(VAR_3, VAR_4);

 return VAR_7;
}
