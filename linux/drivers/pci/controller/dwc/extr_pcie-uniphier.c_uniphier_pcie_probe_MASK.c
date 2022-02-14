
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbi_base; int * ops; struct device* dev; } ;
struct uniphier_pcie_priv {int phy; int rst; int clk; int base; TYPE_1__ pci; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct uniphier_pcie_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct resource*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,int *) ;
 int VAR_3 ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;
 int FUNC_9 (struct platform_device*,struct uniphier_pcie_priv*) ;
 int FUNC_10 (struct uniphier_pcie_priv*,struct platform_device*) ;
 int FUNC_11 (struct uniphier_pcie_priv*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct uniphier_pcie_priv *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pci.dev = VAR_5;
 VAR_6->pci.ops = &VAR_3;

 VAR_7 = FUNC_8(VAR_4, VAR_2, "dbi");
 VAR_6->pci.dbi_base = FUNC_5(VAR_5, VAR_7);
 if (FUNC_0(VAR_6->pci.dbi_base))
  return FUNC_1(VAR_6->pci.dbi_base);

 VAR_7 = FUNC_8(VAR_4, VAR_2, "link");
 VAR_6->base = FUNC_3(VAR_5, VAR_7);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->clk = FUNC_2(VAR_5, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_6->rst = FUNC_7(VAR_5, ((void*)0));
 if (FUNC_0(VAR_6->rst))
  return FUNC_1(VAR_6->rst);

 VAR_6->phy = FUNC_6(VAR_5, "pcie-phy");
 if (FUNC_0(VAR_6->phy))
  return FUNC_1(VAR_6->phy);

 FUNC_9(VAR_4, VAR_6);

 VAR_8 = FUNC_11(VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_10(VAR_6, VAR_4);
}
