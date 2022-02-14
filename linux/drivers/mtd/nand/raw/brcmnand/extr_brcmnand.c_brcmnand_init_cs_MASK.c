
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int write_oob; int read_oob; int read_oob_raw; int write_oob_raw; int write_page_raw; int read_page_raw; int write_page; int read_page; int mode; } ;
struct TYPE_5__ {int write_buf; int read_buf; int read_byte; int waitfunc; int cmdfunc; int cmd_ctrl; } ;
struct nand_chip {int * controller; TYPE_3__ ecc; TYPE_2__ legacy; } ;
struct TYPE_4__ {int * parent; } ;
struct mtd_info {TYPE_1__ dev; int owner; int name; } ;
struct device_node {int dummy; } ;
struct brcmnand_host {int cs; struct nand_chip chip; struct platform_device* pdev; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmnand_controller*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (struct mtd_info*,int *,int ) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct brcmnand_controller*,int ) ;
 int FUNC_6 (struct nand_chip*,int) ;
 int FUNC_7 (struct nand_chip*,struct brcmnand_host*) ;
 int FUNC_8 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct brcmnand_controller*,int ,int) ;
 int FUNC_11 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_12(struct brcmnand_host *VAR_21, struct device_node *VAR_22)
{
 struct brcmnand_controller *VAR_23 = VAR_21->ctrl;
 struct platform_device *VAR_24 = VAR_21->pdev;
 struct mtd_info *VAR_25;
 struct nand_chip *VAR_26;
 int VAR_27;
 u16 VAR_28;

 VAR_27 = FUNC_11(VAR_22, "reg", &VAR_21->cs);
 if (VAR_27) {
  FUNC_1(&VAR_24->dev, "can't get chip-select\n");
  return -VAR_3;
 }

 VAR_25 = FUNC_9(&VAR_21->chip);
 VAR_26 = &VAR_21->chip;

 FUNC_8(VAR_26, VAR_22);
 FUNC_7(VAR_26, VAR_21);
 VAR_25->name = FUNC_2(&VAR_24->dev, VAR_4, "brcmnand.%d",
       VAR_21->cs);
 if (!VAR_25->name)
  return -VAR_2;

 VAR_25->owner = VAR_6;
 VAR_25->dev.parent = &VAR_24->dev;

 VAR_26->legacy.cmd_ctrl = VAR_7;
 VAR_26->legacy.cmdfunc = VAR_8;
 VAR_26->legacy.waitfunc = VAR_15;
 VAR_26->legacy.read_byte = VAR_10;
 VAR_26->legacy.read_buf = VAR_9;
 VAR_26->legacy.write_buf = VAR_16;

 VAR_26->ecc.mode = VAR_5;
 VAR_26->ecc.read_page = VAR_13;
 VAR_26->ecc.write_page = VAR_19;
 VAR_26->ecc.read_page_raw = VAR_14;
 VAR_26->ecc.write_page_raw = VAR_20;
 VAR_26->ecc.write_oob_raw = VAR_18;
 VAR_26->ecc.read_oob_raw = VAR_12;
 VAR_26->ecc.read_oob = VAR_11;
 VAR_26->ecc.write_oob = VAR_17;

 VAR_26->controller = &VAR_23->controller;






 VAR_28 = FUNC_0(VAR_23, VAR_21->cs, VAR_0);
 FUNC_10(VAR_23, VAR_28,
        FUNC_5(VAR_23, VAR_28) & ~VAR_1);

 VAR_27 = FUNC_6(VAR_26, 1);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, ((void*)0), 0);
 if (VAR_27)
  FUNC_4(VAR_26);

 return VAR_27;
}
