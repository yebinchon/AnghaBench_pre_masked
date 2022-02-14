
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_cec {scalar_t__ tegra_cec_irq; int clk; struct device* adap; int notifier; int * dev; int cec_base; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_9 ;
 struct device* FUNC_3 (int *,struct tegra_cec*,int ,int,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *,struct device*) ;
 int FUNC_6 (int ) ;
 struct device* FUNC_7 (int *) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ,int ) ;
 struct tegra_cec* FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,scalar_t__,int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct tegra_cec*) ;
 int FUNC_20 (struct resource*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_13)
{
 struct device *VAR_14;
 struct tegra_cec *VAR_15;
 struct resource *VAR_16;
 int VAR_17 = 0;

 VAR_14 = FUNC_7(&VAR_13->dev);

 if (FUNC_0(VAR_14))
  return FUNC_2(VAR_14);

 VAR_15 = FUNC_14(&VAR_13->dev, sizeof(struct tegra_cec), VAR_7);

 if (!VAR_15)
  return -VAR_6;

 VAR_16 = FUNC_18(VAR_13, VAR_8, 0);

 if (!VAR_16) {
  FUNC_11(&VAR_13->dev,
   "Unable to allocate resources for device\n");
  return -VAR_4;
 }

 if (!FUNC_15(&VAR_13->dev, VAR_16->start, FUNC_20(VAR_16),
  VAR_13->name)) {
  FUNC_11(&VAR_13->dev,
   "Unable to request mem region for device\n");
  return -VAR_4;
 }

 VAR_15->tegra_cec_irq = FUNC_17(VAR_13, 0);

 if (VAR_15->tegra_cec_irq <= 0)
  return -VAR_4;

 VAR_15->cec_base = FUNC_13(&VAR_13->dev, VAR_16->start,
          FUNC_20(VAR_16));

 if (!VAR_15->cec_base) {
  FUNC_11(&VAR_13->dev, "Unable to grab IOs for device\n");
  return -VAR_4;
 }

 VAR_15->clk = FUNC_12(&VAR_13->dev, "cec");

 if (FUNC_1(VAR_15->clk)) {
  FUNC_11(&VAR_13->dev, "Can't get clock for CEC\n");
  return -VAR_5;
 }

 FUNC_10(VAR_15->clk);


 VAR_15->dev = &VAR_13->dev;

 FUNC_19(VAR_13, VAR_15);

 VAR_17 = FUNC_16(&VAR_13->dev, VAR_15->tegra_cec_irq,
  VAR_10, VAR_11,
  0, "cec_irq", &VAR_13->dev);

 if (VAR_17) {
  FUNC_11(&VAR_13->dev,
   "Unable to request interrupt for device\n");
  goto err_clk;
 }

 VAR_15->adap = FUNC_3(&VAR_12, VAR_15, VAR_9,
   VAR_1 | VAR_2 |
   VAR_0,
   VAR_3);
 if (FUNC_0(VAR_15->adap)) {
  VAR_17 = -VAR_6;
  FUNC_11(&VAR_13->dev, "Couldn't create cec adapter\n");
  goto err_clk;
 }

 VAR_15->notifier = FUNC_5(VAR_14, ((void*)0),
             VAR_15->adap);
 if (!VAR_15->notifier) {
  VAR_17 = -VAR_6;
  goto err_adapter;
 }

 VAR_17 = FUNC_8(VAR_15->adap, &VAR_13->dev);
 if (VAR_17) {
  FUNC_11(&VAR_13->dev, "Couldn't register device\n");
  goto err_notifier;
 }

 return 0;

err_notifier:
 FUNC_6(VAR_15->notifier);
err_adapter:
 FUNC_4(VAR_15->adap);
err_clk:
 FUNC_9(VAR_15->clk);
 return VAR_17;
}
