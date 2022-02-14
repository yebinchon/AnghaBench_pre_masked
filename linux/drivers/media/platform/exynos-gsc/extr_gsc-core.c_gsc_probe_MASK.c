
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct gsc_driverdata {int num_entities; int num_clocks; int* clk_names; int * variant; } ;
struct gsc_dev {int id; int num_clocks; int * clock; int v4l2_dev; int regs; int lock; int slock; int irq_queue; struct platform_device* pdev; int variant; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,size_t) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int) ;
 int FUNC_9 (struct device*,struct resource*) ;
 struct gsc_dev* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int ,int ,int ,int ,struct gsc_dev*) ;
 int FUNC_12 (struct gsc_dev*) ;
 int VAR_6 ;
 int FUNC_13 (struct gsc_dev*) ;
 struct gsc_driverdata const VAR_7 ;
 int FUNC_14 (struct gsc_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*) ;
 struct gsc_driverdata* FUNC_18 (struct device*) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct gsc_dev*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct device*,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct device*,int ) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_8)
{
 struct gsc_dev *VAR_9;
 struct resource *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 const struct gsc_driverdata *VAR_12 = FUNC_18(VAR_11);
 int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_10(VAR_11, sizeof(struct gsc_dev), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_13 = FUNC_17(VAR_8->dev.of_node, "gsc");
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_12 == &VAR_7)
  FUNC_7(VAR_11, "compatible 'exynos5-gsc' is deprecated\n");

 VAR_9->id = VAR_13;
 if (VAR_9->id >= VAR_12->num_entities) {
  FUNC_6(VAR_11, "Invalid platform device id: %d\n", VAR_9->id);
  return -VAR_0;
 }

 VAR_9->num_clocks = VAR_12->num_clocks;
 VAR_9->variant = VAR_12->variant[VAR_9->id];
 VAR_9->pdev = VAR_8;

 FUNC_15(&VAR_9->irq_queue);
 FUNC_23(&VAR_9->slock);
 FUNC_16(&VAR_9->lock);

 VAR_10 = FUNC_19(VAR_8, VAR_5, 0);
 VAR_9->regs = FUNC_9(VAR_11, VAR_10);
 if (FUNC_1(VAR_9->regs))
  return FUNC_2(VAR_9->regs);

 VAR_10 = FUNC_19(VAR_8, VAR_4, 0);
 if (!VAR_10) {
  FUNC_6(VAR_11, "failed to get IRQ resource\n");
  return -VAR_2;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->num_clocks; VAR_14++) {
  VAR_9->clock[VAR_14] = FUNC_8(VAR_11, VAR_12->clk_names[VAR_14]);
  if (FUNC_1(VAR_9->clock[VAR_14])) {
   FUNC_6(VAR_11, "failed to get clock: %s\n",
    VAR_12->clk_names[VAR_14]);
   return FUNC_2(VAR_9->clock[VAR_14]);
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->num_clocks; VAR_14++) {
  VAR_13 = FUNC_4(VAR_9->clock[VAR_14]);
  if (VAR_13) {
   FUNC_6(VAR_11, "clock prepare failed for clock: %s\n",
    VAR_12->clk_names[VAR_14]);
   while (--VAR_14 >= 0)
    FUNC_3(VAR_9->clock[VAR_14]);
   return VAR_13;
  }
 }

 VAR_13 = FUNC_11(VAR_11, VAR_10->start, VAR_6,
    0, VAR_8->name, VAR_9);
 if (VAR_13) {
  FUNC_6(VAR_11, "failed to install irq (%d)\n", VAR_13);
  goto err_clk;
 }

 VAR_13 = FUNC_24(VAR_11, &VAR_9->v4l2_dev);
 if (VAR_13)
  goto err_clk;

 VAR_13 = FUNC_13(VAR_9);
 if (VAR_13)
  goto err_v4l2;

 FUNC_20(VAR_8, VAR_9);

 FUNC_12(VAR_9);
 FUNC_14(VAR_9);

 FUNC_26(VAR_11, FUNC_0(32));

 FUNC_5(VAR_11, "gsc-%d registered successfully\n", VAR_9->id);

 FUNC_22(VAR_11);
 FUNC_21(VAR_11);

 return 0;

err_v4l2:
 FUNC_25(&VAR_9->v4l2_dev);
err_clk:
 for (VAR_14 = VAR_9->num_clocks - 1; VAR_14 >= 0; VAR_14--)
  FUNC_3(VAR_9->clock[VAR_14]);
 return VAR_13;
}
