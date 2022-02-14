
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mmc_host {int f_max; int f_min; int ocr_avail; int max_blk_size; int max_blk_count; int max_req_size; int max_segs; int max_seg_size; int caps; int * ops; } ;
struct jz4740_mmc_host {int version; int irq; int use_dma; int timeout_timer; int irq_mask; int lock; struct platform_device* pdev; struct mmc_host* mmc; int base; int mem_res; int clk; } ;
typedef enum jz4740_mmc_version { ____Placeholder_jz4740_mmc_version } jz4740_mmc_version ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,struct jz4740_mmc_host*) ;
 int FUNC_8 (struct jz4740_mmc_host*) ;
 int FUNC_9 (struct jz4740_mmc_host*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct jz4740_mmc_host*) ;
 int FUNC_11 (struct jz4740_mmc_host*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (struct mmc_host*) ;
 struct mmc_host* FUNC_13 (int,int *) ;
 int FUNC_14 (struct mmc_host*) ;
 int FUNC_15 (struct mmc_host*) ;
 struct jz4740_mmc_host* FUNC_16 (struct mmc_host*) ;
 int FUNC_17 (struct mmc_host*) ;
 struct of_device_id* FUNC_18 (int ,int *) ;
 int FUNC_19 (struct platform_device*,int ) ;
 int FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct jz4740_mmc_host*) ;
 int FUNC_22 (int,int ,int ,int ,int ,struct jz4740_mmc_host*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_25(struct platform_device* VAR_13)
{
 int VAR_14;
 struct mmc_host *VAR_15;
 struct jz4740_mmc_host *VAR_16;
 const struct of_device_id *VAR_17;

 VAR_15 = FUNC_13(sizeof(struct jz4740_mmc_host), &VAR_13->dev);
 if (!VAR_15) {
  FUNC_2(&VAR_13->dev, "Failed to alloc mmc host structure\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_16(VAR_15);

 VAR_17 = FUNC_18(VAR_8, &VAR_13->dev);
 if (VAR_17) {
  VAR_16->version = (enum jz4740_mmc_version)VAR_17->data;
 } else {

  VAR_16->version = VAR_4;
 }

 VAR_14 = FUNC_15(VAR_15);
 if (VAR_14) {
  if (VAR_14 != -VAR_1)
   FUNC_2(&VAR_13->dev,
    "could not parse device properties: %d\n", VAR_14);
  goto err_free_host;
 }

 FUNC_17(VAR_15);

 VAR_16->irq = FUNC_19(VAR_13, 0);
 if (VAR_16->irq < 0) {
  VAR_14 = VAR_16->irq;
  goto err_free_host;
 }

 VAR_16->clk = FUNC_5(&VAR_13->dev, "mmc");
 if (FUNC_0(VAR_16->clk)) {
  VAR_14 = FUNC_1(VAR_16->clk);
  FUNC_2(&VAR_13->dev, "Failed to get mmc clock\n");
  goto err_free_host;
 }

 VAR_16->mem_res = FUNC_20(VAR_13, VAR_2, 0);
 VAR_16->base = FUNC_6(&VAR_13->dev, VAR_16->mem_res);
 if (FUNC_0(VAR_16->base)) {
  VAR_14 = FUNC_1(VAR_16->base);
  FUNC_2(&VAR_13->dev, "Failed to ioremap base memory\n");
  goto err_free_host;
 }

 VAR_15->ops = &VAR_9;
 if (!VAR_15->f_max)
  VAR_15->f_max = VAR_3;
 VAR_15->f_min = VAR_15->f_max / 128;
 VAR_15->ocr_avail = VAR_6 | VAR_7;

 VAR_15->max_blk_size = (1 << 10) - 1;
 VAR_15->max_blk_count = (1 << 15) - 1;
 VAR_15->max_req_size = VAR_15->max_blk_size * VAR_15->max_blk_count;

 VAR_15->max_segs = 128;
 VAR_15->max_seg_size = VAR_15->max_req_size;

 VAR_16->mmc = VAR_15;
 VAR_16->pdev = VAR_13;
 FUNC_23(&VAR_16->lock);
 VAR_16->irq_mask = ~0;

 FUNC_11(VAR_16);

 VAR_14 = FUNC_22(VAR_16->irq, VAR_11, VAR_12, 0,
   FUNC_4(&VAR_13->dev), VAR_16);
 if (VAR_14) {
  FUNC_2(&VAR_13->dev, "Failed to request irq: %d\n", VAR_14);
  goto err_free_host;
 }

 FUNC_9(VAR_16);
 FUNC_24(&VAR_16->timeout_timer, VAR_10, 0);

 VAR_14 = FUNC_8(VAR_16);
 if (VAR_14 == -VAR_1)
  goto err_free_irq;
 VAR_16->use_dma = !VAR_14;

 FUNC_21(VAR_13, VAR_16);
 VAR_14 = FUNC_12(VAR_15);

 if (VAR_14) {
  FUNC_2(&VAR_13->dev, "Failed to add mmc host: %d\n", VAR_14);
  goto err_release_dma;
 }
 FUNC_3(&VAR_13->dev, "JZ SD/MMC card driver registered\n");

 FUNC_3(&VAR_13->dev, "Using %s, %d-bit mode\n",
   VAR_16->use_dma ? "DMA" : "PIO",
   (VAR_15->caps & VAR_5) ? 4 : 1);

 return 0;

err_release_dma:
 if (VAR_16->use_dma)
  FUNC_10(VAR_16);
err_free_irq:
 FUNC_7(VAR_16->irq, VAR_16);
err_free_host:
 FUNC_14(VAR_15);

 return VAR_14;
}
