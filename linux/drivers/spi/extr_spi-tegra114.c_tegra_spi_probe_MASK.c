
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct tegra_spi_data {int irq; int max_buf_size; int dma_buf_size; scalar_t__ last_used_cs; void* def_command2_reg; void* spi_cs_timing2; void* spi_cs_timing1; int def_command1_reg; int rst; int xfer_completion; int rx_dma_complete; int tx_dma_complete; int clk; int phys; int base; int soc_data; int lock; TYPE_2__* dev; struct spi_master* master; } ;
struct TYPE_18__ {int of_node; } ;
struct spi_master {int max_speed_hz; int use_gpio_descriptors; int mode_bits; int auto_runtime_pm; int bus_num; TYPE_1__ dev; scalar_t__ num_chipselect; int set_cs_timing; int transfer_one_message; int cleanup; int setup; int bits_per_word_mask; } ;
struct resource {int start; } ;
struct TYPE_19__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,struct spi_master*) ;
 int FUNC_9 (int,struct tegra_spi_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ,char*,int*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct spi_master*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (int,int ,int ,int ,int ,struct tegra_spi_data*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 struct spi_master* FUNC_26 (TYPE_2__*,int) ;
 struct tegra_spi_data* FUNC_27 (struct spi_master*) ;
 int FUNC_28 (struct spi_master*) ;
 int FUNC_29 (int *) ;
 int VAR_19 ;
 int FUNC_30 (struct tegra_spi_data*,int) ;
 int FUNC_31 (struct tegra_spi_data*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_32 (struct tegra_spi_data*,int ) ;
 int FUNC_33 (TYPE_2__*) ;
 int FUNC_34 (TYPE_2__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_35 (struct tegra_spi_data*,int ,int ) ;
 int FUNC_36 (int) ;

__attribute__((used)) static int FUNC_37(struct platform_device *VAR_25)
{
 struct spi_master *VAR_26;
 struct tegra_spi_data *VAR_27;
 struct resource *VAR_28;
 int VAR_29, VAR_30;
 int VAR_31;

 VAR_26 = FUNC_26(&VAR_25->dev, sizeof(*VAR_27));
 if (!VAR_26) {
  FUNC_3(&VAR_25->dev, "master allocation failed\n");
  return -VAR_2;
 }
 FUNC_16(VAR_25, VAR_26);
 VAR_27 = FUNC_27(VAR_26);

 if (FUNC_13(VAR_25->dev.of_node, "spi-max-frequency",
     &VAR_26->max_speed_hz))
  VAR_26->max_speed_hz = 25000000;


 VAR_26->use_gpio_descriptors = 1;
 VAR_26->mode_bits = VAR_10 | VAR_9 | VAR_11 | VAR_15 |
       VAR_18 | VAR_17 | VAR_6;
 VAR_26->bits_per_word_mask = FUNC_2(4, 32);
 VAR_26->setup = VAR_23;
 VAR_26->cleanup = VAR_19;
 VAR_26->transfer_one_message = VAR_24;
 VAR_26->set_cs_timing = VAR_22;
 VAR_26->num_chipselect = VAR_5;
 VAR_26->auto_runtime_pm = 1;
 VAR_31 = FUNC_11(VAR_25->dev.of_node, "spi");
 if (VAR_31 >= 0)
  VAR_26->bus_num = VAR_31;

 VAR_27->master = VAR_26;
 VAR_27->dev = &VAR_25->dev;
 FUNC_29(&VAR_27->lock);

 VAR_27->soc_data = FUNC_12(&VAR_25->dev);
 if (!VAR_27->soc_data) {
  FUNC_3(&VAR_25->dev, "unsupported tegra\n");
  VAR_29 = -VAR_1;
  goto exit_free_master;
 }

 VAR_28 = FUNC_15(VAR_25, VAR_3, 0);
 VAR_27->base = FUNC_6(&VAR_25->dev, VAR_28);
 if (FUNC_0(VAR_27->base)) {
  VAR_29 = FUNC_1(VAR_27->base);
  goto exit_free_master;
 }
 VAR_27->phys = VAR_28->start;

 VAR_30 = FUNC_14(VAR_25, 0);
 VAR_27->irq = VAR_30;

 VAR_27->clk = FUNC_5(&VAR_25->dev, "spi");
 if (FUNC_0(VAR_27->clk)) {
  FUNC_3(&VAR_25->dev, "can not get clock\n");
  VAR_29 = FUNC_1(VAR_27->clk);
  goto exit_free_master;
 }

 VAR_27->rst = FUNC_7(&VAR_25->dev, "spi");
 if (FUNC_0(VAR_27->rst)) {
  FUNC_3(&VAR_25->dev, "can not get reset\n");
  VAR_29 = FUNC_1(VAR_27->rst);
  goto exit_free_master;
 }

 VAR_27->max_buf_size = VAR_14 << 2;
 VAR_27->dma_buf_size = VAR_0;

 VAR_29 = FUNC_31(VAR_27, 1);
 if (VAR_29 < 0)
  goto exit_free_master;
 VAR_29 = FUNC_31(VAR_27, 0);
 if (VAR_29 < 0)
  goto exit_rx_dma_free;
 VAR_27->max_buf_size = VAR_27->dma_buf_size;
 FUNC_10(&VAR_27->tx_dma_complete);
 FUNC_10(&VAR_27->rx_dma_complete);

 FUNC_10(&VAR_27->xfer_completion);

 FUNC_18(&VAR_25->dev);
 if (!FUNC_19(&VAR_25->dev)) {
  VAR_29 = FUNC_33(&VAR_25->dev);
  if (VAR_29)
   goto exit_pm_disable;
 }

 VAR_29 = FUNC_20(&VAR_25->dev);
 if (VAR_29 < 0) {
  FUNC_3(&VAR_25->dev, "pm runtime get failed, e = %d\n", VAR_29);
  goto exit_pm_disable;
 }

 FUNC_24(VAR_27->rst);
 FUNC_36(2);
 FUNC_25(VAR_27->rst);
 VAR_27->def_command1_reg = VAR_16;
 FUNC_35(VAR_27, VAR_27->def_command1_reg, VAR_7);
 VAR_27->spi_cs_timing1 = FUNC_32(VAR_27, VAR_12);
 VAR_27->spi_cs_timing2 = FUNC_32(VAR_27, VAR_13);
 VAR_27->def_command2_reg = FUNC_32(VAR_27, VAR_8);
 VAR_27->last_used_cs = VAR_26->num_chipselect + 1;
 FUNC_21(&VAR_25->dev);
 VAR_29 = FUNC_23(VAR_27->irq, VAR_20,
       VAR_21, VAR_4,
       FUNC_4(&VAR_25->dev), VAR_27);
 if (VAR_29 < 0) {
  FUNC_3(&VAR_25->dev, "Failed to register ISR for IRQ %d\n",
   VAR_27->irq);
  goto exit_pm_disable;
 }

 VAR_26->dev.of_node = VAR_25->dev.of_node;
 VAR_29 = FUNC_8(&VAR_25->dev, VAR_26);
 if (VAR_29 < 0) {
  FUNC_3(&VAR_25->dev, "can not register to master err %d\n", VAR_29);
  goto exit_free_irq;
 }
 return VAR_29;

exit_free_irq:
 FUNC_9(VAR_30, VAR_27);
exit_pm_disable:
 FUNC_17(&VAR_25->dev);
 if (!FUNC_22(&VAR_25->dev))
  FUNC_34(&VAR_25->dev);
 FUNC_30(VAR_27, 0);
exit_rx_dma_free:
 FUNC_30(VAR_27, 1);
exit_free_master:
 FUNC_28(VAR_26);
 return VAR_29;
}
