
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int chip_delay; int dev_ready; int read_buf; int write_buf; int read_byte; int cmd_ctrl; } ;
struct TYPE_8__ {int algo; int mode; } ;
struct nand_chip {TYPE_3__ legacy; TYPE_2__ ecc; } ;
struct socrates_nand_host {int * io_base; TYPE_4__* dev; struct nand_chip nand_chip; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_7__ {TYPE_4__* parent; } ;
struct mtd_info {char* name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*,struct socrates_nand_host*) ;
 struct socrates_nand_host* FUNC_2 (TYPE_4__*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int) ;
 int FUNC_7 (struct nand_chip*,struct socrates_nand_host*) ;
 int FUNC_8 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int * FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct socrates_nand_host *VAR_11;
 struct mtd_info *VAR_12;
 struct nand_chip *VAR_13;
 int VAR_14;


 VAR_11 = FUNC_2(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->io_base = FUNC_10(VAR_10->dev.of_node, 0);
 if (VAR_11->io_base == ((void*)0)) {
  FUNC_0(&VAR_10->dev, "ioremap failed\n");
  return -VAR_0;
 }

 VAR_13 = &VAR_11->nand_chip;
 VAR_12 = FUNC_9(VAR_13);
 VAR_11->dev = &VAR_10->dev;


 FUNC_7(VAR_13, VAR_11);
 FUNC_8(VAR_13, VAR_10->dev.of_node);
 VAR_12->name = "socrates_nand";
 VAR_12->dev.parent = &VAR_10->dev;

 VAR_13->legacy.cmd_ctrl = VAR_5;
 VAR_13->legacy.read_byte = VAR_8;
 VAR_13->legacy.write_buf = VAR_9;
 VAR_13->legacy.read_buf = VAR_7;
 VAR_13->legacy.dev_ready = VAR_6;

 VAR_13->ecc.mode = VAR_4;
 VAR_13->ecc.algo = VAR_3;


 VAR_13->legacy.chip_delay = 20;

 FUNC_1(&VAR_10->dev, VAR_11);

 VAR_14 = FUNC_6(VAR_13, 1);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_4(VAR_12, ((void*)0), 0);
 if (!VAR_14)
  return VAR_14;

 FUNC_5(VAR_13);

out:
 FUNC_3(VAR_11->io_base);
 return VAR_14;
}
