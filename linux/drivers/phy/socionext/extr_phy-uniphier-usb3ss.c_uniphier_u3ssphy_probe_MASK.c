
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_u3ssphy_priv {struct phy* vbus; struct phy* rst_parent; struct phy* clk_parent; struct phy* rst_parent_gio; struct phy* clk_parent_gio; struct phy* rst; struct phy* clk_ext; struct phy* clk; TYPE_1__* data; struct phy* base; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {scalar_t__ nparams; int is_legacy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct device*,char*) ;
 struct phy* FUNC_5 (struct device*,char*) ;
 struct phy* FUNC_6 (struct device*,struct resource*) ;
 struct uniphier_u3ssphy_priv* FUNC_7 (struct device*,int,int ) ;
 struct phy_provider* FUNC_8 (struct device*,int ) ;
 struct phy* FUNC_9 (struct device*,int ,int *) ;
 struct phy* FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,char*) ;
 TYPE_1__* FUNC_12 (struct device*) ;
 int VAR_6 ;
 int FUNC_13 (struct phy*,struct uniphier_u3ssphy_priv*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct uniphier_u3ssphy_priv *VAR_10;
 struct phy_provider *VAR_11;
 struct resource *VAR_12;
 struct phy *VAR_13;

 VAR_10 = FUNC_7(VAR_9, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = VAR_9;
 VAR_10->data = FUNC_12(VAR_9);
 if (FUNC_3(!VAR_10->data ||
      VAR_10->data->nparams > VAR_5))
  return -VAR_0;

 VAR_12 = FUNC_14(VAR_8, VAR_4, 0);
 VAR_10->base = FUNC_6(VAR_9, VAR_12);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 if (!VAR_10->data->is_legacy) {
  VAR_10->clk = FUNC_4(VAR_9, "phy");
  if (FUNC_0(VAR_10->clk))
   return FUNC_1(VAR_10->clk);

  VAR_10->clk_ext = FUNC_5(VAR_9, "phy-ext");
  if (FUNC_0(VAR_10->clk_ext))
   return FUNC_1(VAR_10->clk_ext);

  VAR_10->rst = FUNC_11(VAR_9, "phy");
  if (FUNC_0(VAR_10->rst))
   return FUNC_1(VAR_10->rst);
 } else {
  VAR_10->clk_parent_gio = FUNC_4(VAR_9, "gio");
  if (FUNC_0(VAR_10->clk_parent_gio))
   return FUNC_1(VAR_10->clk_parent_gio);

  VAR_10->rst_parent_gio =
   FUNC_11(VAR_9, "gio");
  if (FUNC_0(VAR_10->rst_parent_gio))
   return FUNC_1(VAR_10->rst_parent_gio);
 }

 VAR_10->clk_parent = FUNC_4(VAR_9, "link");
 if (FUNC_0(VAR_10->clk_parent))
  return FUNC_1(VAR_10->clk_parent);

 VAR_10->rst_parent = FUNC_11(VAR_9, "link");
 if (FUNC_0(VAR_10->rst_parent))
  return FUNC_1(VAR_10->rst_parent);

 VAR_10->vbus = FUNC_10(VAR_9, "vbus");
 if (FUNC_0(VAR_10->vbus)) {
  if (FUNC_1(VAR_10->vbus) == -VAR_2)
   return FUNC_1(VAR_10->vbus);
  VAR_10->vbus = ((void*)0);
 }

 VAR_13 = FUNC_9(VAR_9, VAR_9->of_node, &VAR_7);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_13(VAR_13, VAR_10);
 VAR_11 = FUNC_8(VAR_9, VAR_6);

 return FUNC_2(VAR_11);
}
