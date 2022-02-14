
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_8__ {int * priv; } ;
struct TYPE_7__ {int chip_delay; int waitfunc; int dev_ready; int cmd_ctrl; scalar_t__ IO_ADDR_R; scalar_t__ IO_ADDR_W; } ;
struct nand_chip {int options; TYPE_3__ ecc; int bbt_options; TYPE_2__ legacy; TYPE_4__* controller; } ;
struct omap_nand_info {int devsize; int dma; scalar_t__ flash_bbt; scalar_t__ ready_gpiod; int phys_base; int gpmc_cs; struct nand_chip nand; int ops; int reg; struct platform_device* pdev; } ;
struct TYPE_6__ {struct device* parent; } ;
struct mtd_info {scalar_t__ name; TYPE_1__ dev; } ;
struct TYPE_9__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device*,char*,int ) ;
 scalar_t__ FUNC_5 (struct device*,struct resource*) ;
 scalar_t__ FUNC_6 (struct device*,int ,char*,int ) ;
 struct omap_nand_info* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct mtd_info*,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (struct nand_chip*,int) ;
 int FUNC_15 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_16 (struct nand_chip*) ;
 int VAR_7 ;
 int FUNC_17 (struct device*,struct omap_nand_info*) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct mtd_info*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_13)
{
 struct omap_nand_info *VAR_14;
 struct mtd_info *VAR_15;
 struct nand_chip *VAR_16;
 int VAR_17;
 struct resource *VAR_18;
 struct device *VAR_19 = &VAR_13->dev;

 VAR_14 = FUNC_7(&VAR_13->dev, sizeof(struct omap_nand_info),
    VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->pdev = VAR_13;

 VAR_17 = FUNC_17(VAR_19, VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_14->ops = FUNC_9(&VAR_14->reg, VAR_14->gpmc_cs);
 if (!VAR_14->ops) {
  FUNC_3(&VAR_13->dev, "Failed to get GPMC->NAND interface\n");
  return -VAR_0;
 }

 VAR_16 = &VAR_14->nand;
 VAR_15 = FUNC_16(VAR_16);
 VAR_15->dev.parent = &VAR_13->dev;
 VAR_16->ecc.priv = ((void*)0);
 FUNC_15(VAR_16, VAR_19->of_node);

 if (!VAR_15->name) {
  VAR_15->name = FUNC_6(&VAR_13->dev, VAR_2,
        "omap2-nand.%d", VAR_14->gpmc_cs);
  if (!VAR_15->name) {
   FUNC_3(&VAR_13->dev, "Failed to set MTD name\n");
   return -VAR_1;
  }
 }

 VAR_18 = FUNC_18(VAR_13, VAR_4, 0);
 VAR_16->legacy.IO_ADDR_R = FUNC_5(&VAR_13->dev, VAR_18);
 if (FUNC_0(VAR_16->legacy.IO_ADDR_R))
  return FUNC_2(VAR_16->legacy.IO_ADDR_R);

 VAR_14->phys_base = VAR_18->start;

 if (!VAR_9) {
  VAR_8.ops = &VAR_11;
  FUNC_13(&VAR_8);
  VAR_9 = 1;
 }

 VAR_16->controller = &VAR_8;

 VAR_16->legacy.IO_ADDR_W = VAR_16->legacy.IO_ADDR_R;
 VAR_16->legacy.cmd_ctrl = VAR_10;

 VAR_14->ready_gpiod = FUNC_4(&VAR_13->dev, "rb",
          VAR_3);
 if (FUNC_0(VAR_14->ready_gpiod)) {
  FUNC_3(VAR_19, "failed to get ready gpio\n");
  return FUNC_2(VAR_14->ready_gpiod);
 }
 if (VAR_14->ready_gpiod) {
  VAR_16->legacy.dev_ready = VAR_7;
  VAR_16->legacy.chip_delay = 0;
 } else {
  VAR_16->legacy.waitfunc = VAR_12;
  VAR_16->legacy.chip_delay = 50;
 }

 if (VAR_14->flash_bbt)
  VAR_16->bbt_options |= VAR_5;


 VAR_16->options |= VAR_14->devsize & VAR_6;

 VAR_17 = FUNC_14(VAR_16, 1);
 if (VAR_17)
  goto return_error;

 VAR_17 = FUNC_10(VAR_15, ((void*)0), 0);
 if (VAR_17)
  goto cleanup_nand;

 FUNC_19(VAR_13, VAR_15);

 return 0;

cleanup_nand:
 FUNC_12(VAR_16);

return_error:
 if (!FUNC_1(VAR_14->dma))
  FUNC_8(VAR_14->dma);
 if (VAR_16->ecc.priv) {
  FUNC_11(VAR_16->ecc.priv);
  VAR_16->ecc.priv = ((void*)0);
 }
 return VAR_17;
}
