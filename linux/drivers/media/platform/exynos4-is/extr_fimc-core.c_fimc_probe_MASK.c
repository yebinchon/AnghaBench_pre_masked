
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int start; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {int id; struct device dev; } ;
struct fimc_dev {int id; int * clock; TYPE_1__* drv_data; int regs; int sysreg; int lock; int slock; int irq_queue; int variant; struct platform_device* pdev; } ;
struct TYPE_2__ {int num_entities; scalar_t__ lclk_frequency; int * variant; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct device*,char*,size_t) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct resource*) ;
 struct fimc_dev* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int ,int ,int ,int ,struct fimc_dev*) ;
 int FUNC_12 (struct fimc_dev*) ;
 int FUNC_13 (struct fimc_dev*) ;
 TYPE_1__* FUNC_14 (struct platform_device*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct fimc_dev*) ;
 int VAR_8 ;
 int FUNC_17 (struct fimc_dev*,scalar_t__*) ;
 int FUNC_18 (struct fimc_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct fimc_dev*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct device*,int ) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 u32 VAR_11 = 0;
 struct fimc_dev *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_10(VAR_10, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->pdev = VAR_9;

 if (VAR_10->of_node) {
  VAR_14 = FUNC_17(VAR_12, &VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
 } else {
  VAR_12->drv_data = FUNC_14(VAR_9);
  VAR_12->id = VAR_9->id;
 }
 if (!VAR_12->drv_data || VAR_12->id >= VAR_12->drv_data->num_entities ||
     VAR_12->id < 0) {
  FUNC_7(VAR_10, "Invalid driver data or device id (%d)\n",
   VAR_12->id);
  return -VAR_2;
 }
 if (!VAR_10->of_node)
  VAR_12->variant = VAR_12->drv_data->variant[VAR_12->id];

 FUNC_19(&VAR_12->irq_queue);
 FUNC_25(&VAR_12->slock);
 FUNC_20(&VAR_12->lock);

 VAR_12->sysreg = FUNC_15(VAR_10->of_node);
 if (FUNC_1(VAR_12->sysreg))
  return FUNC_2(VAR_12->sysreg);

 VAR_13 = FUNC_21(VAR_9, VAR_7, 0);
 VAR_12->regs = FUNC_9(VAR_10, VAR_13);
 if (FUNC_1(VAR_12->regs))
  return FUNC_2(VAR_12->regs);

 VAR_13 = FUNC_21(VAR_9, VAR_6, 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_7(VAR_10, "Failed to get IRQ resource\n");
  return -VAR_4;
 }

 VAR_14 = FUNC_12(VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_11 == 0)
  VAR_11 = VAR_12->drv_data->lclk_frequency;

 VAR_14 = FUNC_5(VAR_12->clock[VAR_0], VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_12->clock[VAR_0]);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_11(VAR_10, VAR_13->start, VAR_8,
          0, FUNC_8(VAR_10), VAR_12);
 if (VAR_14 < 0) {
  FUNC_7(VAR_10, "failed to install irq (%d)\n", VAR_14);
  goto err_sclk;
 }

 VAR_14 = FUNC_16(VAR_12);
 if (VAR_14 < 0)
  goto err_sclk;

 FUNC_22(VAR_9, VAR_12);
 FUNC_23(VAR_10);

 if (!FUNC_24(VAR_10)) {
  VAR_14 = FUNC_4(VAR_12->clock[VAR_1]);
  if (VAR_14 < 0)
   goto err_sd;
 }

 FUNC_26(VAR_10, FUNC_0(32));

 FUNC_6(VAR_10, "FIMC.%d registered successfully\n", VAR_12->id);
 return 0;

err_sd:
 FUNC_18(VAR_12);
err_sclk:
 FUNC_3(VAR_12->clock[VAR_0]);
 FUNC_13(VAR_12);
 return VAR_14;
}
