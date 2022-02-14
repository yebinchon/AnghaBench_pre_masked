
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct meson_mx_mmc_host {struct platform_device* core_clk; struct platform_device* cfg_div_clk; struct platform_device* base; int * controller_dev; struct platform_device* parent_clk; int cmd_timeout; int irq_lock; struct mmc_host* mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,char*) ;
 struct platform_device* FUNC_7 (int *,struct resource*) ;
 int FUNC_8 (int *,int,int ,int ,int ,int *,struct meson_mx_mmc_host*) ;
 int FUNC_9 (struct meson_mx_mmc_host*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct meson_mx_mmc_host*) ;
 struct platform_device* FUNC_11 (int *) ;
 int FUNC_12 (struct meson_mx_mmc_host*) ;
 int VAR_11 ;
 struct mmc_host* FUNC_13 (int,int *) ;
 int FUNC_14 (struct mmc_host*) ;
 struct meson_mx_mmc_host* FUNC_15 (struct mmc_host*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct meson_mx_mmc_host*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int ,struct platform_device*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_12)
{
 struct platform_device *VAR_13;
 struct mmc_host *VAR_14;
 struct meson_mx_mmc_host *VAR_15;
 struct resource *VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;

 VAR_13 = FUNC_11(&VAR_12->dev);
 if (!VAR_13)
  return -VAR_0;
 else if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);

 VAR_14 = FUNC_13(sizeof(*VAR_15), &VAR_13->dev);
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  goto error_unregister_slot_pdev;
 }

 VAR_15 = FUNC_15(VAR_14);
 VAR_15->mmc = VAR_14;
 VAR_15->controller_dev = &VAR_12->dev;

 FUNC_20(&VAR_15->irq_lock);
 FUNC_21(&VAR_15->cmd_timeout, VAR_11, 0);

 FUNC_19(VAR_12, VAR_15);

 VAR_16 = FUNC_18(VAR_12, VAR_2, 0);
 VAR_15->base = FUNC_7(VAR_15->controller_dev, VAR_16);
 if (FUNC_1(VAR_15->base)) {
  VAR_17 = FUNC_2(VAR_15->base);
  goto error_free_mmc;
 }

 VAR_18 = FUNC_17(VAR_12, 0);
 VAR_17 = FUNC_8(VAR_15->controller_dev, VAR_18,
     VAR_9,
     VAR_10, VAR_3,
     ((void*)0), VAR_15);
 if (VAR_17)
  goto error_free_mmc;

 VAR_15->core_clk = FUNC_6(VAR_15->controller_dev, "core");
 if (FUNC_1(VAR_15->core_clk)) {
  VAR_17 = FUNC_2(VAR_15->core_clk);
  goto error_free_mmc;
 }

 VAR_15->parent_clk = FUNC_6(VAR_15->controller_dev, "clkin");
 if (FUNC_1(VAR_15->parent_clk)) {
  VAR_17 = FUNC_2(VAR_15->parent_clk);
  goto error_free_mmc;
 }

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17)
  goto error_free_mmc;

 VAR_17 = FUNC_4(VAR_15->core_clk);
 if (VAR_17) {
  FUNC_5(VAR_15->controller_dev, "Failed to enable core clock\n");
  goto error_free_mmc;
 }

 VAR_17 = FUNC_4(VAR_15->cfg_div_clk);
 if (VAR_17) {
  FUNC_5(VAR_15->controller_dev, "Failed to enable MMC clock\n");
  goto error_disable_core_clk;
 }

 VAR_19 = 0;
 VAR_19 |= FUNC_0(VAR_5, 39);
 VAR_19 |= FUNC_0(VAR_6, 0x3);
 VAR_19 |= FUNC_0(VAR_8, 0x2);
 VAR_19 |= FUNC_0(VAR_7, 0x2);
 FUNC_22(VAR_19, VAR_15->base + VAR_4);

 FUNC_12(VAR_15);

 VAR_17 = FUNC_9(VAR_15);
 if (VAR_17)
  goto error_disable_clks;

 return 0;

error_disable_clks:
 FUNC_3(VAR_15->cfg_div_clk);
error_disable_core_clk:
 FUNC_3(VAR_15->core_clk);
error_free_mmc:
 FUNC_14(VAR_14);
error_unregister_slot_pdev:
 FUNC_16(&VAR_13->dev, ((void*)0));
 return VAR_17;
}
