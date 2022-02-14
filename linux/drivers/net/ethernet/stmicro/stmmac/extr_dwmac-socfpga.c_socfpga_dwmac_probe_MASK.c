
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_resources {int mac; } ;
struct stmmac_priv {TYPE_1__* plat; } ;
struct socfpga_dwmac_ops {int (* set_phy_mode ) (struct socfpga_dwmac*) ;} ;
struct socfpga_dwmac {int stmmac_rst; struct socfpga_dwmac_ops const* ops; struct plat_stmmacenet_data* stmmac_ocp_rst; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct plat_stmmacenet_data {int fix_mac_speed; struct socfpga_dwmac* bsp_priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stmmac_rst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct socfpga_dwmac_ops* FUNC_3 (struct device*) ;
 struct socfpga_dwmac* FUNC_4 (struct device*,int,int ) ;
 struct plat_stmmacenet_data* FUNC_5 (struct device*,char*) ;
 struct stmmac_priv* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct plat_stmmacenet_data*) ;
 int VAR_3 ;
 int FUNC_9 (struct socfpga_dwmac*,struct device*) ;
 int FUNC_10 (struct device*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_13 (struct platform_device*,int *) ;
 int FUNC_14 (struct platform_device*,struct plat_stmmacenet_data*) ;
 int FUNC_15 (struct socfpga_dwmac*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_4)
{
 struct plat_stmmacenet_data *VAR_5;
 struct stmmac_resources VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8;
 struct socfpga_dwmac *VAR_9;
 struct net_device *VAR_10;
 struct stmmac_priv *VAR_11;
 const struct socfpga_dwmac_ops *VAR_12;

 VAR_12 = FUNC_3(&VAR_4->dev);
 if (!VAR_12) {
  FUNC_2(&VAR_4->dev, "no of match data provided\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_12(VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_5 = FUNC_13(VAR_4, &VAR_6.mac);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_9 = FUNC_4(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto err_remove_config_dt;
 }

 VAR_9->stmmac_ocp_rst = FUNC_5(VAR_7, "stmmaceth-ocp");
 if (FUNC_0(VAR_9->stmmac_ocp_rst)) {
  VAR_8 = FUNC_1(VAR_9->stmmac_ocp_rst);
  FUNC_2(VAR_7, "error getting reset control of ocp %d\n", VAR_8);
  goto err_remove_config_dt;
 }

 FUNC_8(VAR_9->stmmac_ocp_rst);

 VAR_8 = FUNC_9(VAR_9, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_7, "Unable to parse OF data\n");
  goto err_remove_config_dt;
 }

 VAR_9->ops = VAR_12;
 VAR_5->bsp_priv = VAR_9;
 VAR_5->fix_mac_speed = VAR_3;

 VAR_8 = FUNC_10(&VAR_4->dev, VAR_5, &VAR_6);
 if (VAR_8)
  goto err_remove_config_dt;

 VAR_10 = FUNC_7(VAR_4);
 VAR_11 = FUNC_6(VAR_10);





 VAR_9->stmmac_rst = VAR_11->plat->stmmac_rst;

 VAR_8 = VAR_12->set_phy_mode(VAR_9);
 if (VAR_8)
  goto err_dvr_remove;

 return 0;

err_dvr_remove:
 FUNC_11(&VAR_4->dev);
err_remove_config_dt:
 FUNC_14(VAR_4, VAR_5);

 return VAR_8;
}
