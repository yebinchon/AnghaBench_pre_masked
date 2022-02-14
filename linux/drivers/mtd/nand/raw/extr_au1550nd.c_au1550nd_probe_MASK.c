
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int chip_delay; int read_buf; int write_buf; int read_byte; int cmdfunc; int select_chip; int dev_ready; } ;
struct TYPE_5__ {int algo; int mode; } ;
struct nand_chip {TYPE_3__ legacy; int options; TYPE_2__ ecc; } ;
struct TYPE_4__ {int * parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct au1550nd_platdata {int num_parts; int parts; scalar_t__ devwidth; } ;
struct au1550nd_ctx {int cs; int base; int write_byte; struct nand_chip chip; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,char*,...) ;
 struct au1550nd_platdata* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct au1550nd_ctx*) ;
 struct au1550nd_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mtd_info*,int ,int ) ;
 int FUNC_8 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct au1550nd_ctx*) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ,char*) ;
 int FUNC_14 (struct resource*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_18)
{
 struct au1550nd_platdata *VAR_19;
 struct au1550nd_ctx *VAR_20;
 struct nand_chip *VAR_21;
 struct mtd_info *VAR_22;
 struct resource *VAR_23;
 int VAR_24, VAR_25;

 VAR_19 = FUNC_1(&VAR_18->dev);
 if (!VAR_19) {
  FUNC_0(&VAR_18->dev, "missing platform data\n");
  return -VAR_0;
 }

 VAR_20 = FUNC_6(sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 VAR_23 = FUNC_10(VAR_18, VAR_3, 0);
 if (!VAR_23) {
  FUNC_0(&VAR_18->dev, "no NAND memory resource\n");
  VAR_24 = -VAR_0;
  goto out1;
 }
 if (FUNC_13(VAR_23->start, FUNC_14(VAR_23), "au1550-nand")) {
  FUNC_0(&VAR_18->dev, "cannot claim NAND memory area\n");
  VAR_24 = -VAR_1;
  goto out1;
 }

 VAR_20->base = FUNC_3(VAR_23->start, 0x1000);
 if (!VAR_20->base) {
  FUNC_0(&VAR_18->dev, "cannot remap NAND memory area\n");
  VAR_24 = -VAR_0;
  goto out2;
 }

 VAR_21 = &VAR_20->chip;
 VAR_22 = FUNC_9(VAR_21);
 VAR_22->dev.parent = &VAR_18->dev;


 VAR_25 = FUNC_2(VAR_23->start);
 if (VAR_25 < 0) {
  FUNC_0(&VAR_18->dev, "cannot detect NAND chipselect\n");
  VAR_24 = -VAR_0;
  goto out3;
 }
 VAR_20->cs = VAR_25;

 VAR_21->legacy.dev_ready = VAR_8;
 VAR_21->legacy.select_chip = VAR_9;
 VAR_21->legacy.cmdfunc = VAR_7;


 VAR_21->legacy.chip_delay = 30;
 VAR_21->ecc.mode = VAR_6;
 VAR_21->ecc.algo = VAR_5;

 if (VAR_19->devwidth)
  VAR_21->options |= VAR_4;

 VAR_21->legacy.read_byte = (VAR_19->devwidth) ? VAR_13 : VAR_12;
 VAR_20->write_byte = (VAR_19->devwidth) ? VAR_17 : VAR_16;
 VAR_21->legacy.write_buf = (VAR_19->devwidth) ? VAR_15 : VAR_14;
 VAR_21->legacy.read_buf = (VAR_19->devwidth) ? VAR_11 : VAR_10;

 VAR_24 = FUNC_8(VAR_21, 1);
 if (VAR_24) {
  FUNC_0(&VAR_18->dev, "NAND scan failed with %d\n", VAR_24);
  goto out3;
 }

 FUNC_7(VAR_22, VAR_19->parts, VAR_19->num_parts);

 FUNC_11(VAR_18, VAR_20);

 return 0;

out3:
 FUNC_4(VAR_20->base);
out2:
 FUNC_12(VAR_23->start, FUNC_14(VAR_23));
out1:
 FUNC_5(VAR_20);
 return VAR_24;
}
