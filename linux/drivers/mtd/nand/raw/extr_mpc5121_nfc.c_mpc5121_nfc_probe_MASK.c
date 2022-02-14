
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {unsigned long start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int select_chip; void* get_features; void* set_features; int write_buf; int read_buf; int read_byte; int cmdfunc; int dev_ready; } ;
struct TYPE_5__ {int algo; int mode; } ;
struct nand_chip {TYPE_3__ legacy; TYPE_2__ ecc; int bbt_options; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {char* name; int oobsize; int erasesize; int writesize; TYPE_1__ dev; } ;
struct mpc5121_nfc_prv {scalar_t__ irq; int irq_waitq; struct clk* clk; int regs; struct device* dev; struct nand_chip chip; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_1 (struct clk*) ;
 int VAR_27 ;
 int FUNC_2 (struct mtd_info*) ;
 int VAR_28 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,struct mtd_info*) ;
 struct clk* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,unsigned long,unsigned long) ;
 struct mpc5121_nfc_prv* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,scalar_t__,int *,int ,int ,struct mtd_info*) ;
 int FUNC_11 (struct device*,unsigned long,unsigned long,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct device_node*,int ) ;
 int FUNC_14 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_15 (struct device*,struct mtd_info*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_16 (struct mtd_info*) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_17 (struct mtd_info*,int *,int ) ;
 void* VAR_36 ;
 int FUNC_18 (struct nand_chip*,int ) ;
 int FUNC_19 (struct nand_chip*,struct mpc5121_nfc_prv*) ;
 int FUNC_20 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_21 (struct nand_chip*) ;
 int FUNC_22 (struct mtd_info*,int ) ;
 int FUNC_23 (struct mtd_info*,int ,int) ;
 int FUNC_24 (struct mtd_info*,int ,int) ;
 int FUNC_25 (struct device_node*,int ,struct resource*) ;
 int * FUNC_26 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_27 (char*) ;
 unsigned long FUNC_28 (struct resource*) ;
 int FUNC_29 (int) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_37)
{
 struct device_node *VAR_38 = VAR_37->dev.of_node;
 struct clk *VAR_39;
 struct device *VAR_40 = &VAR_37->dev;
 struct mpc5121_nfc_prv *VAR_41;
 struct resource VAR_42;
 struct mtd_info *VAR_43;
 struct nand_chip *VAR_44;
 unsigned long VAR_45, VAR_46;
 const __be32 *VAR_47;
 int VAR_48 = 0;
 int VAR_49 = 0;
 int VAR_50, VAR_51;





 VAR_50 = (FUNC_14(VAR_27) >> 4) & 0xF;
 if ((VAR_50 != 2) && (VAR_50 != 3)) {
  FUNC_5(VAR_40, "SoC revision %u is not supported!\n", VAR_50);
  return -VAR_4;
 }

 VAR_41 = FUNC_9(VAR_40, sizeof(*VAR_41), VAR_5);
 if (!VAR_41)
  return -VAR_3;

 VAR_44 = &VAR_41->chip;
 VAR_43 = FUNC_21(VAR_44);

 VAR_43->dev.parent = VAR_40;
 FUNC_19(VAR_44, VAR_41);
 FUNC_20(VAR_44, VAR_38);
 VAR_41->dev = VAR_40;


 VAR_49 = FUNC_16(VAR_43);
 if (VAR_49) {
  FUNC_5(VAR_40, "Unable to read NFC config!\n");
  return VAR_49;
 }

 VAR_41->irq = FUNC_13(VAR_38, 0);
 if (VAR_41->irq == VAR_26) {
  FUNC_5(VAR_40, "Error mapping IRQ!\n");
  return -VAR_2;
 }

 VAR_49 = FUNC_25(VAR_38, 0, &VAR_42);
 if (VAR_49) {
  FUNC_5(VAR_40, "Error parsing memory region!\n");
  return VAR_49;
 }

 VAR_47 = FUNC_26(VAR_38, "chips", &VAR_51);
 if (!VAR_47 || VAR_51 != sizeof(*VAR_47)) {
  FUNC_5(VAR_40, "Invalid/missing 'chips' property!\n");
  return -VAR_2;
 }

 VAR_45 = VAR_42.start;
 VAR_46 = FUNC_28(&VAR_42);

 if (!FUNC_11(VAR_40, VAR_45, VAR_46, VAR_0)) {
  FUNC_5(VAR_40, "Error requesting memory region!\n");
  return -VAR_1;
 }

 VAR_41->regs = FUNC_8(VAR_40, VAR_45, VAR_46);
 if (!VAR_41->regs) {
  FUNC_5(VAR_40, "Error mapping memory region!\n");
  return -VAR_3;
 }

 VAR_43->name = "MPC5121 NAND";
 VAR_44->legacy.dev_ready = VAR_30;
 VAR_44->legacy.cmdfunc = VAR_29;
 VAR_44->legacy.read_byte = VAR_33;
 VAR_44->legacy.read_buf = VAR_32;
 VAR_44->legacy.write_buf = VAR_35;
 VAR_44->legacy.select_chip = VAR_34;
 VAR_44->legacy.set_features = VAR_36;
 VAR_44->legacy.get_features = VAR_36;
 VAR_44->bbt_options = VAR_6;
 VAR_44->ecc.mode = VAR_8;
 VAR_44->ecc.algo = VAR_7;


 if (FUNC_27("fsl,mpc5121ads")) {
  VAR_49 = FUNC_2(VAR_43);
  if (VAR_49) {
   FUNC_5(VAR_40, "Chipselect init error!\n");
   return VAR_49;
  }

  VAR_44->legacy.select_chip = VAR_28;
 }


 VAR_39 = FUNC_7(VAR_40, "ipg");
 if (FUNC_0(VAR_39)) {
  FUNC_5(VAR_40, "Unable to acquire NFC clock!\n");
  VAR_49 = FUNC_1(VAR_39);
  goto error;
 }
 VAR_49 = FUNC_4(VAR_39);
 if (VAR_49) {
  FUNC_5(VAR_40, "Unable to enable NFC clock!\n");
  goto error;
 }
 VAR_41->clk = VAR_39;


 FUNC_23(VAR_43, VAR_12, VAR_19);
 while (FUNC_22(VAR_43, VAR_12) & VAR_19) {
  if (VAR_48++ >= VAR_20) {
   FUNC_5(VAR_40, "Timeout while resetting NFC!\n");
   VAR_49 = -VAR_2;
   goto error;
  }

  FUNC_29(1);
 }


 FUNC_24(VAR_43, VAR_11, VAR_10);


 FUNC_24(VAR_43, VAR_23, 0x0000);
 FUNC_24(VAR_43, VAR_22, 0xFFFF);
 FUNC_24(VAR_43, VAR_25, VAR_24);






 FUNC_24(VAR_43, VAR_12, VAR_9 | VAR_14 |
       VAR_13);


 FUNC_24(VAR_43, VAR_21, VAR_43->oobsize >> 1);

 FUNC_12(&VAR_41->irq_waitq);
 VAR_49 = FUNC_10(VAR_40, VAR_41->irq, &VAR_31, 0, VAR_0,
         VAR_43);
 if (VAR_49) {
  FUNC_5(VAR_40, "Error requesting IRQ!\n");
  goto error;
 }


 VAR_49 = FUNC_18(VAR_44, FUNC_3(VAR_47));
 if (VAR_49) {
  FUNC_5(VAR_40, "NAND Flash not found !\n");
  goto error;
 }


 switch (VAR_43->erasesize / VAR_43->writesize) {
 case 32:
  FUNC_23(VAR_43, VAR_12, VAR_17);
  break;

 case 64:
  FUNC_23(VAR_43, VAR_12, VAR_18);
  break;

 case 128:
  FUNC_23(VAR_43, VAR_12, VAR_15);
  break;

 case 256:
  FUNC_23(VAR_43, VAR_12, VAR_16);
  break;

 default:
  FUNC_5(VAR_40, "Unsupported NAND flash!\n");
  VAR_49 = -VAR_4;
  goto error;
 }

 FUNC_6(VAR_40, VAR_43);


 VAR_49 = FUNC_17(VAR_43, ((void*)0), 0);
 if (VAR_49) {
  FUNC_5(VAR_40, "Error adding MTD device!\n");
  goto error;
 }

 return 0;
error:
 FUNC_15(VAR_40, VAR_43);
 return VAR_49;
}
