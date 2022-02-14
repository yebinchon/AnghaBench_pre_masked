
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_9__ {int IO_ADDR_R; scalar_t__ chip_delay; int write_buf; int read_buf; int dev_ready; int cmd_ctrl; int IO_ADDR_W; } ;
struct TYPE_8__ {int algo; int mode; } ;
struct nand_chip {TYPE_3__ legacy; int bbt_options; TYPE_2__ ecc; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_10__ {TYPE_1__ dev; } ;


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
 int FUNC_0 (struct device*,char*,struct resource*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,struct resource*,int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nand_chip*) ;
 struct nand_chip* FUNC_5 (int,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *,int ) ;
 int FUNC_7 (struct nand_chip*,int) ;
 TYPE_4__* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 int FUNC_10 (struct device_node*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (struct pci_dev*) ;
 struct pci_dev* FUNC_12 (int ,int,int *) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct pci_dev *VAR_19;
 struct device_node *VAR_20 = VAR_18->of_node;
 struct resource VAR_21;
 struct nand_chip *VAR_22;
 int VAR_23 = 0;

 VAR_23 = FUNC_9(VAR_20, 0, &VAR_21);

 if (VAR_23)
  return -VAR_1;


 if (VAR_14)
  return -VAR_3;

 FUNC_0(VAR_18, "pasemi_nand at %pR\n", &VAR_21);


 VAR_22 = FUNC_5(sizeof(struct nand_chip), VAR_5);
 if (!VAR_22) {
  VAR_23 = -VAR_4;
  goto out;
 }

 VAR_14 = FUNC_8(VAR_22);


 VAR_14->dev.parent = VAR_18;

 VAR_22->legacy.IO_ADDR_R = FUNC_10(VAR_20, 0);
 VAR_22->legacy.IO_ADDR_W = VAR_22->legacy.IO_ADDR_R;

 if (!VAR_22->legacy.IO_ADDR_R) {
  VAR_23 = -VAR_2;
  goto out_mtd;
 }

 VAR_19 = FUNC_12(VAR_9, 0xa008, ((void*)0));
 if (!VAR_19) {
  VAR_23 = -VAR_3;
  goto out_ior;
 }

 VAR_11 = FUNC_13(VAR_19, 0);
 FUNC_11(VAR_19);

 if (!FUNC_15(VAR_11, 4, VAR_10)) {
  VAR_23 = -VAR_0;
  goto out_ior;
 }

 VAR_22->legacy.cmd_ctrl = VAR_13;
 VAR_22->legacy.dev_ready = VAR_12;
 VAR_22->legacy.read_buf = VAR_15;
 VAR_22->legacy.write_buf = VAR_16;
 VAR_22->legacy.chip_delay = 0;
 VAR_22->ecc.mode = VAR_8;
 VAR_22->ecc.algo = VAR_7;


 VAR_22->bbt_options = VAR_6;


 VAR_23 = FUNC_7(VAR_22, 1);
 if (VAR_23)
  goto out_lpc;

 if (FUNC_6(VAR_14, ((void*)0), 0)) {
  FUNC_1(VAR_18, "Unable to register MTD device\n");
  VAR_23 = -VAR_3;
  goto out_lpc;
 }

 FUNC_2(VAR_18, "PA Semi NAND flash at %pR, control at I/O %x\n", &VAR_21,
   VAR_11);

 return 0;

 out_lpc:
 FUNC_14(VAR_11, 4);
 out_ior:
 FUNC_3(VAR_22->legacy.IO_ADDR_R);
 out_mtd:
 FUNC_4(VAR_22);
 out:
 return VAR_23;
}
