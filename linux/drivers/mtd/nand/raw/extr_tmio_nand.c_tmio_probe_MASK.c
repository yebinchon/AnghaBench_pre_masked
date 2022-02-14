
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tmio_nand_data {int num_partitions; int * partition; int * part_parsers; int badblock_pattern; } ;
struct TYPE_6__ {int chip_delay; int waitfunc; int read_buf; int write_buf; int read_byte; int dev_ready; int cmd_ctrl; void* IO_ADDR_W; void* IO_ADDR_R; } ;
struct TYPE_5__ {int size; int bytes; int strength; int correct; int calculate; int hwctl; int mode; } ;
struct nand_chip {TYPE_3__ legacy; int badblock_pattern; TYPE_2__ ecc; } ;
struct tmio_nand {int fcr_base; int irq; void* fcr; void* ccr; struct nand_chip chip; struct platform_device* dev; int comp; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct mtd_info {char* name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 struct tmio_nand_data* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int,int ) ;
 struct tmio_nand* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int *,int ,int ,struct tmio_nand*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mtd_info*,int *,int *,int *,int ) ;
 int FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int) ;
 int FUNC_14 (struct platform_device*,struct tmio_nand*) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (struct platform_device*,struct tmio_nand*) ;
 int FUNC_17 (struct platform_device*,struct tmio_nand*) ;
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

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_15)
{
 struct tmio_nand_data *VAR_16 = FUNC_1(&VAR_15->dev);
 struct resource *VAR_17 = FUNC_13(VAR_15,
   VAR_3, 0);
 struct resource *VAR_18 = FUNC_13(VAR_15,
   VAR_3, 1);
 int VAR_19 = FUNC_12(VAR_15, 0);
 struct tmio_nand *VAR_20;
 struct mtd_info *VAR_21;
 struct nand_chip *VAR_22;
 int VAR_23;

 if (VAR_16 == ((void*)0))
  FUNC_3(&VAR_15->dev, "NULL platform data!\n");

 VAR_20 = FUNC_5(&VAR_15->dev, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 FUNC_7(&VAR_20->comp);

 VAR_20->dev = VAR_15;

 FUNC_14(VAR_15, VAR_20);
 VAR_22 = &VAR_20->chip;
 VAR_21 = FUNC_11(VAR_22);
 VAR_21->name = "tmio-nand";
 VAR_21->dev.parent = &VAR_15->dev;

 VAR_20->ccr = FUNC_4(&VAR_15->dev, VAR_18->start, FUNC_15(VAR_18));
 if (!VAR_20->ccr)
  return -VAR_0;

 VAR_20->fcr_base = VAR_17->start & 0xfffff;
 VAR_20->fcr = FUNC_4(&VAR_15->dev, VAR_17->start, FUNC_15(VAR_17));
 if (!VAR_20->fcr)
  return -VAR_0;

 VAR_23 = FUNC_16(VAR_15, VAR_20);
 if (VAR_23)
  return VAR_23;


 VAR_22->legacy.IO_ADDR_R = VAR_20->fcr;
 VAR_22->legacy.IO_ADDR_W = VAR_20->fcr;


 VAR_22->legacy.cmd_ctrl = VAR_10;
 VAR_22->legacy.dev_ready = VAR_8;
 VAR_22->legacy.read_byte = VAR_12;
 VAR_22->legacy.write_buf = VAR_14;
 VAR_22->legacy.read_buf = VAR_11;


 VAR_22->ecc.mode = VAR_4;
 VAR_22->ecc.size = 512;
 VAR_22->ecc.bytes = 6;
 VAR_22->ecc.strength = 2;
 VAR_22->ecc.hwctl = VAR_9;
 VAR_22->ecc.calculate = VAR_6;
 VAR_22->ecc.correct = VAR_7;

 if (VAR_16)
  VAR_22->badblock_pattern = VAR_16->badblock_pattern;


 VAR_22->legacy.chip_delay = 15;

 VAR_23 = FUNC_6(&VAR_15->dev, VAR_19, &VAR_5, 0,
      FUNC_2(&VAR_15->dev), VAR_20);
 if (VAR_23) {
  FUNC_0(&VAR_15->dev, "request_irq error %d\n", VAR_23);
  goto err_irq;
 }

 VAR_20->irq = VAR_19;
 VAR_22->legacy.waitfunc = VAR_13;


 VAR_23 = FUNC_10(VAR_22, 1);
 if (VAR_23)
  goto err_irq;


 VAR_23 = FUNC_8(VAR_21,
        VAR_16 ? VAR_16->part_parsers : ((void*)0),
        ((void*)0),
        VAR_16 ? VAR_16->partition : ((void*)0),
        VAR_16 ? VAR_16->num_partitions : 0);
 if (!VAR_23)
  return VAR_23;

 FUNC_9(VAR_22);

err_irq:
 FUNC_17(VAR_15, VAR_20);
 return VAR_23;
}
