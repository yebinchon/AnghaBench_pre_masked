
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct stm32_spi_cfg {int (* config ) (struct stm32_spi*) ;int baud_rate_div_min; int baud_rate_div_max; int (* get_bpw_mask ) (struct stm32_spi*) ;int (* get_fifo_size ) (struct stm32_spi*) ;scalar_t__ has_fifo; int irq_handler_thread; int irq_handler_event; } ;
struct stm32_spi {int irq; int clk_rate; int clk; void* dma_rx; void* dma_tx; TYPE_3__* dev; struct stm32_spi_cfg const* cfg; int fifo_size; int rst; scalar_t__ phys_addr; int base; int lock; struct spi_master* master; } ;
struct TYPE_19__ {int of_node; } ;
struct spi_master {int auto_runtime_pm; int mode_bits; int max_speed_hz; int min_speed_hz; int* cs_gpios; int num_chipselect; int can_dma; void* dma_rx; void* dma_tx; int unprepare_message; int transfer_one; int prepare_message; int setup; int bits_per_word_mask; int bus_num; TYPE_1__ dev; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_21__ {int of_node; TYPE_2__* driver; } ;
struct platform_device {TYPE_3__ dev; int id; int name; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_22__ {scalar_t__ data; } ;
struct TYPE_20__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int,int ) ;
 int FUNC_10 (TYPE_3__*,struct resource*) ;
 int FUNC_11 (TYPE_3__*,int,int ,int ,int ,int ,struct spi_master*) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*,struct spi_master*) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (TYPE_3__*,char*) ;
 int FUNC_16 (int) ;
 TYPE_7__* FUNC_17 (int ,TYPE_3__*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct spi_master*) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 struct spi_master* FUNC_26 (TYPE_3__*,int) ;
 struct stm32_spi* FUNC_27 (struct spi_master*) ;
 int FUNC_28 (struct spi_master*) ;
 int FUNC_29 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_30 (struct stm32_spi*) ;
 int FUNC_31 (struct stm32_spi*) ;
 int FUNC_32 (struct stm32_spi*) ;
 int FUNC_33 (int) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_16)
{
 struct spi_master *VAR_17;
 struct stm32_spi *VAR_18;
 struct resource *VAR_19;
 int VAR_20, VAR_21;

 VAR_17 = FUNC_26(&VAR_16->dev, sizeof(struct stm32_spi));
 if (!VAR_17) {
  FUNC_5(&VAR_16->dev, "spi master allocation failed\n");
  return -VAR_2;
 }
 FUNC_20(VAR_16, VAR_17);

 VAR_18 = FUNC_27(VAR_17);
 VAR_18->dev = &VAR_16->dev;
 VAR_18->master = VAR_17;
 FUNC_29(&VAR_18->lock);

 VAR_18->cfg = (const struct stm32_spi_cfg *)
  FUNC_17(VAR_16->dev.driver->of_match_table,
    &VAR_16->dev)->data;

 VAR_19 = FUNC_19(VAR_16, VAR_4, 0);
 VAR_18->base = FUNC_10(&VAR_16->dev, VAR_19);
 if (FUNC_0(VAR_18->base)) {
  VAR_21 = FUNC_1(VAR_18->base);
  goto err_master_put;
 }

 VAR_18->phys_addr = (dma_addr_t)VAR_19->start;

 VAR_18->irq = FUNC_18(VAR_16, 0);
 if (VAR_18->irq <= 0) {
  VAR_21 = VAR_18->irq;
  if (VAR_21 != -VAR_3)
   FUNC_5(&VAR_16->dev, "failed to get irq: %d\n", VAR_21);
  goto err_master_put;
 }
 VAR_21 = FUNC_11(&VAR_16->dev, VAR_18->irq,
     VAR_18->cfg->irq_handler_event,
     VAR_18->cfg->irq_handler_thread,
     VAR_5, VAR_16->name, VAR_17);
 if (VAR_21) {
  FUNC_5(&VAR_16->dev, "irq%d request failed: %d\n", VAR_18->irq,
   VAR_21);
  goto err_master_put;
 }

 VAR_18->clk = FUNC_8(&VAR_16->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  VAR_21 = FUNC_1(VAR_18->clk);
  FUNC_5(&VAR_16->dev, "clk get failed: %d\n", VAR_21);
  goto err_master_put;
 }

 VAR_21 = FUNC_4(VAR_18->clk);
 if (VAR_21) {
  FUNC_5(&VAR_16->dev, "clk enable failed: %d\n", VAR_21);
  goto err_master_put;
 }
 VAR_18->clk_rate = FUNC_3(VAR_18->clk);
 if (!VAR_18->clk_rate) {
  FUNC_5(&VAR_16->dev, "clk rate = 0\n");
  VAR_21 = -VAR_1;
  goto err_clk_disable;
 }

 VAR_18->rst = FUNC_12(&VAR_16->dev, ((void*)0));
 if (!FUNC_0(VAR_18->rst)) {
  FUNC_24(VAR_18->rst);
  FUNC_33(2);
  FUNC_25(VAR_18->rst);
 }

 if (VAR_18->cfg->has_fifo)
  VAR_18->fifo_size = VAR_18->cfg->get_fifo_size(VAR_18);

 VAR_21 = VAR_18->cfg->config(VAR_18);
 if (VAR_21) {
  FUNC_5(&VAR_16->dev, "controller configuration failed: %d\n",
   VAR_21);
  goto err_clk_disable;
 }

 VAR_17->dev.of_node = VAR_16->dev.of_node;
 VAR_17->auto_runtime_pm = 1;
 VAR_17->bus_num = VAR_16->id;
 VAR_17->mode_bits = VAR_7 | VAR_8 | VAR_9 | VAR_10 |
       VAR_6;
 VAR_17->bits_per_word_mask = VAR_18->cfg->get_bpw_mask(VAR_18);
 VAR_17->max_speed_hz = VAR_18->clk_rate / VAR_18->cfg->baud_rate_div_min;
 VAR_17->min_speed_hz = VAR_18->clk_rate / VAR_18->cfg->baud_rate_div_max;
 VAR_17->setup = VAR_13;
 VAR_17->prepare_message = VAR_12;
 VAR_17->transfer_one = VAR_14;
 VAR_17->unprepare_message = VAR_15;

 VAR_18->dma_tx = FUNC_15(VAR_18->dev, "tx");
 if (!VAR_18->dma_tx)
  FUNC_7(&VAR_16->dev, "failed to request tx dma channel\n");
 else
  VAR_17->dma_tx = VAR_18->dma_tx;

 VAR_18->dma_rx = FUNC_15(VAR_18->dev, "rx");
 if (!VAR_18->dma_rx)
  FUNC_7(&VAR_16->dev, "failed to request rx dma channel\n");
 else
  VAR_17->dma_rx = VAR_18->dma_rx;

 if (VAR_18->dma_tx || VAR_18->dma_rx)
  VAR_17->can_dma = VAR_11;

 FUNC_23(&VAR_16->dev);
 FUNC_22(&VAR_16->dev);

 VAR_21 = FUNC_13(&VAR_16->dev, VAR_17);
 if (VAR_21) {
  FUNC_5(&VAR_16->dev, "spi master registration failed: %d\n",
   VAR_21);
  goto err_dma_release;
 }

 if (!VAR_17->cs_gpios) {
  FUNC_5(&VAR_16->dev, "no CS gpios available\n");
  VAR_21 = -VAR_1;
  goto err_dma_release;
 }

 for (VAR_20 = 0; VAR_20 < VAR_17->num_chipselect; VAR_20++) {
  if (!FUNC_16(VAR_17->cs_gpios[VAR_20])) {
   FUNC_5(&VAR_16->dev, "%i is not a valid gpio\n",
    VAR_17->cs_gpios[VAR_20]);
   VAR_21 = -VAR_1;
   goto err_dma_release;
  }

  VAR_21 = FUNC_9(&VAR_16->dev, VAR_17->cs_gpios[VAR_20],
     VAR_0);
  if (VAR_21) {
   FUNC_5(&VAR_16->dev, "can't get CS gpio %i\n",
    VAR_17->cs_gpios[VAR_20]);
   goto err_dma_release;
  }
 }

 FUNC_6(&VAR_16->dev, "driver initialized\n");

 return 0;

err_dma_release:
 if (VAR_18->dma_tx)
  FUNC_14(VAR_18->dma_tx);
 if (VAR_18->dma_rx)
  FUNC_14(VAR_18->dma_rx);

 FUNC_21(&VAR_16->dev);
err_clk_disable:
 FUNC_2(VAR_18->clk);
err_master_put:
 FUNC_28(VAR_17);

 return VAR_21;
}
