
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sh_flctl_platform_data {int flcmncr_val; int nr_parts; int parts; int use_holden; scalar_t__ has_hwecc; } ;
struct TYPE_14__ {int * ops; } ;
struct TYPE_15__ {int chip_delay; TYPE_2__ dummy_controller; void* get_features; void* set_features; int cmdfunc; int select_chip; int read_buf; int write_buf; int read_byte; } ;
struct nand_chip {int options; TYPE_3__ legacy; } ;
struct sh_flctl {int flcmncr_base; int flintdmacr_base; scalar_t__ hwecc; int holden; struct platform_device* pdev; struct nand_chip chip; scalar_t__ fifo; int reg; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_13__ {TYPE_4__* parent; } ;
struct mtd_info {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 struct sh_flctl_platform_data* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct resource*) ;
 struct sh_flctl* FUNC_5 (TYPE_4__*,int,int ) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ,char*,struct sh_flctl*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct sh_flctl_platform_data* FUNC_7 (TYPE_4__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (struct sh_flctl*) ;
 int VAR_16 ;
 int FUNC_9 (struct sh_flctl*) ;
 int VAR_17 ;
 int FUNC_10 (struct mtd_info*,int ,int ) ;
 int FUNC_11 (struct nand_chip*) ;
 void* VAR_18 ;
 int FUNC_12 (struct nand_chip*,int) ;
 int FUNC_13 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_14 (struct nand_chip*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct sh_flctl*) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 struct resource *VAR_20;
 struct sh_flctl *VAR_21;
 struct mtd_info *VAR_22;
 struct nand_chip *VAR_23;
 struct sh_flctl_platform_data *VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_21 = FUNC_5(&VAR_19->dev, sizeof(struct sh_flctl), VAR_3);
 if (!VAR_21)
  return -VAR_2;

 VAR_20 = FUNC_16(VAR_19, VAR_4, 0);
 VAR_21->reg = FUNC_4(&VAR_19->dev, VAR_20);
 if (FUNC_0(VAR_21->reg))
  return FUNC_1(VAR_21->reg);
 VAR_21->fifo = VAR_20->start + 0x24;

 VAR_26 = FUNC_15(VAR_19, 0);
 if (VAR_26 < 0) {
  FUNC_2(&VAR_19->dev, "failed to get flste irq data: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_25 = FUNC_6(&VAR_19->dev, VAR_26, VAR_12, VAR_5,
          "flste", VAR_21);
 if (VAR_25) {
  FUNC_2(&VAR_19->dev, "request interrupt failed.\n");
  return VAR_25;
 }

 if (VAR_19->dev.of_node)
  VAR_24 = FUNC_7(&VAR_19->dev);
 else
  VAR_24 = FUNC_3(&VAR_19->dev);

 if (!VAR_24) {
  FUNC_2(&VAR_19->dev, "no setup data defined\n");
  return -VAR_1;
 }

 FUNC_17(VAR_19, VAR_21);
 VAR_23 = &VAR_21->chip;
 VAR_22 = FUNC_14(VAR_23);
 FUNC_13(VAR_23, VAR_19->dev.of_node);
 VAR_22->dev.parent = &VAR_19->dev;
 VAR_21->pdev = VAR_19;
 VAR_21->hwecc = VAR_24->has_hwecc;
 VAR_21->holden = VAR_24->use_holden;
 VAR_21->flcmncr_base = VAR_24->flcmncr_val;
 VAR_21->flintdmacr_base = VAR_21->hwecc ? (VAR_10 | VAR_0) : VAR_10;



 VAR_23->legacy.chip_delay = 20;

 VAR_23->legacy.read_byte = VAR_15;
 VAR_23->legacy.write_buf = VAR_17;
 VAR_23->legacy.read_buf = VAR_14;
 VAR_23->legacy.select_chip = VAR_16;
 VAR_23->legacy.cmdfunc = VAR_11;
 VAR_23->legacy.set_features = VAR_18;
 VAR_23->legacy.get_features = VAR_18;

 if (VAR_24->flcmncr_val & VAR_9)
  VAR_23->options |= VAR_8;

 VAR_23->options |= VAR_6 | VAR_7;

 FUNC_19(&VAR_19->dev);
 FUNC_20(&VAR_19->dev);

 FUNC_9(VAR_21);

 VAR_23->legacy.dummy_controller.ops = &VAR_13;
 VAR_25 = FUNC_12(VAR_23, 1);
 if (VAR_25)
  goto err_chip;

 VAR_25 = FUNC_10(VAR_22, VAR_24->parts, VAR_24->nr_parts);
 if (VAR_25)
  goto cleanup_nand;

 return 0;

cleanup_nand:
 FUNC_11(VAR_23);
err_chip:
 FUNC_8(VAR_21);
 FUNC_18(&VAR_19->dev);
 return VAR_25;
}
