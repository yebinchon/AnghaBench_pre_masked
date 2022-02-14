
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmt_mci_priv {int clk_sdmmc; scalar_t__ sdmmc_base; int irq_dma; int irq_regular; int dma_desc_device_addr; int dma_desc_buffer; TYPE_1__* mmc; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int max_blk_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int ,struct wmt_mci_priv*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mmc_host*) ;
 struct wmt_mci_priv* FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 struct mmc_host* FUNC_9 (struct platform_device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_6)
{
 struct mmc_host *VAR_7;
 struct wmt_mci_priv *VAR_8;
 struct resource *VAR_9;
 u32 VAR_10;

 VAR_7 = FUNC_9(VAR_6);
 VAR_8 = FUNC_7(VAR_7);


 VAR_10 = FUNC_11(VAR_8->sdmmc_base + VAR_3);
 FUNC_16(VAR_10 | VAR_0, VAR_8->sdmmc_base + VAR_3);
 VAR_10 = FUNC_12(VAR_8->sdmmc_base + VAR_2);
 FUNC_17(VAR_10 & ~(0xA000), VAR_8->sdmmc_base + VAR_2);
 FUNC_15(0xFF, VAR_8->sdmmc_base + VAR_4);
 FUNC_15(0xFF, VAR_8->sdmmc_base + VAR_5);


 FUNC_3(&VAR_6->dev, VAR_8->mmc->max_blk_count * 16,
     VAR_8->dma_desc_buffer, VAR_8->dma_desc_device_addr);

 FUNC_8(VAR_7);

 FUNC_4(VAR_8->irq_regular, VAR_8);
 FUNC_4(VAR_8->irq_dma, VAR_8);

 FUNC_5(VAR_8->sdmmc_base);

 FUNC_0(VAR_8->clk_sdmmc);
 FUNC_1(VAR_8->clk_sdmmc);

 VAR_9 = FUNC_10(VAR_6, VAR_1, 0);
 FUNC_13(VAR_9->start, FUNC_14(VAR_9));

 FUNC_6(VAR_7);

 FUNC_2(&VAR_6->dev, "WMT MCI device removed\n");

 return 0;
}
