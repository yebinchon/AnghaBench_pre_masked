
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device_id {int driver_data; } ;
struct platform_device {int dev; int id_entry; int name; } ;
struct of_device_id {int data; } ;
struct mmc_host {int caps; int ocr_avail; int max_segs; int max_seg_size; int max_blk_size; int max_blk_count; int max_req_size; int * ops; } ;
struct mmc_davinci_host {scalar_t__ nr_sg; int mmc_irq; int sdio_irq; int clk; scalar_t__ use_dma; struct mmc_host* mmc; int version; int mmc_input_clk; int base; struct resource* mem_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mmc_davinci_host*) ;
 int VAR_12 ;
 int FUNC_6 (struct mmc_davinci_host*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int ,char*,char*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,size_t) ;
 int FUNC_12 (int *,int,int ,int ,int ,struct mmc_davinci_host*) ;
 struct resource* FUNC_13 (int *,int ,size_t,int ) ;
 int FUNC_14 (struct mmc_davinci_host*) ;
 int FUNC_15 (struct mmc_host*) ;
 struct mmc_host* FUNC_16 (int,int *) ;
 int FUNC_17 (struct mmc_davinci_host*) ;
 int FUNC_18 (struct mmc_davinci_host*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (struct mmc_host*) ;
 int VAR_15 ;
 int FUNC_20 (struct mmc_host*) ;
 int FUNC_21 (struct mmc_host*) ;
 int FUNC_22 (struct mmc_host*) ;
 int FUNC_23 (struct mmc_host*) ;
 struct mmc_davinci_host* FUNC_24 (struct mmc_host*) ;
 int FUNC_25 (struct mmc_host*) ;
 struct of_device_id* FUNC_26 (int ,int *) ;
 struct platform_device_id* FUNC_27 (struct platform_device*) ;
 void* FUNC_28 (struct platform_device*,int) ;
 struct resource* FUNC_29 (struct platform_device*,int ,int ) ;
 int FUNC_30 (struct platform_device*,struct mmc_davinci_host*) ;
 int FUNC_31 (struct resource*,int ) ;
 size_t FUNC_32 (struct resource*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_18)
{
 const struct of_device_id *VAR_19;
 struct mmc_davinci_host *VAR_20 = ((void*)0);
 struct mmc_host *VAR_21 = ((void*)0);
 struct resource *VAR_22, *VAR_23 = ((void*)0);
 int VAR_24, VAR_25;
 size_t VAR_26;
 const struct platform_device_id *VAR_27;

 VAR_22 = FUNC_29(VAR_18, VAR_4, 0);
 if (!VAR_22)
  return -VAR_1;
 VAR_25 = FUNC_28(VAR_18, 0);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_26 = FUNC_32(VAR_22);
 VAR_23 = FUNC_13(&VAR_18->dev, VAR_22->start, VAR_26,
          VAR_18->name);
 if (!VAR_23)
  return -VAR_0;

 VAR_21 = FUNC_16(sizeof(struct mmc_davinci_host), &VAR_18->dev);
 if (!VAR_21)
  return -VAR_2;

 VAR_20 = FUNC_24(VAR_21);
 VAR_20->mmc = VAR_21;

 VAR_20->mem_res = VAR_23;
 VAR_20->base = FUNC_11(&VAR_18->dev, VAR_23->start, VAR_26);
 if (!VAR_20->base) {
  VAR_24 = -VAR_2;
  goto ioremap_fail;
 }

 VAR_20->clk = FUNC_10(&VAR_18->dev, ((void*)0));
 if (FUNC_0(VAR_20->clk)) {
  VAR_24 = FUNC_1(VAR_20->clk);
  goto clk_get_fail;
 }
 VAR_24 = FUNC_4(VAR_20->clk);
 if (VAR_24)
  goto clk_prepare_enable_fail;

 VAR_20->mmc_input_clk = FUNC_3(VAR_20->clk);

 VAR_19 = FUNC_26(VAR_12, &VAR_18->dev);
 if (VAR_19) {
  VAR_18->id_entry = VAR_19->data;
  VAR_24 = FUNC_23(VAR_21);
  if (VAR_24) {
   if (VAR_24 != -VAR_3)
    FUNC_8(&VAR_18->dev,
     "could not parse of data: %d\n", VAR_24);
   goto parse_fail;
  }
 } else {
  VAR_24 = FUNC_19(VAR_21);
  if (VAR_24) {
   FUNC_8(&VAR_18->dev,
    "could not parse platform data: %d\n", VAR_24);
   goto parse_fail;
 } }

 if (VAR_20->nr_sg > VAR_6 || !VAR_20->nr_sg)
  VAR_20->nr_sg = VAR_6;

 FUNC_14(VAR_20);

 VAR_20->use_dma = VAR_17;
 VAR_20->mmc_irq = VAR_25;
 VAR_20->sdio_irq = FUNC_28(VAR_18, 1);

 if (VAR_20->use_dma) {
  VAR_24 = FUNC_5(VAR_20);
  if (VAR_24 == -VAR_3)
   goto dma_probe_defer;
  else if (VAR_24)
   VAR_20->use_dma = 0;
 }

 VAR_21->caps |= VAR_9;

 VAR_27 = FUNC_27(VAR_18);
 if (VAR_27)
  VAR_20->version = VAR_27->driver_data;

 VAR_21->ops = &VAR_14;
 VAR_21->ocr_avail = VAR_10 | VAR_11;





 VAR_21->max_segs = VAR_6;


 VAR_21->max_seg_size = VAR_5 * VAR_16;


 VAR_21->max_blk_size = 4095;
 VAR_21->max_blk_count = 65535;
 VAR_21->max_req_size = VAR_21->max_blk_size * VAR_21->max_blk_count;

 FUNC_7(FUNC_20(VAR_20->mmc), "max_segs=%d\n", VAR_21->max_segs);
 FUNC_7(FUNC_20(VAR_20->mmc), "max_blk_size=%d\n", VAR_21->max_blk_size);
 FUNC_7(FUNC_20(VAR_20->mmc), "max_req_size=%d\n", VAR_21->max_req_size);
 FUNC_7(FUNC_20(VAR_20->mmc), "max_seg_size=%d\n", VAR_21->max_seg_size);

 FUNC_30(VAR_18, VAR_20);

 VAR_24 = FUNC_18(VAR_20);
 if (VAR_24) {
  FUNC_8(&VAR_18->dev, "failed to register cpufreq\n");
  goto cpu_freq_fail;
 }

 VAR_24 = FUNC_15(VAR_21);
 if (VAR_24 < 0)
  goto mmc_add_host_fail;

 VAR_24 = FUNC_12(&VAR_18->dev, VAR_25, VAR_13, 0,
          FUNC_22(VAR_21), VAR_20);
 if (VAR_24)
  goto request_irq_fail;

 if (VAR_20->sdio_irq >= 0) {
  VAR_24 = FUNC_12(&VAR_18->dev, VAR_20->sdio_irq,
           VAR_15, 0,
           FUNC_22(VAR_21), VAR_20);
  if (!VAR_24)
   VAR_21->caps |= VAR_8;
 }

 FUNC_31(VAR_23, FUNC_22(VAR_21));

 FUNC_9(FUNC_20(VAR_20->mmc), "Using %s, %d-bit mode\n",
  VAR_20->use_dma ? "DMA" : "PIO",
  (VAR_21->caps & VAR_7) ? 4 : 1);

 return 0;

request_irq_fail:
 FUNC_25(VAR_21);
mmc_add_host_fail:
 FUNC_17(VAR_20);
cpu_freq_fail:
 FUNC_6(VAR_20);
parse_fail:
dma_probe_defer:
 FUNC_2(VAR_20->clk);
clk_prepare_enable_fail:
clk_get_fail:
ioremap_fail:
 FUNC_21(VAR_21);

 return VAR_24;
}
