
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s3c_onenand {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct onenand_platform_data {int nr_parts; int * parts; } ;
struct onenand_chip {int subpagesize; int options; void* base; } ;
struct TYPE_5__ {int * parent; } ;
struct mtd_info {int writesize; scalar_t__ subpage_sft; TYPE_1__ dev; struct onenand_chip* priv; } ;
struct TYPE_7__ {scalar_t__ type; struct platform_device* pdev; int complete; void* dma_addr; void* oob_buf; void* page_buf; void* ahb_addr; void* base; int phys_base; } ;
struct TYPE_6__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,char*) ;
 struct onenand_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,struct resource*) ;
 void* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int ,int ,char*,TYPE_3__**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mtd_info*,int *,int ) ;
 TYPE_3__* VAR_10 ;
 int FUNC_10 (struct mtd_info*) ;
 int FUNC_11 (struct mtd_info*,int) ;
 TYPE_2__* FUNC_12 (struct platform_device*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int) ;
 int FUNC_14 (struct platform_device*,struct mtd_info*) ;
 int FUNC_15 (struct mtd_info*) ;
 int FUNC_16 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_15)
{
 struct onenand_platform_data *VAR_16;
 struct onenand_chip *VAR_17;
 struct mtd_info *VAR_18;
 struct resource *VAR_19;
 int VAR_20, VAR_21;

 VAR_16 = FUNC_3(&VAR_15->dev);


 VAR_20 = sizeof(struct mtd_info) + sizeof(struct onenand_chip);
 VAR_18 = FUNC_6(&VAR_15->dev, VAR_20, VAR_1);
 if (!VAR_18)
  return -VAR_0;

 VAR_10 = FUNC_6(&VAR_15->dev, sizeof(struct s3c_onenand),
          VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_17 = (struct onenand_chip *) &VAR_18[1];
 VAR_18->priv = VAR_17;
 VAR_18->dev.parent = &VAR_15->dev;
 VAR_10->pdev = VAR_15;
 VAR_10->type = FUNC_12(VAR_15)->driver_data;

 FUNC_15(VAR_18);

 VAR_19 = FUNC_13(VAR_15, VAR_3, 0);
 VAR_10->base = FUNC_5(&VAR_15->dev, VAR_19);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->phys_base = VAR_19->start;


 VAR_17->base = VAR_10->base;


 VAR_17->options |= VAR_6;

 if (VAR_10->type != VAR_9) {
  VAR_19 = FUNC_13(VAR_15, VAR_3, 1);
  VAR_10->ahb_addr = FUNC_5(&VAR_15->dev, VAR_19);
  if (FUNC_0(VAR_10->ahb_addr))
   return FUNC_1(VAR_10->ahb_addr);


  VAR_10->page_buf = FUNC_6(&VAR_15->dev, VAR_8,
       VAR_1);
  if (!VAR_10->page_buf)
   return -VAR_0;


  VAR_10->oob_buf = FUNC_6(&VAR_15->dev, 128, VAR_1);
  if (!VAR_10->oob_buf)
   return -VAR_0;


  VAR_18->subpage_sft = 0;
  VAR_17->subpagesize = VAR_18->writesize;

 } else {
  VAR_19 = FUNC_13(VAR_15, VAR_3, 1);
  VAR_10->dma_addr = FUNC_5(&VAR_15->dev, VAR_19);
  if (FUNC_0(VAR_10->dma_addr))
   return FUNC_1(VAR_10->dma_addr);

  VAR_12 = VAR_13;

  VAR_19 = FUNC_13(VAR_15, VAR_2, 0);
  if (VAR_19) {
   FUNC_8(&VAR_10->complete);
   VAR_12 = VAR_11;
   VAR_21 = FUNC_7(&VAR_15->dev, VAR_19->start,
            VAR_14,
            VAR_4, "onenand",
            &VAR_10);
   if (VAR_21) {
    FUNC_2(&VAR_15->dev, "failed to get irq\n");
    return VAR_21;
   }
  }
 }

 VAR_21 = FUNC_11(VAR_18, 1);
 if (VAR_21)
  return VAR_21;

 if (VAR_10->type != VAR_9) {

  VAR_18->subpage_sft = 0;
  VAR_17->subpagesize = VAR_18->writesize;
 }

 if (FUNC_16(VAR_5) & VAR_7)
  FUNC_4(&VAR_10->pdev->dev, "OneNAND Sync. Burst Read enabled\n");

 VAR_21 = FUNC_9(VAR_18, VAR_16 ? VAR_16->parts : ((void*)0),
      VAR_16 ? VAR_16->nr_parts : 0);
 if (VAR_21) {
  FUNC_2(&VAR_15->dev, "failed to parse partitions and register the MTD device\n");
  FUNC_10(VAR_18);
  return VAR_21;
 }

 FUNC_14(VAR_15, VAR_18);

 return 0;
}
