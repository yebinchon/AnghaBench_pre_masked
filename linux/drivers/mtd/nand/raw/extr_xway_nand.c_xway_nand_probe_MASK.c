
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int algo; int mode; } ;
struct TYPE_12__ {int chip_delay; int read_byte; int read_buf; int write_buf; int select_chip; int dev_ready; int cmd_ctrl; } ;
struct TYPE_14__ {TYPE_3__ ecc; TYPE_2__ legacy; } ;
struct xway_nand_data {TYPE_4__ chip; int nandaddr; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_9__ dev; } ;
struct TYPE_11__ {TYPE_9__* parent; } ;
struct mtd_info {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,struct resource*) ;
 struct xway_nand_data* FUNC_5 (TYPE_9__*,int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct mtd_info*,int *,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,struct xway_nand_data*) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 struct mtd_info* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ,char*,int*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct xway_nand_data*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_30)
{
 struct xway_nand_data *VAR_31;
 struct mtd_info *VAR_32;
 struct resource *VAR_33;
 int VAR_34;
 u32 VAR_35;
 u32 VAR_36 = 0;


 VAR_31 = FUNC_5(&VAR_30->dev, sizeof(struct xway_nand_data),
       VAR_11);
 if (!VAR_31)
  return -VAR_10;

 VAR_33 = FUNC_14(VAR_30, VAR_12, 0);
 VAR_31->nandaddr = FUNC_4(&VAR_30->dev, VAR_33);
 if (FUNC_2(VAR_31->nandaddr))
  return FUNC_3(VAR_31->nandaddr);

 FUNC_11(&VAR_31->chip, VAR_30->dev.of_node);
 VAR_32 = FUNC_12(&VAR_31->chip);
 VAR_32->dev.parent = &VAR_30->dev;

 VAR_31->chip.legacy.cmd_ctrl = VAR_24;
 VAR_31->chip.legacy.dev_ready = VAR_25;
 VAR_31->chip.legacy.select_chip = VAR_28;
 VAR_31->chip.legacy.write_buf = VAR_29;
 VAR_31->chip.legacy.read_buf = VAR_26;
 VAR_31->chip.legacy.read_byte = VAR_27;
 VAR_31->chip.legacy.chip_delay = 30;

 VAR_31->chip.ecc.mode = VAR_23;
 VAR_31->chip.ecc.algo = VAR_22;

 FUNC_15(VAR_30, VAR_31);
 FUNC_10(&VAR_31->chip, VAR_31);


 VAR_34 = FUNC_13(VAR_30->dev.of_node, "lantiq,cs", &VAR_35);
 if (!VAR_34 && VAR_35 == 1)
  VAR_36 = VAR_16 | VAR_18;


 FUNC_6(FUNC_1(VAR_31->nandaddr)
      | FUNC_0(3) | VAR_0, VAR_8);

 FUNC_6(VAR_5 | VAR_1 | VAR_7
      | VAR_6 | VAR_3 | VAR_4
      | VAR_2, VAR_13);

 FUNC_6(VAR_17 | VAR_14 | VAR_15
      | VAR_20 | VAR_21 | VAR_19
      | VAR_36, VAR_9);


 VAR_34 = FUNC_9(&VAR_31->chip, 1);
 if (VAR_34)
  return VAR_34;

 VAR_34 = FUNC_7(VAR_32, ((void*)0), 0);
 if (VAR_34)
  FUNC_8(&VAR_31->chip);

 return VAR_34;
}
