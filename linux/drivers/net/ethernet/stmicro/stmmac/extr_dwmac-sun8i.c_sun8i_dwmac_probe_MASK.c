
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_priv_data {TYPE_1__* variant; struct regmap* regmap_field; struct regmap* regulator; struct regmap* tx_clk; } ;
struct stmmac_resources {int mac; } ;
struct stmmac_priv {int dummy; } ;
struct regmap {int interface; int tx_coe; int has_sun8i; int (* init ) (struct platform_device*,struct sunxi_priv_data*) ;struct sunxi_priv_data* bsp_priv; int setup; int (* exit ) (struct platform_device*,struct sunxi_priv_data*) ;int rx_coe; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct plat_stmmacenet_data {int interface; int tx_coe; int has_sun8i; int (* init ) (struct platform_device*,struct sunxi_priv_data*) ;struct sunxi_priv_data* bsp_priv; int setup; int (* exit ) (struct platform_device*,struct sunxi_priv_data*) ;int rx_coe; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ soc_has_internal_phy; int * syscon_field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct net_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 struct regmap* FUNC_5 (struct device*,char*) ;
 struct sunxi_priv_data* FUNC_6 (struct device*,int,int ) ;
 struct regmap* FUNC_7 (struct device*,struct regmap*,int ) ;
 struct regmap* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct stmmac_priv*) ;
 struct stmmac_priv* FUNC_10 (struct net_device*) ;
 TYPE_1__* FUNC_11 (struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct device*,struct regmap*,struct stmmac_resources*) ;
 int FUNC_14 (struct platform_device*,struct stmmac_resources*) ;
 struct regmap* FUNC_15 (struct platform_device*,int *) ;
 int FUNC_16 (struct platform_device*,struct sunxi_priv_data*) ;
 struct regmap* FUNC_17 (int ) ;
 int FUNC_18 (struct platform_device*,struct sunxi_priv_data*) ;
 int FUNC_19 (struct stmmac_priv*) ;
 int FUNC_20 (struct stmmac_priv*) ;
 int VAR_5 ;
 int FUNC_21 (struct sunxi_priv_data*) ;
 struct regmap* FUNC_22 (int ,char*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_6)
{
 struct plat_stmmacenet_data *VAR_7;
 struct stmmac_resources VAR_8;
 struct sunxi_priv_data *VAR_9;
 struct device *VAR_10 = &VAR_6->dev;
 int VAR_11;
 struct stmmac_priv *VAR_12;
 struct net_device *VAR_13;
 struct regmap *VAR_14;

 VAR_11 = FUNC_14(VAR_6, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_15(VAR_6, &VAR_8.mac);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_9 = FUNC_6(VAR_10, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->variant = FUNC_11(&VAR_6->dev);
 if (!VAR_9->variant) {
  FUNC_2(&VAR_6->dev, "Missing dwmac-sun8i variant\n");
  return -VAR_0;
 }

 VAR_9->tx_clk = FUNC_5(VAR_10, "stmmaceth");
 if (FUNC_0(VAR_9->tx_clk)) {
  FUNC_2(VAR_10, "Could not get TX clock\n");
  return FUNC_1(VAR_9->tx_clk);
 }


 VAR_9->regulator = FUNC_8(VAR_10, "phy");
 if (FUNC_0(VAR_9->regulator)) {
  if (FUNC_1(VAR_9->regulator) == -VAR_2)
   return -VAR_2;
  FUNC_4(VAR_10, "No regulator found\n");
  VAR_9->regulator = ((void*)0);
 }
 VAR_14 = FUNC_17(VAR_6->dev.of_node);
 if (FUNC_0(VAR_14))
  VAR_14 = FUNC_22(VAR_6->dev.of_node,
        "syscon");
 if (FUNC_0(VAR_14)) {
  VAR_11 = FUNC_1(VAR_14);
  FUNC_2(&VAR_6->dev, "Unable to map syscon: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9->regmap_field = FUNC_7(VAR_10, VAR_14,
           *VAR_9->variant->syscon_field);
 if (FUNC_0(VAR_9->regmap_field)) {
  VAR_11 = FUNC_1(VAR_9->regmap_field);
  FUNC_2(VAR_10, "Unable to map syscon register: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_12(VAR_10->of_node);
 if (VAR_11 < 0)
  return -VAR_0;
 VAR_7->interface = VAR_11;




 VAR_7->rx_coe = VAR_4;
 VAR_7->tx_coe = 1;
 VAR_7->has_sun8i = 1;
 VAR_7->bsp_priv = VAR_9;
 VAR_7->init = FUNC_18;
 VAR_7->exit = FUNC_16;
 VAR_7->setup = VAR_5;

 VAR_11 = FUNC_18(VAR_6, VAR_7->bsp_priv);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_13(&VAR_6->dev, VAR_7, &VAR_8);
 if (VAR_11)
  goto dwmac_exit;

 VAR_13 = FUNC_3(&VAR_6->dev);
 VAR_12 = FUNC_10(VAR_13);



 if (VAR_9->variant->soc_has_internal_phy) {
  VAR_11 = FUNC_9(VAR_12);
  if (VAR_11)
   goto dwmac_exit;
  VAR_11 = FUNC_19(VAR_12);
  if (VAR_11) {
   FUNC_2(&VAR_6->dev, "Failed to register mux\n");
   goto dwmac_mux;
  }
 } else {
  VAR_11 = FUNC_20(VAR_12);
  if (VAR_11)
   goto dwmac_exit;
 }

 return VAR_11;
dwmac_mux:
 FUNC_21(VAR_9);
dwmac_exit:
 FUNC_16(VAR_6, VAR_7->bsp_priv);
return VAR_11;
}
