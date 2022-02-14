
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pciephy_priv {TYPE_1__* data; struct regmap* rst; struct regmap* clk; struct regmap* base; struct device* dev; } ;
struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct regmap phy ;
struct TYPE_2__ {scalar_t__ has_syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct phy_provider*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 struct regmap* FUNC_4 (struct device*,int *) ;
 struct regmap* FUNC_5 (struct device*,struct resource*) ;
 struct uniphier_pciephy_priv* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 struct regmap* FUNC_8 (struct device*,int ,int *) ;
 struct regmap* FUNC_9 (struct device*,int *) ;
 TYPE_1__* FUNC_10 (struct device*) ;
 int VAR_6 ;
 int FUNC_11 (struct regmap*,struct uniphier_pciephy_priv*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct regmap*,int ,int ,int ) ;
 struct regmap* FUNC_14 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct uniphier_pciephy_priv *VAR_9;
 struct phy_provider *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 struct regmap *VAR_12;
 struct resource *VAR_13;
 struct phy *VAR_14;

 VAR_9 = FUNC_6(VAR_11, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->data = FUNC_10(VAR_11);
 if (FUNC_3(!VAR_9->data))
  return -VAR_0;

 VAR_9->dev = VAR_11;

 VAR_13 = FUNC_12(VAR_8, VAR_3, 0);
 VAR_9->base = FUNC_5(VAR_11, VAR_13);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->clk = FUNC_4(VAR_11, ((void*)0));
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 VAR_9->rst = FUNC_9(VAR_11, ((void*)0));
 if (FUNC_0(VAR_9->rst))
  return FUNC_1(VAR_9->rst);

 VAR_14 = FUNC_8(VAR_11, VAR_11->of_node, &VAR_7);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_12 = FUNC_14(VAR_11->of_node,
       "socionext,syscon");
 if (!FUNC_0(VAR_12) && VAR_9->data->has_syscon)
  FUNC_13(VAR_12, VAR_4,
       VAR_5, VAR_5);

 FUNC_11(VAR_14, VAR_9);
 VAR_10 = FUNC_7(VAR_11, VAR_6);

 return FUNC_2(VAR_10);
}
