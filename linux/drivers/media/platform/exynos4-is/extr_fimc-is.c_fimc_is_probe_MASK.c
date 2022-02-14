
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct platform_device* pdev; } ;
struct fimc_is {int pmu_regs; int irq; int regs; int lock; int slock; int irq_queue; TYPE_1__ isp; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct fimc_is* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct fimc_is*) ;
 int FUNC_10 (struct fimc_is*) ;
 int FUNC_11 (struct fimc_is*) ;
 int VAR_5 ;
 int FUNC_12 (struct fimc_is*) ;
 int FUNC_13 (struct fimc_is*) ;
 int FUNC_14 (struct fimc_is*,int ) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct fimc_is*) ;
 int FUNC_18 (int ,struct fimc_is*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ,struct resource*) ;
 struct device_node* FUNC_24 (int ,char*) ;
 int FUNC_25 (struct device_node*,int ) ;
 int FUNC_26 (struct device_node*) ;
 int FUNC_27 (struct platform_device*,struct fimc_is*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (struct device*) ;
 int FUNC_31 (struct device*) ;
 int FUNC_32 (int ,int ,int ,int ,struct fimc_is*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (struct device*,int ) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct fimc_is *VAR_8;
 struct resource VAR_9;
 struct device_node *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->pdev = VAR_6;
 VAR_8->isp.pdev = VAR_6;

 FUNC_19(&VAR_8->irq_queue);
 FUNC_33(&VAR_8->slock);
 FUNC_22(&VAR_8->lock);

 VAR_11 = FUNC_23(VAR_7->of_node, 0, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->regs = FUNC_6(VAR_7, &VAR_9);
 if (FUNC_1(VAR_8->regs))
  return FUNC_2(VAR_8->regs);

 VAR_10 = FUNC_24(VAR_7->of_node, "pmu");
 if (!VAR_10)
  return -VAR_1;

 VAR_8->pmu_regs = FUNC_25(VAR_10, 0);
 FUNC_26(VAR_10);
 if (!VAR_8->pmu_regs)
  return -VAR_2;

 VAR_8->irq = FUNC_21(VAR_7->of_node, 0);
 if (!VAR_8->irq) {
  FUNC_4(VAR_7, "no irq found\n");
  VAR_11 = -VAR_0;
  goto err_iounmap;
 }

 VAR_11 = FUNC_11(VAR_8);
 if (VAR_11 < 0)
  goto err_iounmap;

 FUNC_27(VAR_6, VAR_8);

 VAR_11 = FUNC_32(VAR_8->irq, VAR_5, 0, FUNC_5(VAR_7), VAR_8);
 if (VAR_11 < 0) {
  FUNC_4(VAR_7, "irq request failed\n");
  goto err_clk;
 }
 FUNC_28(VAR_7);

 if (!FUNC_29(VAR_7)) {
  VAR_11 = FUNC_15(VAR_7);
  if (VAR_11 < 0)
   goto err_irq;
 }

 VAR_11 = FUNC_30(VAR_7);
 if (VAR_11 < 0)
  goto err_pm;

 FUNC_34(VAR_7, FUNC_0(32));

 VAR_11 = FUNC_8(VAR_7);
 if (VAR_11 < 0)
  goto err_pm;





 VAR_11 = FUNC_13(VAR_8);
 if (VAR_11 < 0)
  goto err_pm;

 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11 < 0)
  goto err_sd;

 VAR_11 = FUNC_14(VAR_8, VAR_3);
 if (VAR_11 < 0)
  goto err_dfs;

 FUNC_31(VAR_7);

 FUNC_3(VAR_7, "FIMC-IS registered successfully\n");
 return 0;

err_dfs:
 FUNC_10(VAR_8);
err_sd:
 FUNC_17(VAR_8);
err_pm:
 if (!FUNC_29(VAR_7))
  FUNC_16(VAR_7);
err_irq:
 FUNC_18(VAR_8->irq, VAR_8);
err_clk:
 FUNC_12(VAR_8);
err_iounmap:
 FUNC_20(VAR_8->pmu_regs);
 return VAR_11;
}
