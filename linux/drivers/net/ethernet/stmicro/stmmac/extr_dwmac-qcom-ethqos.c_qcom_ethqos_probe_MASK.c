
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stmmac_resources {int mac; } ;
struct resource {int dummy; } ;
struct qcom_ethqos {struct plat_stmmacenet_data* rgmii_clk; int speed; int por; struct plat_stmmacenet_data* rgmii_base; struct platform_device* pdev; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacenet_data {int has_gmac4; int pmt; int tso_en; int fix_mac_speed; struct qcom_ethqos* bsp_priv; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct plat_stmmacenet_data*) ;
 int FUNC_3 (struct plat_stmmacenet_data*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct plat_stmmacenet_data* FUNC_5 (TYPE_1__*,char*) ;
 struct plat_stmmacenet_data* FUNC_6 (TYPE_1__*,struct resource*) ;
 struct qcom_ethqos* FUNC_7 (TYPE_1__*,int,int ) ;
 int VAR_4 ;
 int FUNC_8 (struct qcom_ethqos*) ;
 int FUNC_9 (struct qcom_ethqos*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct device_node*,char*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,char*) ;
 int FUNC_13 (struct qcom_ethqos*) ;
 int FUNC_14 (TYPE_1__*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_15 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_16 (struct platform_device*,int *) ;
 int FUNC_17 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct plat_stmmacenet_data *VAR_7;
 struct stmmac_resources VAR_8;
 struct qcom_ethqos *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_15(VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_16(VAR_5, &VAR_8.mac);
 if (FUNC_0(VAR_7)) {
  FUNC_4(&VAR_5->dev, "dt configuration failed\n");
  return FUNC_1(VAR_7);
 }

 VAR_9 = FUNC_7(&VAR_5->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto err_mem;
 }

 VAR_9->pdev = VAR_5;
 VAR_10 = FUNC_12(VAR_5, VAR_2, "rgmii");
 VAR_9->rgmii_base = FUNC_6(&VAR_5->dev, VAR_10);
 if (FUNC_0(VAR_9->rgmii_base)) {
  FUNC_4(&VAR_5->dev, "Can't get rgmii base\n");
  VAR_11 = FUNC_1(VAR_9->rgmii_base);
  goto err_mem;
 }

 VAR_9->por = FUNC_10(&VAR_5->dev);

 VAR_9->rgmii_clk = FUNC_5(&VAR_5->dev, "rgmii");
 if (FUNC_0(VAR_9->rgmii_clk)) {
  VAR_11 = FUNC_1(VAR_9->rgmii_clk);
  goto err_mem;
 }

 VAR_11 = FUNC_3(VAR_9->rgmii_clk);
 if (VAR_11)
  goto err_mem;

 VAR_9->speed = VAR_3;
 FUNC_9(VAR_9, VAR_3);
 FUNC_8(VAR_9);

 VAR_7->bsp_priv = VAR_9;
 VAR_7->fix_mac_speed = VAR_4;
 VAR_7->has_gmac4 = 1;
 VAR_7->pmt = 1;
 VAR_7->tso_en = FUNC_11(VAR_6, "snps,tso");

 VAR_11 = FUNC_14(&VAR_5->dev, VAR_7, &VAR_8);
 if (VAR_11)
  goto err_clk;

 FUNC_13(VAR_9);

 return VAR_11;

err_clk:
 FUNC_2(VAR_9->rgmii_clk);

err_mem:
 FUNC_17(VAR_5, VAR_7);

 return VAR_11;
}
