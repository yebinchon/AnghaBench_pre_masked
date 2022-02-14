
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct mt_gpdma_desc {int dummy; } ;
struct mt_bdma_desc {int dummy; } ;
struct TYPE_20__ {int bd_addr; void* bd; int gpd_addr; void* gpd; } ;
struct msdc_host {scalar_t__ irq; int internal_cd; int timeout_clks; TYPE_8__ dma; TYPE_1__* dev; int lock; int req_timeout; void* dma_mask; TYPE_6__* dev_comp; int src_clk_freq; int * src_clk; struct mmc_host* mmc; int * pins_uhs; int * pinctrl; int * pins_default; int * src_clk_cg; int * bus_clk; int * h_clk; int * top_base; int * base; } ;
struct mmc_host {int caps; int max_segs; int max_blk_size; int max_req_size; int max_blk_count; int max_seg_size; int caps2; void* f_min; int * ops; } ;
struct TYPE_21__ {void** dma_mask; } ;
struct TYPE_19__ {int clk_div_bits; scalar_t__ support_64g; scalar_t__ use_internal_cd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 void* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,struct resource*) ;
 int * FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int ,int ,int ,struct msdc_host*) ;
 void* FUNC_11 (TYPE_1__*,int,int *,int ) ;
 int FUNC_12 (TYPE_1__*,int,void*,int ) ;
 int FUNC_13 (struct mmc_host*) ;
 struct mmc_host* FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (struct mmc_host*) ;
 TYPE_9__* FUNC_16 (struct mmc_host*) ;
 int FUNC_17 (struct mmc_host*) ;
 int FUNC_18 (struct mmc_host*) ;
 struct msdc_host* FUNC_19 (struct mmc_host*) ;
 int FUNC_20 (struct mmc_host*) ;
 int FUNC_21 (struct msdc_host*) ;
 int FUNC_22 (struct msdc_host*) ;
 int FUNC_23 (struct msdc_host*,TYPE_8__*) ;
 int FUNC_24 (struct msdc_host*) ;
 int VAR_14 ;
 int FUNC_25 (struct platform_device*,struct msdc_host*) ;
 int VAR_15 ;
 int FUNC_26 (struct msdc_host*) ;
 int VAR_16 ;
 TYPE_6__* FUNC_27 (TYPE_1__*) ;
 void* FUNC_28 (int *,char*) ;
 scalar_t__ FUNC_29 (struct platform_device*,int ) ;
 struct resource* FUNC_30 (struct platform_device*,int ,int) ;
 int FUNC_31 (struct platform_device*,struct mmc_host*) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*) ;
 int FUNC_35 (TYPE_1__*,int ) ;
 int FUNC_36 (TYPE_1__*) ;
 int FUNC_37 (int *) ;

__attribute__((used)) static int FUNC_38(struct platform_device *VAR_17)
{
 struct mmc_host *VAR_18;
 struct msdc_host *VAR_19;
 struct resource *VAR_20;
 int VAR_21;

 if (!VAR_17->dev.of_node) {
  FUNC_6(&VAR_17->dev, "No DT found\n");
  return -VAR_2;
 }


 VAR_18 = FUNC_14(sizeof(struct msdc_host), &VAR_17->dev);
 if (!VAR_18)
  return -VAR_3;

 VAR_19 = FUNC_19(VAR_18);
 VAR_21 = FUNC_18(VAR_18);
 if (VAR_21)
  goto host_free;

 VAR_20 = FUNC_30(VAR_17, VAR_5, 0);
 VAR_19->base = FUNC_8(&VAR_17->dev, VAR_20);
 if (FUNC_3(VAR_19->base)) {
  VAR_21 = FUNC_4(VAR_19->base);
  goto host_free;
 }

 VAR_20 = FUNC_30(VAR_17, VAR_5, 1);
 if (VAR_20) {
  VAR_19->top_base = FUNC_8(&VAR_17->dev, VAR_20);
  if (FUNC_3(VAR_19->top_base))
   VAR_19->top_base = ((void*)0);
 }

 VAR_21 = FUNC_20(VAR_18);
 if (VAR_21)
  goto host_free;

 VAR_19->src_clk = FUNC_7(&VAR_17->dev, "source");
 if (FUNC_3(VAR_19->src_clk)) {
  VAR_21 = FUNC_4(VAR_19->src_clk);
  goto host_free;
 }

 VAR_19->h_clk = FUNC_7(&VAR_17->dev, "hclk");
 if (FUNC_3(VAR_19->h_clk)) {
  VAR_21 = FUNC_4(VAR_19->h_clk);
  goto host_free;
 }

 VAR_19->bus_clk = FUNC_7(&VAR_17->dev, "bus_clk");
 if (FUNC_3(VAR_19->bus_clk))
  VAR_19->bus_clk = ((void*)0);

 VAR_19->src_clk_cg = FUNC_7(&VAR_17->dev, "source_cg");
 if (FUNC_3(VAR_19->src_clk_cg))
  VAR_19->src_clk_cg = ((void*)0);

 VAR_19->irq = FUNC_29(VAR_17, 0);
 if (VAR_19->irq < 0) {
  VAR_21 = -VAR_2;
  goto host_free;
 }

 VAR_19->pinctrl = FUNC_9(&VAR_17->dev);
 if (FUNC_3(VAR_19->pinctrl)) {
  VAR_21 = FUNC_4(VAR_19->pinctrl);
  FUNC_6(&VAR_17->dev, "Cannot find pinctrl!\n");
  goto host_free;
 }

 VAR_19->pins_default = FUNC_28(VAR_19->pinctrl, "default");
 if (FUNC_3(VAR_19->pins_default)) {
  VAR_21 = FUNC_4(VAR_19->pins_default);
  FUNC_6(&VAR_17->dev, "Cannot find pinctrl default!\n");
  goto host_free;
 }

 VAR_19->pins_uhs = FUNC_28(VAR_19->pinctrl, "state_uhs");
 if (FUNC_3(VAR_19->pins_uhs)) {
  VAR_21 = FUNC_4(VAR_19->pins_uhs);
  FUNC_6(&VAR_17->dev, "Cannot find pinctrl uhs!\n");
  goto host_free;
 }

 FUNC_25(VAR_17, VAR_19);

 VAR_19->dev = &VAR_17->dev;
 VAR_19->dev_comp = FUNC_27(&VAR_17->dev);
 VAR_19->mmc = VAR_18;
 VAR_19->src_clk_freq = FUNC_5(VAR_19->src_clk);

 VAR_18->ops = &VAR_16;
 if (VAR_19->dev_comp->clk_div_bits == 8)
  VAR_18->f_min = FUNC_0(VAR_19->src_clk_freq, 4 * 255);
 else
  VAR_18->f_min = FUNC_0(VAR_19->src_clk_freq, 4 * 4095);

 if (!(VAR_18->caps & VAR_11) &&
     !FUNC_15(VAR_18) &&
     VAR_19->dev_comp->use_internal_cd) {




  VAR_19->internal_cd = 1;
 }

 if (VAR_18->caps & VAR_12)
  VAR_18->caps2 |= VAR_8;

 VAR_18->caps |= VAR_10 | VAR_9;

 VAR_18->max_segs = VAR_7;
 if (VAR_19->dev_comp->support_64g)
  VAR_18->max_seg_size = VAR_1;
 else
  VAR_18->max_seg_size = VAR_0;
 VAR_18->max_blk_size = 2048;
 VAR_18->max_req_size = 512 * 1024;
 VAR_18->max_blk_count = VAR_18->max_req_size / 512;
 if (VAR_19->dev_comp->support_64g)
  VAR_19->dma_mask = FUNC_1(36);
 else
  VAR_19->dma_mask = FUNC_1(32);
 FUNC_16(VAR_18)->dma_mask = &VAR_19->dma_mask;

 VAR_19->timeout_clks = 3 * 1048576;
 VAR_19->dma.gpd = FUNC_11(&VAR_17->dev,
    2 * sizeof(struct mt_gpdma_desc),
    &VAR_19->dma.gpd_addr, VAR_4);
 VAR_19->dma.bd = FUNC_11(&VAR_17->dev,
    VAR_7 * sizeof(struct mt_bdma_desc),
    &VAR_19->dma.bd_addr, VAR_4);
 if (!VAR_19->dma.gpd || !VAR_19->dma.bd) {
  VAR_21 = -VAR_3;
  goto release_mem;
 }
 FUNC_23(VAR_19, &VAR_19->dma);
 FUNC_2(&VAR_19->req_timeout, VAR_15);
 FUNC_37(&VAR_19->lock);

 FUNC_31(VAR_17, VAR_18);
 FUNC_26(VAR_19);
 FUNC_24(VAR_19);

 VAR_21 = FUNC_10(&VAR_17->dev, VAR_19->irq, VAR_14,
          VAR_6, VAR_17->name, VAR_19);
 if (VAR_21)
  goto release;

 FUNC_34(VAR_19->dev);
 FUNC_35(VAR_19->dev, VAR_13);
 FUNC_36(VAR_19->dev);
 FUNC_33(VAR_19->dev);
 VAR_21 = FUNC_13(VAR_18);

 if (VAR_21)
  goto end;

 return 0;
end:
 FUNC_32(VAR_19->dev);
release:
 FUNC_31(VAR_17, ((void*)0));
 FUNC_21(VAR_19);
 FUNC_22(VAR_19);
release_mem:
 if (VAR_19->dma.gpd)
  FUNC_12(&VAR_17->dev,
   2 * sizeof(struct mt_gpdma_desc),
   VAR_19->dma.gpd, VAR_19->dma.gpd_addr);
 if (VAR_19->dma.bd)
  FUNC_12(&VAR_17->dev,
   VAR_7 * sizeof(struct mt_bdma_desc),
   VAR_19->dma.bd, VAR_19->dma.bd_addr);
host_free:
 FUNC_17(VAR_18);

 return VAR_21;
}
