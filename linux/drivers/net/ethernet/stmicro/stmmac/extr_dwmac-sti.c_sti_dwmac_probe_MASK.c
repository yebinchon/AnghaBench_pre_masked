
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct sti_dwmac_of_data {int fix_retime_src; } ;
struct sti_dwmac {int clk; int fix_retime_src; } ;
struct platform_device {int dev; } ;
struct plat_stmmacenet_data {int fix_mac_speed; struct sti_dwmac* bsp_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 struct sti_dwmac* FUNC_5 (int *,int,int ) ;
 struct sti_dwmac_of_data* FUNC_6 (int *) ;
 int FUNC_7 (struct sti_dwmac*,struct platform_device*) ;
 int FUNC_8 (struct sti_dwmac*) ;
 int FUNC_9 (int *,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_10 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_11 (struct platform_device*,int *) ;
 int FUNC_12 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct plat_stmmacenet_data *VAR_4;
 const struct sti_dwmac_of_data *VAR_5;
 struct stmmac_resources VAR_6;
 struct sti_dwmac *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_6(&VAR_3->dev);
 if (!VAR_5) {
  FUNC_4(&VAR_3->dev, "No OF match data provided\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_10(VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_4 = FUNC_11(VAR_3, &VAR_6.mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_7 = FUNC_5(&VAR_3->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto err_remove_config_dt;
 }

 VAR_8 = FUNC_7(VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_4(&VAR_3->dev, "Unable to parse OF data\n");
  goto err_remove_config_dt;
 }

 VAR_7->fix_retime_src = VAR_5->fix_retime_src;

 VAR_4->bsp_priv = VAR_7;
 VAR_4->fix_mac_speed = VAR_5->fix_retime_src;

 VAR_8 = FUNC_3(VAR_7->clk);
 if (VAR_8)
  goto err_remove_config_dt;

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8)
  goto disable_clk;

 VAR_8 = FUNC_9(&VAR_3->dev, VAR_4, &VAR_6);
 if (VAR_8)
  goto disable_clk;

 return 0;

disable_clk:
 FUNC_2(VAR_7->clk);
err_remove_config_dt:
 FUNC_12(VAR_3, VAR_4);

 return VAR_8;
}
