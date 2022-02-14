
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dw_pcie {scalar_t__ dbi_base; int * ops; struct device* dev; } ;
struct armada8k_pcie {scalar_t__ clk; scalar_t__ clk_reg; struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct armada8k_pcie*,struct platform_device*) ;
 int FUNC_4 (struct armada8k_pcie*) ;
 int FUNC_5 (struct armada8k_pcie*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct device*,char*,struct resource*) ;
 void* FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (struct device*,struct resource*) ;
 int VAR_4 ;
 struct resource* FUNC_12 (struct platform_device*,int ,char*) ;
 int FUNC_13 (struct platform_device*,struct armada8k_pcie*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct dw_pcie *VAR_6;
 struct armada8k_pcie *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct resource *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_10(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_10(VAR_8, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_8;
 VAR_6->ops = &VAR_4;

 VAR_7->pci = VAR_6;

 VAR_7->clk = FUNC_9(VAR_8, ((void*)0));
 if (FUNC_1(VAR_7->clk))
  return FUNC_2(VAR_7->clk);

 VAR_10 = FUNC_7(VAR_7->clk);
 if (VAR_10)
  return VAR_10;

 VAR_7->clk_reg = FUNC_9(VAR_8, "reg");
 if (VAR_7->clk_reg == FUNC_0(-VAR_1)) {
  VAR_10 = -VAR_1;
  goto fail;
 }
 if (!FUNC_1(VAR_7->clk_reg)) {
  VAR_10 = FUNC_7(VAR_7->clk_reg);
  if (VAR_10)
   goto fail_clkreg;
 }


 VAR_9 = FUNC_12(VAR_5, VAR_3, "ctrl");
 VAR_6->dbi_base = FUNC_11(VAR_8, VAR_9);
 if (FUNC_1(VAR_6->dbi_base)) {
  FUNC_8(VAR_8, "couldn't remap regs base %p\n", VAR_9);
  VAR_10 = FUNC_2(VAR_6->dbi_base);
  goto fail_clkreg;
 }

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  goto fail_clkreg;

 FUNC_13(VAR_5, VAR_7);

 VAR_10 = FUNC_3(VAR_7, VAR_5);
 if (VAR_10)
  goto disable_phy;

 return 0;

disable_phy:
 FUNC_4(VAR_7);
fail_clkreg:
 FUNC_6(VAR_7->clk_reg);
fail:
 FUNC_6(VAR_7->clk);

 return VAR_10;
}
