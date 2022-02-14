
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct wmt_mci_priv {int power_inverted; int cd_inverted; int irq_regular; int irq_dma; int sdmmc_base; int clk_sdmmc; int dma_desc_buffer; int dma_desc_device_addr; TYPE_1__* dev; struct mmc_host* mmc; } ;
struct wmt_mci_caps {int max_segs; int max_blk_size; int max_seg_size; int caps; int ocr_avail; int f_max; int f_min; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct wmt_mci_caps* data; } ;
struct mmc_host {int max_segs; int max_req_size; int max_blk_count; int max_blk_size; int max_seg_size; int caps; int ocr_avail; int f_max; int f_min; int * ops; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int,int *,int ) ;
 int FUNC_7 (int,struct wmt_mci_priv*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*,int) ;
 int FUNC_10 (struct mmc_host*) ;
 struct mmc_host* FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (struct mmc_host*) ;
 struct wmt_mci_priv* FUNC_13 (struct mmc_host*) ;
 int FUNC_14 (struct device_node*,int ) ;
 scalar_t__ FUNC_15 (struct device_node*,char*,int *) ;
 int FUNC_16 (struct device_node*,int ) ;
 struct of_device_id* FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (struct platform_device*,struct mmc_host*) ;
 int FUNC_19 (int,int ,int ,char*,struct wmt_mci_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct mmc_host *VAR_10;
 struct wmt_mci_priv *VAR_11;
 struct device_node *VAR_12 = VAR_9->dev.of_node;
 const struct of_device_id *VAR_13 =
  FUNC_17(VAR_6, &VAR_9->dev);
 const struct wmt_mci_caps *VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_13 || !VAR_13->data) {
  FUNC_4(&VAR_9->dev, "Controller capabilities data missing\n");
  return -VAR_0;
 }

 VAR_14 = VAR_13->data;

 if (!VAR_12) {
  FUNC_4(&VAR_9->dev, "Missing SDMMC description in devicetree\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_9(VAR_12, 0);
 VAR_17 = FUNC_9(VAR_12, 1);

 if (!VAR_16 || !VAR_17) {
  FUNC_4(&VAR_9->dev, "Getting IRQs failed!\n");
  VAR_15 = -VAR_2;
  goto fail1;
 }

 VAR_10 = FUNC_11(sizeof(struct wmt_mci_priv), &VAR_9->dev);
 if (!VAR_10) {
  FUNC_4(&VAR_9->dev, "Failed to allocate mmc_host\n");
  VAR_15 = -VAR_1;
  goto fail1;
 }

 VAR_10->ops = &VAR_7;
 VAR_10->f_min = VAR_14->f_min;
 VAR_10->f_max = VAR_14->f_max;
 VAR_10->ocr_avail = VAR_14->ocr_avail;
 VAR_10->caps = VAR_14->caps;

 VAR_10->max_seg_size = VAR_14->max_seg_size;
 VAR_10->max_segs = VAR_14->max_segs;
 VAR_10->max_blk_size = VAR_14->max_blk_size;

 VAR_10->max_req_size = (16*512*VAR_10->max_segs);
 VAR_10->max_blk_count = VAR_10->max_req_size / 512;

 VAR_11 = FUNC_13(VAR_10);
 VAR_11->mmc = VAR_10;
 VAR_11->dev = &VAR_9->dev;

 VAR_11->power_inverted = 0;
 VAR_11->cd_inverted = 0;

 if (FUNC_15(VAR_12, "sdon-inverted", ((void*)0)))
  VAR_11->power_inverted = 1;
 if (FUNC_15(VAR_12, "cd-inverted", ((void*)0)))
  VAR_11->cd_inverted = 1;

 VAR_11->sdmmc_base = FUNC_16(VAR_12, 0);
 if (!VAR_11->sdmmc_base) {
  FUNC_4(&VAR_9->dev, "Failed to map IO space\n");
  VAR_15 = -VAR_1;
  goto fail2;
 }

 VAR_11->irq_regular = VAR_16;
 VAR_11->irq_dma = VAR_17;

 VAR_15 = FUNC_19(VAR_16, VAR_8, 0, "sdmmc", VAR_11);
 if (VAR_15) {
  FUNC_4(&VAR_9->dev, "Register regular IRQ fail\n");
  goto fail3;
 }

 VAR_15 = FUNC_19(VAR_17, VAR_5, 0, "sdmmc", VAR_11);
 if (VAR_15) {
  FUNC_4(&VAR_9->dev, "Register DMA IRQ fail\n");
  goto fail4;
 }


 VAR_11->dma_desc_buffer = FUNC_6(&VAR_9->dev,
         VAR_10->max_blk_count * 16,
         &VAR_11->dma_desc_device_addr,
         VAR_4);
 if (!VAR_11->dma_desc_buffer) {
  FUNC_4(&VAR_9->dev, "DMA alloc fail\n");
  VAR_15 = -VAR_3;
  goto fail5;
 }

 FUNC_18(VAR_9, VAR_10);

 VAR_11->clk_sdmmc = FUNC_14(VAR_12, 0);
 if (FUNC_0(VAR_11->clk_sdmmc)) {
  FUNC_4(&VAR_9->dev, "Error getting clock\n");
  VAR_15 = FUNC_1(VAR_11->clk_sdmmc);
  goto fail5;
 }

 VAR_15 = FUNC_2(VAR_11->clk_sdmmc);
 if (VAR_15)
  goto fail6;


 FUNC_20(VAR_10);

 FUNC_10(VAR_10);

 FUNC_5(&VAR_9->dev, "WMT SDHC Controller initialized\n");

 return 0;
fail6:
 FUNC_3(VAR_11->clk_sdmmc);
fail5:
 FUNC_7(VAR_17, VAR_11);
fail4:
 FUNC_7(VAR_16, VAR_11);
fail3:
 FUNC_8(VAR_11->sdmmc_base);
fail2:
 FUNC_12(VAR_10);
fail1:
 return VAR_15;
}
