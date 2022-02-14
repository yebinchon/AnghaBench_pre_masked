
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tango_nfc {struct tango_chip** chips; scalar_t__ pbus_base; int hw; } ;
struct TYPE_3__ {int dev_ready; int cmd_ctrl; int select_chip; int read_buf; int write_buf; int read_byte; } ;
struct nand_ecc_ctrl {int strength; scalar_t__ size; int steps; } ;
struct nand_chip {int options; int * controller; TYPE_1__ legacy; struct nand_ecc_ctrl ecc; } ;
struct tango_chip {int bb_cfg; void* pkt_n_cfg; void* pkt_0_cfg; int xfer_cfg; scalar_t__ base; struct nand_chip nand_chip; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {int writesize; TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int,int,int ,scalar_t__) ;
 struct tango_nfc* FUNC_3 (struct device*) ;
 struct tango_chip* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct mtd_info*,int *,int ) ;
 int FUNC_6 (struct mtd_info*,int *) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int) ;
 int FUNC_9 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,int ,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_13(struct device *VAR_17, struct device_node *VAR_18)
{
 u32 VAR_19;
 int VAR_20, VAR_21;
 struct mtd_info *VAR_22;
 struct nand_chip *VAR_23;
 struct tango_chip *VAR_24;
 struct nand_ecc_ctrl *VAR_25;
 struct tango_nfc *VAR_26 = FUNC_3(VAR_17);

 VAR_24 = FUNC_4(VAR_17, sizeof(*VAR_24), VAR_4);
 if (!VAR_24)
  return -VAR_2;

 VAR_21 = FUNC_11(VAR_18, "reg");
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_21 != 1)
  return -VAR_3;

 VAR_20 = FUNC_12(VAR_18, "reg", 0, &VAR_19);
 if (VAR_20)
  return VAR_20;

 if (VAR_19 >= VAR_5)
  return -VAR_1;

 VAR_23 = &VAR_24->nand_chip;
 VAR_25 = &VAR_23->ecc;
 VAR_22 = FUNC_10(VAR_23);

 VAR_23->legacy.read_byte = VAR_14;
 VAR_23->legacy.write_buf = VAR_16;
 VAR_23->legacy.read_buf = VAR_13;
 VAR_23->legacy.select_chip = VAR_15;
 VAR_23->legacy.cmd_ctrl = VAR_10;
 VAR_23->legacy.dev_ready = VAR_11;
 VAR_23->options = VAR_8 |
   VAR_7 |
   VAR_9;
 VAR_23->controller = &VAR_26->hw;
 VAR_24->base = VAR_26->pbus_base + (VAR_19 * 256);

 FUNC_9(VAR_23, VAR_18);
 FUNC_6(VAR_22, &VAR_12);
 VAR_22->dev.parent = VAR_17;

 VAR_20 = FUNC_8(VAR_23, 1);
 if (VAR_20)
  return VAR_20;

 VAR_24->xfer_cfg = FUNC_2(VAR_19, 1, VAR_25->steps, VAR_6);
 VAR_24->pkt_0_cfg = FUNC_1(VAR_25->size + VAR_6, VAR_25->strength);
 VAR_24->pkt_n_cfg = FUNC_1(VAR_25->size, VAR_25->strength);
 VAR_24->bb_cfg = FUNC_0(VAR_22->writesize, VAR_0);

 VAR_20 = FUNC_5(VAR_22, ((void*)0), 0);
 if (VAR_20) {
  FUNC_7(VAR_23);
  return VAR_20;
 }

 VAR_26->chips[VAR_19] = VAR_24;

 return 0;
}
