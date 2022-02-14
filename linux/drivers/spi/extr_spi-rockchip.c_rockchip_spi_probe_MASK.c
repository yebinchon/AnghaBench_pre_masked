
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int of_node; } ;
struct spi_master {int auto_runtime_pm; int mode_bits; int bits_per_word_mask; int min_speed_hz; int * dma_tx; int * dma_rx; int can_dma; int flags; int handle_err; int max_transfer_size; int transfer_one; int set_cs; int max_speed_hz; TYPE_1__ dev; int num_chipselect; int bus_num; } ;
struct rockchip_spi {int freq; int rsd; int * apb_pclk; int * spiclk; scalar_t__ dma_addr_rx; scalar_t__ dma_addr_tx; TYPE_2__* dev; int fifo_len; int * regs; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*,...) ;
 void* FUNC_10 (TYPE_2__*,char*) ;
 int * FUNC_11 (TYPE_2__*,struct resource*) ;
 int FUNC_12 (TYPE_2__*,int,int ,int *,int ,int ,struct spi_master*) ;
 int FUNC_13 (TYPE_2__*,struct spi_master*) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (TYPE_2__*,char*) ;
 int FUNC_16 (struct rockchip_spi*) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int ,char*,int*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct spi_master*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct spi_master* FUNC_25 (TYPE_2__*,int) ;
 int FUNC_26 (struct rockchip_spi*,int) ;
 struct rockchip_spi* FUNC_27 (struct spi_master*) ;
 int FUNC_28 (struct spi_master*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_23)
{
 int VAR_24;
 struct rockchip_spi *VAR_25;
 struct spi_master *VAR_26;
 struct resource *VAR_27;
 u32 VAR_28;

 VAR_26 = FUNC_25(&VAR_23->dev, sizeof(struct rockchip_spi));
 if (!VAR_26)
  return -VAR_4;

 FUNC_21(VAR_23, VAR_26);

 VAR_25 = FUNC_27(VAR_26);


 VAR_27 = FUNC_20(VAR_23, VAR_6, 0);
 VAR_25->regs = FUNC_11(&VAR_23->dev, VAR_27);
 if (FUNC_1(VAR_25->regs)) {
  VAR_24 = FUNC_2(VAR_25->regs);
  goto err_put_master;
 }

 VAR_25->apb_pclk = FUNC_10(&VAR_23->dev, "apb_pclk");
 if (FUNC_1(VAR_25->apb_pclk)) {
  FUNC_7(&VAR_23->dev, "Failed to get apb_pclk\n");
  VAR_24 = FUNC_2(VAR_25->apb_pclk);
  goto err_put_master;
 }

 VAR_25->spiclk = FUNC_10(&VAR_23->dev, "spiclk");
 if (FUNC_1(VAR_25->spiclk)) {
  FUNC_7(&VAR_23->dev, "Failed to get spi_pclk\n");
  VAR_24 = FUNC_2(VAR_25->spiclk);
  goto err_put_master;
 }

 VAR_24 = FUNC_6(VAR_25->apb_pclk);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_23->dev, "Failed to enable apb_pclk\n");
  goto err_put_master;
 }

 VAR_24 = FUNC_6(VAR_25->spiclk);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_23->dev, "Failed to enable spi_clk\n");
  goto err_disable_apbclk;
 }

 FUNC_26(VAR_25, 0);

 VAR_24 = FUNC_19(VAR_23, 0);
 if (VAR_24 < 0)
  goto err_disable_spiclk;

 VAR_24 = FUNC_12(&VAR_23->dev, VAR_24, VAR_19, ((void*)0),
   VAR_7, FUNC_8(&VAR_23->dev), VAR_26);
 if (VAR_24)
  goto err_disable_spiclk;

 VAR_25->dev = &VAR_23->dev;
 VAR_25->freq = FUNC_5(VAR_25->spiclk);

 if (!FUNC_18(VAR_23->dev.of_node, "rx-sample-delay-ns",
      &VAR_28)) {

  u32 VAR_29 = FUNC_0(VAR_28 * (VAR_25->freq >> 8),
    1000000000 >> 8);
  if (!VAR_29) {
   FUNC_9(VAR_25->dev, "%u Hz are too slow to express %u ns delay\n",
     VAR_25->freq, VAR_28);
  } else if (VAR_29 > VAR_2) {
   VAR_29 = VAR_2;
   FUNC_9(VAR_25->dev, "%u Hz are too fast to express %u ns delay, clamping at %u ns\n",
     VAR_25->freq, VAR_28,
     VAR_2 * 1000000000U / VAR_25->freq);
  }
  VAR_25->rsd = VAR_29;
 }

 VAR_25->fifo_len = FUNC_16(VAR_25);
 if (!VAR_25->fifo_len) {
  FUNC_7(&VAR_23->dev, "Failed to get fifo length\n");
  VAR_24 = -VAR_3;
  goto err_disable_spiclk;
 }

 FUNC_24(&VAR_23->dev);
 FUNC_23(&VAR_23->dev);

 VAR_26->auto_runtime_pm = 1;
 VAR_26->bus_num = VAR_23->id;
 VAR_26->mode_bits = VAR_13 | VAR_12 | VAR_14 | VAR_15;
 VAR_26->num_chipselect = VAR_9;
 VAR_26->dev.of_node = VAR_23->dev.of_node;
 VAR_26->bits_per_word_mask = FUNC_3(16) | FUNC_3(8) | FUNC_3(4);
 VAR_26->min_speed_hz = VAR_25->freq / VAR_0;
 VAR_26->max_speed_hz = FUNC_17(VAR_25->freq / VAR_1, VAR_8);

 VAR_26->set_cs = VAR_21;
 VAR_26->transfer_one = VAR_22;
 VAR_26->max_transfer_size = VAR_20;
 VAR_26->handle_err = VAR_18;
 VAR_26->flags = VAR_16;

 VAR_26->dma_tx = FUNC_15(VAR_25->dev, "tx");
 if (FUNC_1(VAR_26->dma_tx)) {

  if (FUNC_2(VAR_26->dma_tx) == -VAR_5) {
   VAR_24 = -VAR_5;
   goto err_disable_pm_runtime;
  }
  FUNC_9(VAR_25->dev, "Failed to request TX DMA channel\n");
  VAR_26->dma_tx = ((void*)0);
 }

 VAR_26->dma_rx = FUNC_15(VAR_25->dev, "rx");
 if (FUNC_1(VAR_26->dma_rx)) {
  if (FUNC_2(VAR_26->dma_rx) == -VAR_5) {
   VAR_24 = -VAR_5;
   goto err_free_dma_tx;
  }
  FUNC_9(VAR_25->dev, "Failed to request RX DMA channel\n");
  VAR_26->dma_rx = ((void*)0);
 }

 if (VAR_26->dma_tx && VAR_26->dma_rx) {
  VAR_25->dma_addr_tx = VAR_27->start + VAR_11;
  VAR_25->dma_addr_rx = VAR_27->start + VAR_10;
  VAR_26->can_dma = VAR_17;
 }

 VAR_24 = FUNC_13(&VAR_23->dev, VAR_26);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_23->dev, "Failed to register master\n");
  goto err_free_dma_rx;
 }

 return 0;

err_free_dma_rx:
 if (VAR_26->dma_rx)
  FUNC_14(VAR_26->dma_rx);
err_free_dma_tx:
 if (VAR_26->dma_tx)
  FUNC_14(VAR_26->dma_tx);
err_disable_pm_runtime:
 FUNC_22(&VAR_23->dev);
err_disable_spiclk:
 FUNC_4(VAR_25->spiclk);
err_disable_apbclk:
 FUNC_4(VAR_25->apb_pclk);
err_put_master:
 FUNC_28(VAR_26);

 return VAR_24;
}
