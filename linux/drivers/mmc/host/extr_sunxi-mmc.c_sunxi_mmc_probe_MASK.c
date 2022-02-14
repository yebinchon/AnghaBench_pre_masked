
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sunxi_mmc_host {int use_new_timings; int sg_dma; int sg_cpu; TYPE_1__* cfg; int clk_mmc; int lock; struct mmc_host* mmc; TYPE_2__* dev; } ;
struct sunxi_idma_des {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mmc_host {int max_blk_count; int max_blk_size; int max_segs; int max_seg_size; int max_req_size; int f_min; int f_max; int caps; int caps2; int * ops; } ;
struct TYPE_12__ {int idma_des_size_bits; scalar_t__ clk_delays; scalar_t__ needs_new_timings; scalar_t__ ccu_has_timings_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ) ;
 int FUNC_5 (struct mmc_host*) ;
 struct mmc_host* FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 struct sunxi_mmc_host* FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct platform_device*,struct mmc_host*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct sunxi_mmc_host*) ;
 int VAR_13 ;
 int FUNC_20 (struct sunxi_mmc_host*,struct platform_device*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_14)
{
 struct sunxi_mmc_host *VAR_15;
 struct mmc_host *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_6(sizeof(struct sunxi_mmc_host), &VAR_14->dev);
 if (!VAR_16) {
  FUNC_0(&VAR_14->dev, "mmc alloc host failed\n");
  return -VAR_0;
 }
 FUNC_11(VAR_14, VAR_16);

 VAR_15 = FUNC_9(VAR_16);
 VAR_15->dev = &VAR_14->dev;
 VAR_15->mmc = VAR_16;
 FUNC_16(&VAR_15->lock);

 VAR_17 = FUNC_20(VAR_15, VAR_14);
 if (VAR_17)
  goto error_free_host;

 VAR_15->sg_cpu = FUNC_3(&VAR_14->dev, VAR_12,
       &VAR_15->sg_dma, VAR_1);
 if (!VAR_15->sg_cpu) {
  FUNC_0(&VAR_14->dev, "Failed to allocate DMA descriptor mem\n");
  VAR_17 = -VAR_0;
  goto error_free_host;
 }

 if (VAR_15->cfg->ccu_has_timings_switch) {




  FUNC_18(VAR_15->clk_mmc, 1);


  VAR_17 = FUNC_17(VAR_15->clk_mmc);
  if (VAR_17 < 0) {




   FUNC_2(&VAR_14->dev, "MMC clk timing mode unknown\n");
   VAR_15->use_new_timings = 0;
  } else {
   VAR_15->use_new_timings = !!VAR_17;
  }
 } else if (VAR_15->cfg->needs_new_timings) {

  VAR_15->use_new_timings = 1;
 }

 VAR_16->ops = &VAR_13;
 VAR_16->max_blk_count = 8192;
 VAR_16->max_blk_size = 4096;
 VAR_16->max_segs = VAR_12 / sizeof(struct sunxi_idma_des);
 VAR_16->max_seg_size = (1 << VAR_15->cfg->idma_des_size_bits);
 VAR_16->max_req_size = VAR_16->max_seg_size * VAR_16->max_segs;

 VAR_16->f_min = 400000;
 VAR_16->f_max = 52000000;
 VAR_16->caps |= VAR_8 | VAR_10 |
      VAR_7 | VAR_9;
 if ((VAR_15->cfg->clk_delays || VAR_15->use_new_timings) &&
     !FUNC_10(VAR_14->dev.of_node,
         "allwinner,sun50i-h5-emmc"))
  VAR_16->caps |= VAR_5 | VAR_6;

 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17)
  goto error_free_dma;







 if (!(VAR_15->cfg->clk_delays || VAR_15->use_new_timings)) {
  VAR_16->caps &= ~(VAR_6 | VAR_5 |
          VAR_4 | VAR_11);
  VAR_16->caps2 &= ~VAR_2;
 }


 VAR_16->caps2 &= ~VAR_3;

 VAR_17 = FUNC_19(VAR_15);
 if (VAR_17)
  goto error_free_dma;

 FUNC_13(&VAR_14->dev);
 FUNC_14(&VAR_14->dev, 50);
 FUNC_15(&VAR_14->dev);
 FUNC_12(&VAR_14->dev);

 VAR_17 = FUNC_5(VAR_16);
 if (VAR_17)
  goto error_free_dma;

 FUNC_1(&VAR_14->dev, "initialized, max. request size: %u KB%s\n",
   VAR_16->max_req_size >> 10,
   VAR_15->use_new_timings ? ", uses new timings mode" : "");

 return 0;

error_free_dma:
 FUNC_4(&VAR_14->dev, VAR_12, VAR_15->sg_cpu, VAR_15->sg_dma);
error_free_host:
 FUNC_7(VAR_16);
 return VAR_17;
}
