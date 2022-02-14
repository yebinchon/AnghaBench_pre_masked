
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device_id {int driver_data; } ;
struct TYPE_18__ {int of_node; struct imxmmc_platform_data* platform_data; } ;
struct platform_device {TYPE_4__ dev; TYPE_3__* id_entry; } ;
struct of_device_id {struct platform_device_id* data; } ;
struct TYPE_15__ {int dma_request; int priority; int peripheral_type; } ;
struct mxcmci_host {int default_irq_mask; int rev_no; void* clk_per; void* clk_ipg; TYPE_7__* dma; int watchdog; struct mmc_host* mmc; struct imxmmc_platform_data* pdata; int datawork; int dmareq; TYPE_1__ dma_data; int lock; int devtype; int phys_base; void* base; } ;
struct mmc_host {int caps; int max_blk_size; int max_blk_count; int max_req_size; int max_seg_size; int max_segs; int ocr_avail; int f_min; int f_max; int * ops; } ;
struct imxmmc_platform_data {int dat3_card_detect; int ocr_avail; int (* init ) (TYPE_4__*,int ,struct mmc_host*) ;} ;
typedef int dma_cap_mask_t ;
struct TYPE_19__ {TYPE_2__* device; } ;
struct TYPE_17__ {int driver_data; } ;
struct TYPE_16__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_4__*) ;
 void* FUNC_9 (TYPE_4__*,char*) ;
 void* FUNC_10 (TYPE_4__*,struct resource*) ;
 int FUNC_11 (TYPE_4__*,int,int ,int ,int ,struct mxcmci_host*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_7__*) ;
 TYPE_7__* FUNC_16 (int ,int ,struct mxcmci_host*) ;
 TYPE_7__* FUNC_17 (TYPE_4__*,char*) ;
 int VAR_16 ;
 int FUNC_18 (struct mxcmci_host*) ;
 int FUNC_19 (struct mmc_host*) ;
 struct mmc_host* FUNC_20 (int,TYPE_4__*) ;
 scalar_t__ FUNC_21 (struct mmc_host*) ;
 int FUNC_22 (struct mmc_host*) ;
 int FUNC_23 (struct mmc_host*) ;
 int FUNC_24 (struct mmc_host*) ;
 struct mxcmci_host* FUNC_25 (struct mmc_host*) ;
 int FUNC_26 (struct mmc_host*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_27 (struct mxcmci_host*,int ) ;
 int FUNC_28 (struct mxcmci_host*) ;
 int VAR_22 ;
 int FUNC_29 (struct mxcmci_host*,int,int ) ;
 int FUNC_30 (struct mxcmci_host*,int,int ) ;
 struct of_device_id* FUNC_31 (int ,TYPE_4__*) ;
 int FUNC_32 (int ,char*) ;
 int FUNC_33 (struct platform_device*,int ) ;
 struct resource* FUNC_34 (struct platform_device*,int ,int ) ;
 int FUNC_35 (struct platform_device*,struct mmc_host*) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (TYPE_4__*,int ,struct mmc_host*) ;
 int FUNC_39 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_40(struct platform_device *VAR_23)
{
 struct mmc_host *VAR_24;
 struct mxcmci_host *VAR_25;
 struct resource *VAR_26;
 int VAR_27 = 0, VAR_28;
 bool VAR_29 = 0;
 dma_cap_mask_t VAR_30;
 const struct of_device_id *VAR_31;
 struct imxmmc_platform_data *VAR_32 = VAR_23->dev.platform_data;

 FUNC_36("i.MX/MPC512x SDHC driver\n");

 VAR_31 = FUNC_31(VAR_20, &VAR_23->dev);

 VAR_26 = FUNC_34(VAR_23, VAR_8, 0);
 VAR_28 = FUNC_33(VAR_23, 0);
 if (VAR_28 < 0)
  return VAR_28;

 VAR_24 = FUNC_20(sizeof(*VAR_25), &VAR_23->dev);
 if (!VAR_24)
  return -VAR_3;

 VAR_25 = FUNC_25(VAR_24);

 VAR_25->base = FUNC_10(&VAR_23->dev, VAR_26);
 if (FUNC_1(VAR_25->base)) {
  VAR_27 = FUNC_2(VAR_25->base);
  goto out_free;
 }

 VAR_25->phys_base = VAR_26->start;

 VAR_27 = FUNC_24(VAR_24);
 if (VAR_27)
  goto out_free;
 VAR_24->ops = &VAR_21;


 if (VAR_32)
  VAR_24->caps = VAR_9 | VAR_10;
 else
  VAR_24->caps |= VAR_10;


 VAR_24->max_blk_size = 2048;
 VAR_24->max_blk_count = 65535;
 VAR_24->max_req_size = VAR_24->max_blk_size * VAR_24->max_blk_count;
 VAR_24->max_seg_size = VAR_24->max_req_size;

 if (VAR_31) {
  const struct platform_device_id *VAR_33 = VAR_31->data;
  VAR_25->devtype = VAR_33->driver_data;
 } else {
  VAR_25->devtype = VAR_23->id_entry->driver_data;
 }


 if (!FUNC_18(VAR_25))
  VAR_24->max_segs = 64;

 VAR_25->mmc = VAR_24;
 VAR_25->pdata = VAR_32;
 FUNC_37(&VAR_25->lock);

 if (VAR_32)
  VAR_29 = VAR_32->dat3_card_detect;
 else if (FUNC_21(VAR_24)
   && !FUNC_32(VAR_23->dev.of_node, "cd-gpios"))
  VAR_29 = 1;

 VAR_27 = FUNC_26(VAR_24);
 if (VAR_27)
  goto out_free;

 if (!VAR_24->ocr_avail) {
  if (VAR_32 && VAR_32->ocr_avail)
   VAR_24->ocr_avail = VAR_32->ocr_avail;
  else
   VAR_24->ocr_avail = VAR_14 | VAR_15;
 }

 if (VAR_29)
  VAR_25->default_irq_mask =
   VAR_5 | VAR_6;
 else
  VAR_25->default_irq_mask = 0;

 VAR_25->clk_ipg = FUNC_9(&VAR_23->dev, "ipg");
 if (FUNC_1(VAR_25->clk_ipg)) {
  VAR_27 = FUNC_2(VAR_25->clk_ipg);
  goto out_free;
 }

 VAR_25->clk_per = FUNC_9(&VAR_23->dev, "per");
 if (FUNC_1(VAR_25->clk_per)) {
  VAR_27 = FUNC_2(VAR_25->clk_per);
  goto out_free;
 }

 VAR_27 = FUNC_5(VAR_25->clk_per);
 if (VAR_27)
  goto out_free;

 VAR_27 = FUNC_5(VAR_25->clk_ipg);
 if (VAR_27)
  goto out_clk_per_put;

 FUNC_28(VAR_25);

 VAR_25->rev_no = FUNC_27(VAR_25, VAR_13);
 if (VAR_25->rev_no != 0x400) {
  VAR_27 = -VAR_2;
  FUNC_6(FUNC_22(VAR_25->mmc), "wrong rev.no. 0x%08x. aborting.\n",
   VAR_25->rev_no);
  goto out_clk_put;
 }

 VAR_24->f_min = FUNC_4(VAR_25->clk_per) >> 16;
 VAR_24->f_max = FUNC_4(VAR_25->clk_per) >> 1;


 FUNC_30(VAR_25, 0x2db4, VAR_12);

 FUNC_29(VAR_25, VAR_25->default_irq_mask, VAR_11);

 if (!VAR_25->pdata) {
  VAR_25->dma = FUNC_17(&VAR_23->dev, "rx-tx");
 } else {
  VAR_26 = FUNC_34(VAR_23, VAR_7, 0);
  if (VAR_26) {
   VAR_25->dmareq = VAR_26->start;
   VAR_25->dma_data.peripheral_type = VAR_4;
   VAR_25->dma_data.priority = VAR_0;
   VAR_25->dma_data.dma_request = VAR_25->dmareq;
   FUNC_13(VAR_30);
   FUNC_12(VAR_1, VAR_30);
   VAR_25->dma = FUNC_16(VAR_30, VAR_16, VAR_25);
  }
 }
 if (VAR_25->dma)
  VAR_24->max_seg_size = FUNC_14(
    VAR_25->dma->device->dev);
 else
  FUNC_7(FUNC_22(VAR_25->mmc), "dma not available. Using PIO\n");

 FUNC_0(&VAR_25->datawork, VAR_17);

 VAR_27 = FUNC_11(&VAR_23->dev, VAR_28, VAR_19, 0,
          FUNC_8(&VAR_23->dev), VAR_25);
 if (VAR_27)
  goto out_free_dma;

 FUNC_35(VAR_23, VAR_24);

 if (VAR_25->pdata && VAR_25->pdata->init) {
  VAR_27 = VAR_25->pdata->init(&VAR_23->dev, VAR_18,
    VAR_25->mmc);
  if (VAR_27)
   goto out_free_dma;
 }

 FUNC_39(&VAR_25->watchdog, VAR_22, 0);

 FUNC_19(VAR_24);

 return 0;

out_free_dma:
 if (VAR_25->dma)
  FUNC_15(VAR_25->dma);

out_clk_put:
 FUNC_3(VAR_25->clk_ipg);
out_clk_per_put:
 FUNC_3(VAR_25->clk_per);

out_free:
 FUNC_23(VAR_24);

 return VAR_27;
}
