
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear13xx_pcie {int is_gen1; int clk; int app_base; int phy; struct dw_pcie* pci; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dw_pcie {int dbi_base; int * ops; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int *) ;
 void* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,struct resource*) ;
 int FUNC_9 (struct device*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,char*) ;
 int FUNC_13 (struct platform_device*,struct spear13xx_pcie*) ;
 int FUNC_14 (struct spear13xx_pcie*,struct platform_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct dw_pcie *VAR_7;
 struct spear13xx_pcie *VAR_8;
 struct device_node *VAR_9 = VAR_6->of_node;
 struct resource *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_6;
 VAR_7->ops = &VAR_4;

 VAR_8->pci = VAR_7;

 VAR_8->phy = FUNC_9(VAR_6, "pcie-phy");
 if (FUNC_0(VAR_8->phy)) {
  VAR_11 = FUNC_1(VAR_8->phy);
  if (VAR_11 == -VAR_1)
   FUNC_5(VAR_6, "probe deferred\n");
  else
   FUNC_4(VAR_6, "couldn't get pcie-phy\n");
  return VAR_11;
 }

 FUNC_11(VAR_8->phy);

 VAR_8->clk = FUNC_6(VAR_6, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_4(VAR_6, "couldn't get clk for pcie\n");
  return FUNC_1(VAR_8->clk);
 }
 VAR_11 = FUNC_3(VAR_8->clk);
 if (VAR_11) {
  FUNC_4(VAR_6, "couldn't enable clk for pcie\n");
  return VAR_11;
 }

 VAR_10 = FUNC_12(VAR_5, VAR_3, "dbi");
 VAR_7->dbi_base = FUNC_8(VAR_6, VAR_10);
 if (FUNC_0(VAR_7->dbi_base)) {
  FUNC_4(VAR_6, "couldn't remap dbi base %p\n", VAR_10);
  VAR_11 = FUNC_1(VAR_7->dbi_base);
  goto fail_clk;
 }
 VAR_8->app_base = VAR_7->dbi_base + 0x2000;

 if (FUNC_10(VAR_9, "st,pcie-is-gen1"))
  VAR_8->is_gen1 = 1;

 FUNC_13(VAR_5, VAR_8);

 VAR_11 = FUNC_14(VAR_8, VAR_5);
 if (VAR_11 < 0)
  goto fail_clk;

 return 0;

fail_clk:
 FUNC_2(VAR_8->clk);

 return VAR_11;
}
