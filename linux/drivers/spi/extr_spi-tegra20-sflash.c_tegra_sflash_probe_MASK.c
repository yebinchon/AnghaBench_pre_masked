
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct tegra_sflash_data {int irq; int def_command_reg; int rst; int xfer_completion; int clk; int base; TYPE_2__* dev; int lock; struct spi_master* master; } ;
struct TYPE_17__ {int of_node; } ;
struct spi_master {int mode_bits; int auto_runtime_pm; int max_speed_hz; TYPE_1__ dev; int num_chipselect; int transfer_one_message; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,struct spi_master*) ;
 int FUNC_8 (int,struct tegra_sflash_data*) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ,char*,int*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct spi_master*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int,int ,int ,int ,struct tegra_sflash_data*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 struct spi_master* FUNC_23 (TYPE_2__*,int) ;
 struct tegra_sflash_data* FUNC_24 (struct spi_master*) ;
 int FUNC_25 (struct spi_master*) ;
 int FUNC_26 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_29 (struct tegra_sflash_data*,int,int ) ;
 int FUNC_30 (int) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_11)
{
 struct spi_master *VAR_12;
 struct tegra_sflash_data *VAR_13;
 int VAR_14;
 const struct of_device_id *VAR_15;

 VAR_15 = FUNC_10(VAR_9, &VAR_11->dev);
 if (!VAR_15) {
  FUNC_2(&VAR_11->dev, "Error: No device match found\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_23(&VAR_11->dev, sizeof(*VAR_13));
 if (!VAR_12) {
  FUNC_2(&VAR_11->dev, "master allocation failed\n");
  return -VAR_1;
 }


 VAR_12->mode_bits = VAR_5 | VAR_4;
 VAR_12->transfer_one_message = VAR_10;
 VAR_12->auto_runtime_pm = 1;
 VAR_12->num_chipselect = VAR_2;

 FUNC_13(VAR_11, VAR_12);
 VAR_13 = FUNC_24(VAR_12);
 VAR_13->master = VAR_12;
 VAR_13->dev = &VAR_11->dev;
 FUNC_26(&VAR_13->lock);

 if (FUNC_11(VAR_13->dev->of_node, "spi-max-frequency",
     &VAR_12->max_speed_hz))
  VAR_12->max_speed_hz = 25000000;

 VAR_13->base = FUNC_5(VAR_11, 0);
 if (FUNC_0(VAR_13->base)) {
  VAR_14 = FUNC_1(VAR_13->base);
  goto exit_free_master;
 }

 VAR_13->irq = FUNC_12(VAR_11, 0);
 VAR_14 = FUNC_20(VAR_13->irq, VAR_8, 0,
   FUNC_3(&VAR_11->dev), VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "Failed to register ISR for IRQ %d\n",
     VAR_13->irq);
  goto exit_free_master;
 }

 VAR_13->clk = FUNC_4(&VAR_11->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_2(&VAR_11->dev, "can not get clock\n");
  VAR_14 = FUNC_1(VAR_13->clk);
  goto exit_free_irq;
 }

 VAR_13->rst = FUNC_6(&VAR_11->dev, "spi");
 if (FUNC_0(VAR_13->rst)) {
  FUNC_2(&VAR_11->dev, "can not get reset\n");
  VAR_14 = FUNC_1(VAR_13->rst);
  goto exit_free_irq;
 }

 FUNC_9(&VAR_13->xfer_completion);
 FUNC_15(&VAR_11->dev);
 if (!FUNC_16(&VAR_11->dev)) {
  VAR_14 = FUNC_27(&VAR_11->dev);
  if (VAR_14)
   goto exit_pm_disable;
 }

 VAR_14 = FUNC_17(&VAR_11->dev);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "pm runtime get failed, e = %d\n", VAR_14);
  goto exit_pm_disable;
 }


 FUNC_21(VAR_13->rst);
 FUNC_30(2);
 FUNC_22(VAR_13->rst);

 VAR_13->def_command_reg = VAR_7 | VAR_6;
 FUNC_29(VAR_13, VAR_13->def_command_reg, VAR_3);
 FUNC_18(&VAR_11->dev);

 VAR_12->dev.of_node = VAR_11->dev.of_node;
 VAR_14 = FUNC_7(&VAR_11->dev, VAR_12);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "can not register to master err %d\n", VAR_14);
  goto exit_pm_disable;
 }
 return VAR_14;

exit_pm_disable:
 FUNC_14(&VAR_11->dev);
 if (!FUNC_19(&VAR_11->dev))
  FUNC_28(&VAR_11->dev);
exit_free_irq:
 FUNC_8(VAR_13->irq, VAR_13);
exit_free_master:
 FUNC_25(VAR_12);
 return VAR_14;
}
