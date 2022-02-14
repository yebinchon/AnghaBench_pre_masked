
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct tegra_slink_data {int irq; int max_buf_size; int dma_buf_size; int clk; int def_command2_reg; int def_command_reg; int xfer_completion; int rx_dma_complete; int tx_dma_complete; int rst; int base; int phys; TYPE_2__* dev; int lock; struct tegra_slink_chip_data const* chip_data; struct spi_master* master; } ;
struct tegra_slink_chip_data {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct spi_master {int mode_bits; int auto_runtime_pm; int max_speed_hz; TYPE_1__ dev; int num_chipselect; int unprepare_message; int transfer_one; int prepare_message; int setup; } ;
struct resource {int start; } ;
struct TYPE_19__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct tegra_slink_chip_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,struct spi_master*) ;
 int FUNC_11 (int,struct tegra_slink_data*) ;
 int FUNC_12 (int *) ;
 struct of_device_id* FUNC_13 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,char*,int*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct spi_master*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (int,int ,int ,int ,int ,struct tegra_slink_data*) ;
 struct spi_master* FUNC_25 (TYPE_2__*,int) ;
 struct tegra_slink_data* FUNC_26 (struct spi_master*) ;
 int FUNC_27 (struct spi_master*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct tegra_slink_data*,int) ;
 int FUNC_30 (struct tegra_slink_data*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (TYPE_2__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_33 (struct tegra_slink_data*,int ,int ) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_21)
{
 struct spi_master *VAR_22;
 struct tegra_slink_data *VAR_23;
 struct resource *VAR_24;
 int VAR_25, VAR_26;
 const struct tegra_slink_chip_data *VAR_27 = ((void*)0);
 const struct of_device_id *VAR_28;

 VAR_28 = FUNC_13(VAR_16, &VAR_21->dev);
 if (!VAR_28) {
  FUNC_5(&VAR_21->dev, "Error: No device match found\n");
  return -VAR_1;
 }
 VAR_27 = VAR_28->data;

 VAR_22 = FUNC_25(&VAR_21->dev, sizeof(*VAR_23));
 if (!VAR_22) {
  FUNC_5(&VAR_21->dev, "master allocation failed\n");
  return -VAR_2;
 }


 VAR_22->mode_bits = VAR_12 | VAR_11 | VAR_13;
 VAR_22->setup = VAR_18;
 VAR_22->prepare_message = VAR_17;
 VAR_22->transfer_one = VAR_19;
 VAR_22->unprepare_message = VAR_20;
 VAR_22->auto_runtime_pm = 1;
 VAR_22->num_chipselect = VAR_5;

 FUNC_17(VAR_21, VAR_22);
 VAR_23 = FUNC_26(VAR_22);
 VAR_23->master = VAR_22;
 VAR_23->dev = &VAR_21->dev;
 VAR_23->chip_data = VAR_27;
 FUNC_28(&VAR_23->lock);

 if (FUNC_14(VAR_23->dev->of_node, "spi-max-frequency",
     &VAR_22->max_speed_hz))
  VAR_22->max_speed_hz = 25000000;

 VAR_24 = FUNC_16(VAR_21, VAR_3, 0);
 if (!VAR_24) {
  FUNC_5(&VAR_21->dev, "No IO memory resource\n");
  VAR_25 = -VAR_1;
  goto exit_free_master;
 }
 VAR_23->phys = VAR_24->start;
 VAR_23->base = FUNC_8(&VAR_21->dev, VAR_24);
 if (FUNC_0(VAR_23->base)) {
  VAR_25 = FUNC_1(VAR_23->base);
  goto exit_free_master;
 }


 VAR_23->clk = FUNC_7(&VAR_21->dev, ((void*)0));
 if (FUNC_0(VAR_23->clk)) {
  VAR_25 = FUNC_1(VAR_23->clk);
  FUNC_5(&VAR_21->dev, "Can not get clock %d\n", VAR_25);
  goto exit_free_master;
 }
 VAR_25 = FUNC_4(VAR_23->clk);
 if (VAR_25 < 0) {
  FUNC_5(&VAR_21->dev, "Clock prepare failed %d\n", VAR_25);
  goto exit_free_master;
 }
 VAR_25 = FUNC_3(VAR_23->clk);
 if (VAR_25 < 0) {
  FUNC_5(&VAR_21->dev, "Clock enable failed %d\n", VAR_25);
  goto exit_free_master;
 }

 VAR_26 = FUNC_15(VAR_21, 0);
 VAR_23->irq = VAR_26;
 VAR_25 = FUNC_24(VAR_23->irq, VAR_14,
   VAR_15, VAR_4,
   FUNC_6(&VAR_21->dev), VAR_23);
 if (VAR_25 < 0) {
  FUNC_5(&VAR_21->dev, "Failed to register ISR for IRQ %d\n",
     VAR_23->irq);
  goto exit_clk_disable;
 }

 VAR_23->rst = FUNC_9(&VAR_21->dev, "spi");
 if (FUNC_0(VAR_23->rst)) {
  FUNC_5(&VAR_21->dev, "can not get reset\n");
  VAR_25 = FUNC_1(VAR_23->rst);
  goto exit_free_irq;
 }

 VAR_23->max_buf_size = VAR_9 << 2;
 VAR_23->dma_buf_size = VAR_0;

 VAR_25 = FUNC_30(VAR_23, 1);
 if (VAR_25 < 0)
  goto exit_free_irq;
 VAR_25 = FUNC_30(VAR_23, 0);
 if (VAR_25 < 0)
  goto exit_rx_dma_free;
 VAR_23->max_buf_size = VAR_23->dma_buf_size;
 FUNC_12(&VAR_23->tx_dma_complete);
 FUNC_12(&VAR_23->rx_dma_complete);

 FUNC_12(&VAR_23->xfer_completion);

 FUNC_19(&VAR_21->dev);
 if (!FUNC_20(&VAR_21->dev)) {
  VAR_25 = FUNC_31(&VAR_21->dev);
  if (VAR_25)
   goto exit_pm_disable;
 }

 VAR_25 = FUNC_21(&VAR_21->dev);
 if (VAR_25 < 0) {
  FUNC_5(&VAR_21->dev, "pm runtime get failed, e = %d\n", VAR_25);
  goto exit_pm_disable;
 }
 VAR_23->def_command_reg = VAR_10;
 VAR_23->def_command2_reg = VAR_8;
 FUNC_33(VAR_23, VAR_23->def_command_reg, VAR_6);
 FUNC_33(VAR_23, VAR_23->def_command2_reg, VAR_7);
 FUNC_22(&VAR_21->dev);

 VAR_22->dev.of_node = VAR_21->dev.of_node;
 VAR_25 = FUNC_10(&VAR_21->dev, VAR_22);
 if (VAR_25 < 0) {
  FUNC_5(&VAR_21->dev, "can not register to master err %d\n", VAR_25);
  goto exit_pm_disable;
 }
 return VAR_25;

exit_pm_disable:
 FUNC_18(&VAR_21->dev);
 if (!FUNC_23(&VAR_21->dev))
  FUNC_32(&VAR_21->dev);
 FUNC_29(VAR_23, 0);
exit_rx_dma_free:
 FUNC_29(VAR_23, 1);
exit_free_irq:
 FUNC_11(VAR_26, VAR_23);
exit_clk_disable:
 FUNC_2(VAR_23->clk);
exit_free_master:
 FUNC_27(VAR_22);
 return VAR_25;
}
