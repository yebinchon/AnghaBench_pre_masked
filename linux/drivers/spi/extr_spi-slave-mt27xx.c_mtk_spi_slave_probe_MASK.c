
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int of_node; } ;
struct spi_controller {int auto_runtime_pm; int mode_bits; int slave_abort; int setup; int transfer_one; int prepare_message; TYPE_1__ dev; } ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mtk_spi_slave {int spi_clk; int base; TYPE_2__* dev; int xfer_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,struct resource*) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int ,struct spi_controller*) ;
 int FUNC_9 (TYPE_2__*,struct spi_controller*) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct spi_controller*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 struct spi_controller* FUNC_16 (TYPE_2__*,int) ;
 struct mtk_spi_slave* FUNC_17 (struct spi_controller*) ;
 int FUNC_18 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_12)
{
 struct spi_controller *VAR_13;
 struct mtk_spi_slave *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17;

 VAR_13 = FUNC_16(&VAR_12->dev, sizeof(*VAR_14));
 if (!VAR_13) {
  FUNC_4(&VAR_12->dev, "failed to alloc spi slave\n");
  return -VAR_1;
 }

 VAR_13->auto_runtime_pm = 1;
 VAR_13->dev.of_node = VAR_12->dev.of_node;
 VAR_13->mode_bits = VAR_5 | VAR_4;
 VAR_13->mode_bits |= VAR_6;

 VAR_13->prepare_message = VAR_9;
 VAR_13->transfer_one = VAR_11;
 VAR_13->setup = VAR_10;
 VAR_13->slave_abort = VAR_7;

 VAR_14 = FUNC_17(VAR_13);

 FUNC_13(VAR_12, VAR_13);

 FUNC_10(&VAR_14->xfer_done);

 VAR_15 = FUNC_12(VAR_12, VAR_2, 0);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  FUNC_4(&VAR_12->dev, "failed to determine base address\n");
  goto err_put_ctlr;
 }

 VAR_14->dev = &VAR_12->dev;

 VAR_14->base = FUNC_7(&VAR_12->dev, VAR_15);
 if (FUNC_0(VAR_14->base)) {
  VAR_17 = FUNC_1(VAR_14->base);
  goto err_put_ctlr;
 }

 VAR_16 = FUNC_11(VAR_12, 0);
 if (VAR_16 < 0) {
  VAR_17 = VAR_16;
  goto err_put_ctlr;
 }

 VAR_17 = FUNC_8(&VAR_12->dev, VAR_16, VAR_8,
          VAR_3, FUNC_5(&VAR_12->dev), VAR_13);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register irq (%d)\n", VAR_17);
  goto err_put_ctlr;
 }

 VAR_14->spi_clk = FUNC_6(&VAR_12->dev, "spi");
 if (FUNC_0(VAR_14->spi_clk)) {
  VAR_17 = FUNC_1(VAR_14->spi_clk);
  FUNC_4(&VAR_12->dev, "failed to get spi-clk: %d\n", VAR_17);
  goto err_put_ctlr;
 }

 VAR_17 = FUNC_3(VAR_14->spi_clk);
 if (VAR_17 < 0) {
  FUNC_4(&VAR_12->dev, "failed to enable spi_clk (%d)\n", VAR_17);
  goto err_put_ctlr;
 }

 FUNC_15(&VAR_12->dev);

 VAR_17 = FUNC_9(&VAR_12->dev, VAR_13);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev,
   "failed to register slave controller(%d)\n", VAR_17);
  FUNC_2(VAR_14->spi_clk);
  goto err_disable_runtime_pm;
 }

 FUNC_2(VAR_14->spi_clk);

 return 0;

err_disable_runtime_pm:
 FUNC_14(&VAR_12->dev);
err_put_ctlr:
 FUNC_18(VAR_13);

 return VAR_17;
}
