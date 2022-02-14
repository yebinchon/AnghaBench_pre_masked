
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct sprd_spi {int src_clk; int clk; int xfer_completion; TYPE_2__* dev; int phy_base; int base; } ;
struct TYPE_15__ {int of_node; } ;
struct spi_controller {int mode_bits; int auto_runtime_pm; int max_speed_hz; int can_dma; int transfer_one; int set_cs; int bus_num; TYPE_1__ dev; } ;
struct resource {int start; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,struct resource*) ;
 int FUNC_6 (TYPE_2__*,struct spi_controller*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,char*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct spi_controller*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_2__*) ;
 struct spi_controller* FUNC_21 (TYPE_2__*,int) ;
 struct sprd_spi* FUNC_22 (struct spi_controller*) ;
 int FUNC_23 (struct spi_controller*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_24 (struct platform_device*,struct sprd_spi*) ;
 int FUNC_25 (struct platform_device*,struct sprd_spi*) ;
 int FUNC_26 (struct sprd_spi*) ;
 int FUNC_27 (struct platform_device*,struct sprd_spi*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_12)
{
 struct spi_controller *VAR_13;
 struct resource *VAR_14;
 struct sprd_spi *VAR_15;
 int VAR_16;

 VAR_12->id = FUNC_9(VAR_12->dev.of_node, "spi");
 VAR_13 = FUNC_21(&VAR_12->dev, sizeof(*VAR_15));
 if (!VAR_13)
  return -VAR_0;

 VAR_15 = FUNC_22(VAR_13);
 VAR_14 = FUNC_10(VAR_12, VAR_1, 0);
 VAR_15->base = FUNC_5(&VAR_12->dev, VAR_14);
 if (FUNC_0(VAR_15->base)) {
  VAR_16 = FUNC_1(VAR_15->base);
  goto free_controller;
 }

 VAR_15->phy_base = VAR_14->start;
 VAR_15->dev = &VAR_12->dev;
 VAR_13->dev.of_node = VAR_12->dev.of_node;
 VAR_13->mode_bits = VAR_4 | VAR_3 | VAR_2 | VAR_5;
 VAR_13->bus_num = VAR_12->id;
 VAR_13->set_cs = VAR_9;
 VAR_13->transfer_one = VAR_10;
 VAR_13->can_dma = VAR_8;
 VAR_13->auto_runtime_pm = 1;
 VAR_13->max_speed_hz = FUNC_8(VAR_11, VAR_15->src_clk >> 1,
        VAR_7);

 FUNC_7(&VAR_15->xfer_completion);
 FUNC_11(VAR_12, VAR_13);
 VAR_16 = FUNC_24(VAR_12, VAR_15);
 if (VAR_16)
  goto free_controller;

 VAR_16 = FUNC_27(VAR_12, VAR_15);
 if (VAR_16)
  goto free_controller;

 VAR_16 = FUNC_25(VAR_12, VAR_15);
 if (VAR_16)
  goto free_controller;

 VAR_16 = FUNC_3(VAR_15->clk);
 if (VAR_16)
  goto release_dma;

 VAR_16 = FUNC_18(&VAR_12->dev);
 if (VAR_16 < 0)
  goto disable_clk;

 FUNC_19(&VAR_12->dev,
      VAR_6);
 FUNC_20(&VAR_12->dev);
 FUNC_13(&VAR_12->dev);
 VAR_16 = FUNC_14(&VAR_12->dev);
 if (VAR_16 < 0) {
  FUNC_4(&VAR_12->dev, "failed to resume SPI controller\n");
  goto err_rpm_put;
 }

 VAR_16 = FUNC_6(&VAR_12->dev, VAR_13);
 if (VAR_16)
  goto err_rpm_put;

 FUNC_15(&VAR_12->dev);
 FUNC_16(&VAR_12->dev);

 return 0;

err_rpm_put:
 FUNC_17(&VAR_12->dev);
 FUNC_12(&VAR_12->dev);
disable_clk:
 FUNC_2(VAR_15->clk);
release_dma:
 FUNC_26(VAR_15);
free_controller:
 FUNC_23(VAR_13);

 return VAR_16;
}
