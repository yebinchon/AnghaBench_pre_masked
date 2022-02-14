
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct flite_drvdata {scalar_t__ num_instances; } ;
struct fimc_lite {scalar_t__ index; int clock; int regs; int lock; int slock; int irq_queue; struct platform_device* pdev; struct flite_drvdata* dd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct fimc_lite* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ,int ,struct fimc_lite*) ;
 int FUNC_10 (struct fimc_lite*) ;
 int FUNC_11 (struct fimc_lite*) ;
 int FUNC_12 (struct fimc_lite*) ;
 int FUNC_13 (struct fimc_lite*) ;
 int FUNC_14 (struct fimc_lite*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int,char*) ;
 struct of_device_id* FUNC_18 (int ,int) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct fimc_lite*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct device*,int ) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_9)
{
 struct flite_drvdata *VAR_10 = ((void*)0);
 struct device *VAR_11 = &VAR_9->dev;
 const struct of_device_id *VAR_12;
 struct fimc_lite *VAR_13;
 struct resource *VAR_14;
 int VAR_15;

 if (!VAR_11->of_node)
  return -VAR_1;

 VAR_13 = FUNC_8(VAR_11, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_2;

 VAR_12 = FUNC_18(VAR_8, VAR_11->of_node);
 if (VAR_12)
  VAR_10 = (struct flite_drvdata *)VAR_12->data;
 VAR_13->index = FUNC_17(VAR_11->of_node, "fimc-lite");

 if (!VAR_10 || VAR_13->index >= VAR_10->num_instances ||
      VAR_13->index < 0) {
  FUNC_5(VAR_11, "Wrong %pOF node alias\n", VAR_11->of_node);
  return -VAR_0;
 }

 VAR_13->dd = VAR_10;
 VAR_13->pdev = VAR_9;

 FUNC_15(&VAR_13->irq_queue);
 FUNC_23(&VAR_13->slock);
 FUNC_16(&VAR_13->lock);

 VAR_14 = FUNC_19(VAR_9, VAR_6, 0);
 VAR_13->regs = FUNC_7(VAR_11, VAR_14);
 if (FUNC_1(VAR_13->regs))
  return FUNC_2(VAR_13->regs);

 VAR_14 = FUNC_19(VAR_9, VAR_5, 0);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_11, "Failed to get IRQ resource\n");
  return -VAR_3;
 }

 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_9(VAR_11, VAR_14->start, VAR_7,
          0, FUNC_6(VAR_11), VAR_13);
 if (VAR_15) {
  FUNC_5(VAR_11, "Failed to install irq (%d)\n", VAR_15);
  goto err_clk_put;
 }


 VAR_15 = FUNC_12(VAR_13);
 if (VAR_15)
  goto err_clk_put;

 FUNC_20(VAR_9, VAR_13);
 FUNC_21(VAR_11);

 if (!FUNC_22(VAR_11)) {
  VAR_15 = FUNC_3(VAR_13->clock);
  if (VAR_15 < 0)
   goto err_sd;
 }

 FUNC_24(VAR_11, FUNC_0(32));

 FUNC_13(VAR_13);

 FUNC_4(VAR_11, "FIMC-LITE.%d registered successfully\n",
  VAR_13->index);
 return 0;

err_sd:
 FUNC_14(VAR_13);
err_clk_put:
 FUNC_11(VAR_13);
 return VAR_15;
}
