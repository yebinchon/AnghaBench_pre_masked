
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int of_node; } ;
struct spi_master {int auto_runtime_pm; int mode_bits; int bits_per_word_mask; int max_speed_hz; int min_speed_hz; int can_dma; void* dma_rx; void* dma_tx; int handle_err; int unprepare_message; int prepare_message; int transfer_one; int cleanup; int setup; TYPE_1__ dev; int bus_num; } ;
struct resource {int start; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;
struct img_spfi {int irq; void* sys_clk; void* spfi_clk; void* tx_ch; void* rx_ch; TYPE_2__* dev; int phys; void* regs; int lock; struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 void* FUNC_8 (TYPE_2__*,char*) ;
 void* FUNC_9 (TYPE_2__*,struct resource*) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct img_spfi*) ;
 int FUNC_11 (TYPE_2__*,struct spi_master*) ;
 int FUNC_12 (void*) ;
 void* FUNC_13 (TYPE_2__*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*,int*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct spi_master*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (struct img_spfi*) ;
 int FUNC_23 (struct img_spfi*,int ,int ) ;
 struct spi_master* FUNC_24 (TYPE_2__*,int) ;
 struct img_spfi* FUNC_25 (struct spi_master*) ;
 int FUNC_26 (struct spi_master*) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_19)
{
 struct spi_master *VAR_20;
 struct img_spfi *VAR_21;
 struct resource *VAR_22;
 int VAR_23;
 u32 VAR_24;

 VAR_20 = FUNC_24(&VAR_19->dev, sizeof(*VAR_21));
 if (!VAR_20)
  return -VAR_0;
 FUNC_18(VAR_19, VAR_20);

 VAR_21 = FUNC_25(VAR_20);
 VAR_21->dev = &VAR_19->dev;
 VAR_21->master = VAR_20;
 FUNC_27(&VAR_21->lock);

 VAR_22 = FUNC_17(VAR_19, VAR_1, 0);
 VAR_21->regs = FUNC_9(VAR_21->dev, VAR_22);
 if (FUNC_0(VAR_21->regs)) {
  VAR_23 = FUNC_1(VAR_21->regs);
  goto put_spi;
 }
 VAR_21->phys = VAR_22->start;

 VAR_21->irq = FUNC_16(VAR_19, 0);
 if (VAR_21->irq < 0) {
  VAR_23 = VAR_21->irq;
  goto put_spi;
 }
 VAR_23 = FUNC_10(VAR_21->dev, VAR_21->irq, VAR_14,
          VAR_2, FUNC_6(VAR_21->dev), VAR_21);
 if (VAR_23)
  goto put_spi;

 VAR_21->sys_clk = FUNC_8(VAR_21->dev, "sys");
 if (FUNC_0(VAR_21->sys_clk)) {
  VAR_23 = FUNC_1(VAR_21->sys_clk);
  goto put_spi;
 }
 VAR_21->spfi_clk = FUNC_8(VAR_21->dev, "spfi");
 if (FUNC_0(VAR_21->spfi_clk)) {
  VAR_23 = FUNC_1(VAR_21->spfi_clk);
  goto put_spi;
 }

 VAR_23 = FUNC_5(VAR_21->sys_clk);
 if (VAR_23)
  goto put_spi;
 VAR_23 = FUNC_5(VAR_21->spfi_clk);
 if (VAR_23)
  goto disable_pclk;

 FUNC_22(VAR_21);




 FUNC_23(VAR_21, VAR_4, VAR_3);

 VAR_20->auto_runtime_pm = 1;
 VAR_20->bus_num = VAR_19->id;
 VAR_20->mode_bits = VAR_6 | VAR_5 | VAR_9 | VAR_7;
 if (FUNC_14(VAR_21->dev->of_node, "img,supports-quad-mode"))
  VAR_20->mode_bits |= VAR_10 | VAR_8;
 VAR_20->dev.of_node = VAR_19->dev.of_node;
 VAR_20->bits_per_word_mask = FUNC_2(32) | FUNC_2(8);
 VAR_20->max_speed_hz = FUNC_4(VAR_21->spfi_clk) / 4;
 VAR_20->min_speed_hz = FUNC_4(VAR_21->spfi_clk) / 512;
 if (!FUNC_15(VAR_21->dev->of_node, "spfi-max-frequency",
      &VAR_24)) {
  if (VAR_20->max_speed_hz > VAR_24)
   VAR_20->max_speed_hz = VAR_24;
 }

 VAR_20->setup = VAR_16;
 VAR_20->cleanup = VAR_12;
 VAR_20->transfer_one = VAR_17;
 VAR_20->prepare_message = VAR_15;
 VAR_20->unprepare_message = VAR_18;
 VAR_20->handle_err = VAR_13;

 VAR_21->tx_ch = FUNC_13(VAR_21->dev, "tx");
 VAR_21->rx_ch = FUNC_13(VAR_21->dev, "rx");
 if (!VAR_21->tx_ch || !VAR_21->rx_ch) {
  if (VAR_21->tx_ch)
   FUNC_12(VAR_21->tx_ch);
  if (VAR_21->rx_ch)
   FUNC_12(VAR_21->rx_ch);
  FUNC_7(VAR_21->dev, "Failed to get DMA channels, falling back to PIO mode\n");
 } else {
  VAR_20->dma_tx = VAR_21->tx_ch;
  VAR_20->dma_rx = VAR_21->rx_ch;
  VAR_20->can_dma = VAR_11;
 }

 FUNC_21(VAR_21->dev);
 FUNC_20(VAR_21->dev);

 VAR_23 = FUNC_11(VAR_21->dev, VAR_20);
 if (VAR_23)
  goto disable_pm;

 return 0;

disable_pm:
 FUNC_19(VAR_21->dev);
 if (VAR_21->rx_ch)
  FUNC_12(VAR_21->rx_ch);
 if (VAR_21->tx_ch)
  FUNC_12(VAR_21->tx_ch);
 FUNC_3(VAR_21->spfi_clk);
disable_pclk:
 FUNC_3(VAR_21->sys_clk);
put_spi:
 FUNC_26(VAR_20);

 return VAR_23;
}
