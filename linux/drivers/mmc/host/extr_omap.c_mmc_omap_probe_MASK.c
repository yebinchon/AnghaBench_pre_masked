
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_11__ {struct omap_mmc_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; int id; } ;
struct omap_mmc_platform_data {int nr_slots; int (* init ) (TYPE_2__*) ;int (* cleanup ) (TYPE_2__*) ;TYPE_1__* slots; } ;
struct mmc_omap_host {int irq; int dma_tx_burst; int dma_rx_burst; int nr_slots; int reg_shift; int * iclk; int * fclk; int * dma_rx; int * dma_tx; int mmc_omap_wq; int * slots; TYPE_2__* dev; int phys_base; int id; struct omap_mmc_platform_data* pdata; int features; int slot_wq; int slot_lock; int dma_lock; int clk_timer; int clk_lock; int cmd_abort_timer; int cmd_abort_work; int send_stop_work; int slot_release_work; int * virt_base; } ;
struct TYPE_10__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int * FUNC_11 (TYPE_2__*,struct resource*) ;
 struct mmc_omap_host* FUNC_12 (TYPE_2__*,int,int ) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (TYPE_2__*,char*) ;
 int FUNC_15 (int,struct mmc_omap_host*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (struct mmc_omap_host*,int) ;
 int FUNC_19 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct mmc_omap_host*) ;
 int FUNC_23 (int,int ,int ,int ,struct mmc_omap_host*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_12)
{
 struct omap_mmc_platform_data *VAR_13 = VAR_12->dev.platform_data;
 struct mmc_omap_host *VAR_14 = ((void*)0);
 struct resource *VAR_15;
 int VAR_16, VAR_17 = 0;
 int VAR_18;

 if (VAR_13 == ((void*)0)) {
  FUNC_9(&VAR_12->dev, "platform data missing\n");
  return -VAR_2;
 }
 if (VAR_13->nr_slots == 0) {
  FUNC_9(&VAR_12->dev, "no slots\n");
  return -VAR_3;
 }

 VAR_14 = FUNC_12(&VAR_12->dev, sizeof(struct mmc_omap_host),
       VAR_4);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_18 = FUNC_20(VAR_12, 0);
 if (VAR_18 < 0)
  return -VAR_2;

 VAR_15 = FUNC_21(VAR_12, VAR_5, 0);
 VAR_14->virt_base = FUNC_11(&VAR_12->dev, VAR_15);
 if (FUNC_1(VAR_14->virt_base))
  return FUNC_2(VAR_14->virt_base);

 FUNC_0(&VAR_14->slot_release_work, VAR_11);
 FUNC_0(&VAR_14->send_stop_work, VAR_10);

 FUNC_0(&VAR_14->cmd_abort_work, VAR_6);
 FUNC_27(&VAR_14->cmd_abort_timer, VAR_8, 0);

 FUNC_24(&VAR_14->clk_lock);
 FUNC_27(&VAR_14->clk_timer, VAR_7, 0);

 FUNC_24(&VAR_14->dma_lock);
 FUNC_24(&VAR_14->slot_lock);
 FUNC_16(&VAR_14->slot_wq);

 VAR_14->pdata = VAR_13;
 VAR_14->features = VAR_14->pdata->slots[0].features;
 VAR_14->dev = &VAR_12->dev;
 FUNC_22(VAR_12, VAR_14);

 VAR_14->id = VAR_12->id;
 VAR_14->irq = VAR_18;
 VAR_14->phys_base = VAR_15->start;
 VAR_14->iclk = FUNC_6(&VAR_12->dev, "ick");
 if (FUNC_1(VAR_14->iclk))
  return FUNC_2(VAR_14->iclk);
 FUNC_5(VAR_14->iclk);

 VAR_14->fclk = FUNC_6(&VAR_12->dev, "fck");
 if (FUNC_1(VAR_14->fclk)) {
  VAR_17 = FUNC_2(VAR_14->fclk);
  goto err_free_iclk;
 }

 VAR_14->dma_tx_burst = -1;
 VAR_14->dma_rx_burst = -1;

 VAR_14->dma_tx = FUNC_14(&VAR_12->dev, "tx");
 if (FUNC_1(VAR_14->dma_tx)) {
  VAR_17 = FUNC_2(VAR_14->dma_tx);
  if (VAR_17 == -VAR_3) {
   FUNC_7(VAR_14->fclk);
   goto err_free_iclk;
  }

  VAR_14->dma_tx = ((void*)0);
  FUNC_10(VAR_14->dev, "TX DMA channel request failed\n");
 }

 VAR_14->dma_rx = FUNC_14(&VAR_12->dev, "rx");
 if (FUNC_1(VAR_14->dma_rx)) {
  VAR_17 = FUNC_2(VAR_14->dma_rx);
  if (VAR_17 == -VAR_3) {
   if (VAR_14->dma_tx)
    FUNC_13(VAR_14->dma_tx);
   FUNC_7(VAR_14->fclk);
   goto err_free_iclk;
  }

  VAR_14->dma_rx = ((void*)0);
  FUNC_10(VAR_14->dev, "RX DMA channel request failed\n");
 }

 VAR_17 = FUNC_23(VAR_14->irq, VAR_9, 0, VAR_0, VAR_14);
 if (VAR_17)
  goto err_free_dma;

 if (VAR_13->init != ((void*)0)) {
  VAR_17 = VAR_13->init(&VAR_12->dev);
  if (VAR_17 < 0)
   goto err_free_irq;
 }

 VAR_14->nr_slots = VAR_13->nr_slots;
 VAR_14->reg_shift = (FUNC_17() ? 1 : 2);

 VAR_14->mmc_omap_wq = FUNC_3("mmc_omap", 0, 0);
 if (!VAR_14->mmc_omap_wq) {
  VAR_17 = -VAR_1;
  goto err_plat_cleanup;
 }

 for (VAR_16 = 0; VAR_16 < VAR_13->nr_slots; VAR_16++) {
  VAR_17 = FUNC_18(VAR_14, VAR_16);
  if (VAR_17 < 0) {
   while (--VAR_16 >= 0)
    FUNC_19(VAR_14->slots[VAR_16]);

   goto err_destroy_wq;
  }
 }

 return 0;

err_destroy_wq:
 FUNC_8(VAR_14->mmc_omap_wq);
err_plat_cleanup:
 if (VAR_13->cleanup)
  VAR_13->cleanup(&VAR_12->dev);
err_free_irq:
 FUNC_15(VAR_14->irq, VAR_14);
err_free_dma:
 if (VAR_14->dma_tx)
  FUNC_13(VAR_14->dma_tx);
 if (VAR_14->dma_rx)
  FUNC_13(VAR_14->dma_rx);
 FUNC_7(VAR_14->fclk);
err_free_iclk:
 FUNC_4(VAR_14->iclk);
 FUNC_7(VAR_14->iclk);
 return VAR_17;
}
