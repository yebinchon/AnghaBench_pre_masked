
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mvsd_host {int base_clock; int clk; int timer; int base; int lock; TYPE_1__* dev; struct mmc_host* mmc; } ;
struct mmc_host {int ocr_avail; int max_blk_size; int max_blk_count; int max_segs; int max_seg_size; int max_req_size; int caps; scalar_t__ f_max; int f_min; int * ops; } ;
struct mbus_dram_target_info {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,struct resource*) ;
 int FUNC_10 (TYPE_1__*,int,int ,int ,int ,struct mvsd_host*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (struct mmc_host*) ;
 struct mmc_host* FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (struct mmc_host*) ;
 int FUNC_14 (struct mmc_host*) ;
 struct mvsd_host* FUNC_15 (struct mmc_host*) ;
 int FUNC_16 (struct mvsd_host*,struct mbus_dram_target_info const*) ;
 struct mbus_dram_target_info* FUNC_17 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 (struct mvsd_host*) ;
 int VAR_15 ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct mmc_host*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_16)
{
 struct device_node *VAR_17 = VAR_16->dev.of_node;
 struct mmc_host *VAR_18 = ((void*)0);
 struct mvsd_host *VAR_19 = ((void*)0);
 const struct mbus_dram_target_info *VAR_20;
 struct resource *VAR_21;
 int VAR_22, VAR_23;

 if (!VAR_17) {
  FUNC_7(&VAR_16->dev, "no DT node\n");
  return -VAR_2;
 }
 VAR_21 = FUNC_20(VAR_16, VAR_5, 0);
 VAR_23 = FUNC_19(VAR_16, 0);
 if (!VAR_21 || VAR_23 < 0)
  return -VAR_4;

 VAR_18 = FUNC_12(sizeof(struct mvsd_host), &VAR_16->dev);
 if (!VAR_18) {
  VAR_22 = -VAR_3;
  goto out;
 }

 VAR_19 = FUNC_15(VAR_18);
 VAR_19->mmc = VAR_18;
 VAR_19->dev = &VAR_16->dev;
 VAR_19->clk = FUNC_8(&VAR_16->dev, ((void*)0));
 if (FUNC_1(VAR_19->clk)) {
  FUNC_7(&VAR_16->dev, "no clock associated\n");
  VAR_22 = -VAR_1;
  goto out;
 }
 FUNC_5(VAR_19->clk);

 VAR_18->ops = &VAR_14;

 VAR_18->ocr_avail = VAR_8 | VAR_9;

 VAR_18->f_min = FUNC_0(VAR_19->base_clock, VAR_10);
 VAR_18->f_max = VAR_11;

 VAR_18->max_blk_size = 2048;
 VAR_18->max_blk_count = 65535;

 VAR_18->max_segs = 1;
 VAR_18->max_seg_size = VAR_18->max_blk_size * VAR_18->max_blk_count;
 VAR_18->max_req_size = VAR_18->max_blk_size * VAR_18->max_blk_count;

 VAR_19->base_clock = FUNC_4(VAR_19->clk) / 2;
 VAR_22 = FUNC_14(VAR_18);
 if (VAR_22 < 0)
  goto out;
 if (VAR_12)
  VAR_18->f_max = VAR_12;

 VAR_18->caps |= VAR_6;

 FUNC_22(&VAR_19->lock);

 VAR_19->base = FUNC_9(&VAR_16->dev, VAR_21);
 if (FUNC_1(VAR_19->base)) {
  VAR_22 = FUNC_2(VAR_19->base);
  goto out;
 }


 VAR_20 = FUNC_17();
 if (VAR_20)
  FUNC_16(VAR_19, VAR_20);

 FUNC_18(VAR_19);

 VAR_22 = FUNC_10(&VAR_16->dev, VAR_23, VAR_13, 0, VAR_0, VAR_19);
 if (VAR_22) {
  FUNC_7(&VAR_16->dev, "cannot assign irq %d\n", VAR_23);
  goto out;
 }

 FUNC_23(&VAR_19->timer, VAR_15, 0);
 FUNC_21(VAR_16, VAR_18);
 VAR_22 = FUNC_11(VAR_18);
 if (VAR_22)
  goto out;

 if (!(VAR_18->caps & VAR_7))
  FUNC_6(&VAR_16->dev, "using GPIO for card detection\n");
 else
  FUNC_6(&VAR_16->dev, "lacking card detect (fall back to polling)\n");

 return 0;

out:
 if (VAR_18) {
  if (!FUNC_1(VAR_19->clk))
   FUNC_3(VAR_19->clk);
  FUNC_13(VAR_18);
 }

 return VAR_22;
}
