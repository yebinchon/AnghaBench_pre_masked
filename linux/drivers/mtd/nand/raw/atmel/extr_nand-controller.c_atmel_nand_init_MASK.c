
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int mode; } ;
struct TYPE_9__ {int chip_delay; int select_chip; int write_buf; int read_buf; int write_byte; int read_byte; int cmd_ctrl; } ;
struct nand_chip {TYPE_5__ ecc; int options; TYPE_4__ legacy; int * controller; } ;
struct TYPE_6__ {int parent; } ;
struct mtd_info {TYPE_1__ dev; } ;
struct atmel_nand_controller {scalar_t__ pmecc; scalar_t__ dmac; TYPE_3__* caps; int mck; int base; int dev; } ;
struct atmel_nand {struct nand_chip base; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int setup_data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_1(struct atmel_nand_controller *VAR_9,
       struct atmel_nand *VAR_10)
{
 struct nand_chip *VAR_11 = &VAR_10->base;
 struct mtd_info *VAR_12 = FUNC_0(VAR_11);

 VAR_12->dev.parent = VAR_9->dev;
 VAR_10->base.controller = &VAR_9->base;

 VAR_11->legacy.cmd_ctrl = VAR_3;
 VAR_11->legacy.read_byte = VAR_5;
 VAR_11->legacy.write_byte = VAR_8;
 VAR_11->legacy.read_buf = VAR_4;
 VAR_11->legacy.write_buf = VAR_7;
 VAR_11->legacy.select_chip = VAR_6;

 if (!VAR_9->mck || !VAR_9->caps->ops->setup_data_interface)
  VAR_11->options |= VAR_1;


 VAR_11->legacy.chip_delay = 40;





 if (VAR_9->dmac)
  VAR_11->options |= VAR_2;


 if (VAR_9->pmecc)
  VAR_11->ecc.mode = VAR_0;
}
