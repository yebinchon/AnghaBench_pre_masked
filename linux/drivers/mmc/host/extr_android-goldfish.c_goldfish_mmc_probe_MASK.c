
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dev; int id; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int max_segs; int max_blk_size; int max_blk_count; int max_req_size; int max_seg_size; int caps; int * ops; } ;
struct goldfish_mmc_host {scalar_t__ virt_base; int phys_base; int irq; int * reg_base; int * dev; int id; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct goldfish_mmc_host*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int*,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mmc_host*) ;
 struct mmc_host* FUNC_9 (int,int *) ;
 int FUNC_10 (struct mmc_host*) ;
 int FUNC_11 (struct mmc_host*) ;
 struct goldfish_mmc_host* FUNC_12 (struct mmc_host*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct goldfish_mmc_host*) ;
 int FUNC_16 (char*,long,long) ;
 int FUNC_17 (int,int ,int ,int ,struct goldfish_mmc_host*) ;
 int FUNC_18 (struct resource*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_18)
{
 struct mmc_host *VAR_19;
 struct goldfish_mmc_host *VAR_20 = ((void*)0);
 struct resource *VAR_21;
 int VAR_22 = 0;
 int VAR_23;
 dma_addr_t VAR_24;

 VAR_21 = FUNC_14(VAR_18, VAR_5, 0);
 VAR_23 = FUNC_13(VAR_18, 0);
 if (VAR_21 == ((void*)0) || VAR_23 < 0)
  return -VAR_3;

 VAR_19 = FUNC_9(sizeof(struct goldfish_mmc_host), &VAR_18->dev);
 if (VAR_19 == ((void*)0)) {
  VAR_22 = -VAR_2;
  goto err_alloc_host_failed;
 }

 VAR_20 = FUNC_12(VAR_19);

 FUNC_16("mmc: Mapping %lX to %lX\n", (long)VAR_21->start, (long)VAR_21->end);
 VAR_20->reg_base = FUNC_6(VAR_21->start, FUNC_18(VAR_21));
 if (VAR_20->reg_base == ((void*)0)) {
  VAR_22 = -VAR_2;
  goto ioremap_failed;
 }
 VAR_20->virt_base = FUNC_4(&VAR_18->dev, VAR_0,
          &VAR_24, VAR_4);

 if (VAR_20->virt_base == 0) {
  VAR_22 = -VAR_2;
  goto dma_alloc_failed;
 }
 VAR_20->phys_base = VAR_24;

 VAR_20->id = VAR_18->id;
 VAR_20->irq = VAR_23;

 VAR_19->ops = &VAR_17;
 VAR_19->f_min = 400000;
 VAR_19->f_max = 24000000;
 VAR_19->ocr_avail = VAR_13 | VAR_14;
 VAR_19->caps = VAR_6;





 VAR_19->max_segs = 32;
 VAR_19->max_blk_size = 2048;
 VAR_19->max_blk_count = 2048;
 VAR_19->max_req_size = VAR_0;
 VAR_19->max_seg_size = VAR_19->max_req_size;

 VAR_22 = FUNC_17(VAR_20->irq, VAR_16, 0, VAR_1, VAR_20);
 if (VAR_22) {
  FUNC_1(&VAR_18->dev, "Failed IRQ Adding goldfish MMC\n");
  goto err_request_irq_failed;
 }

 VAR_20->dev = &VAR_18->dev;
 FUNC_15(VAR_18, VAR_20);

 VAR_22 = FUNC_3(&VAR_18->dev, &VAR_15);
 if (VAR_22)
  FUNC_2(FUNC_10(VAR_19), "Unable to create sysfs attributes\n");

 FUNC_0(VAR_20, VAR_8, VAR_20->phys_base);
 FUNC_0(VAR_20, VAR_7,
      VAR_10 | VAR_11 |
      VAR_12 | VAR_9);

 FUNC_8(VAR_19);
 return 0;

err_request_irq_failed:
 FUNC_5(&VAR_18->dev, VAR_0, VAR_20->virt_base,
     VAR_20->phys_base);
dma_alloc_failed:
 FUNC_7(VAR_20->reg_base);
ioremap_failed:
 FUNC_11(VAR_19);
err_alloc_host_failed:
 return VAR_22;
}
