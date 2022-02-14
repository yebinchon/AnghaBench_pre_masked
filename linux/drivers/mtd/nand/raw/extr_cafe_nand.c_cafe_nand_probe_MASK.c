
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int class; int irq; int dev; } ;
struct TYPE_9__ {int * parent; } ;
struct mtd_info {char* name; TYPE_2__ dev; } ;
struct TYPE_8__ {int * ops; } ;
struct TYPE_10__ {TYPE_1__ dummy_controller; int block_bad; scalar_t__ chip_delay; void* get_features; void* set_features; int select_chip; int write_buf; int read_buf; int read_byte; int dev_ready; int cmdfunc; } ;
struct TYPE_11__ {TYPE_3__ legacy; int options; int bbt_options; } ;
struct cafe_priv {int mmio; TYPE_4__ nand; scalar_t__ usedma; struct pci_dev* pdev; int rs; } ;


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
 int FUNC_0 (int *,char*,int,int,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct cafe_priv*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct cafe_priv*,int,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int,struct mtd_info*) ;
 int FUNC_5 (int,int *,int ,int,int) ;
 int FUNC_6 (struct cafe_priv*) ;
 struct cafe_priv* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mtd_info*,int ,int *,int *,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 void* VAR_25 ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_4__*,struct cafe_priv*) ;
 struct mtd_info* FUNC_12 (TYPE_4__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct mtd_info*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int,int *,int ,char*,struct mtd_info*) ;
 scalar_t__ VAR_28 ;
 int* VAR_29 ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_30,
         const struct pci_device_id *VAR_31)
{
 struct mtd_info *VAR_32;
 struct cafe_priv *VAR_33;
 uint32_t VAR_34;
 int VAR_35 = 0;



 if ((VAR_30->class >> 8) != VAR_14)
  return -VAR_0;

 VAR_35 = FUNC_13(VAR_30);
 if (VAR_35)
  return VAR_35;

 FUNC_17(VAR_30);

 VAR_33 = FUNC_7(sizeof(*VAR_33), VAR_2);
 if (!VAR_33)
  return -VAR_1;

 VAR_32 = FUNC_12(&VAR_33->nand);
 VAR_32->dev.parent = &VAR_30->dev;
 FUNC_11(&VAR_33->nand, VAR_33);

 VAR_33->pdev = VAR_30;
 VAR_33->mmio = FUNC_14(VAR_30, 0, 0);
 if (!VAR_33->mmio) {
  FUNC_3(&VAR_30->dev, "failed to iomap\n");
  VAR_35 = -VAR_1;
  goto out_free_mtd;
 }

 VAR_33->rs = FUNC_5(12, &VAR_16, 0, 1, 8);
 if (!VAR_33->rs) {
  VAR_35 = -VAR_1;
  goto out_ior;
 }

 VAR_33->nand.legacy.cmdfunc = VAR_18;
 VAR_33->nand.legacy.dev_ready = VAR_15;
 VAR_33->nand.legacy.read_byte = VAR_22;
 VAR_33->nand.legacy.read_buf = VAR_21;
 VAR_33->nand.legacy.write_buf = VAR_24;
 VAR_33->nand.legacy.select_chip = VAR_23;
 VAR_33->nand.legacy.set_features = VAR_25;
 VAR_33->nand.legacy.get_features = VAR_25;

 VAR_33->nand.legacy.chip_delay = 0;


 VAR_33->nand.bbt_options = VAR_6;

 if (VAR_28) {
  VAR_33->nand.options |= VAR_10;
  VAR_33->nand.legacy.block_bad = VAR_17;
 }

 if (VAR_26 && VAR_26 != 3) {
  FUNC_3(&VAR_33->pdev->dev, "%d timing register values ignored; precisely three are required\n", VAR_26);
 }

 if (VAR_26 == 3) {
  FUNC_0(&VAR_33->pdev->dev, "Using provided timings (%08x %08x %08x)\n",
        VAR_29[0], VAR_29[1], VAR_29[2]);
 } else {
  VAR_29[0] = FUNC_1(VAR_33, VAR_11);
  VAR_29[1] = FUNC_1(VAR_33, VAR_12);
  VAR_29[2] = FUNC_1(VAR_33, VAR_13);

  if (VAR_29[0] | VAR_29[1] | VAR_29[2]) {
   FUNC_0(&VAR_33->pdev->dev, "Timing registers already set (%08x %08x %08x)\n",
         VAR_29[0], VAR_29[1], VAR_29[2]);
  } else {
   FUNC_3(&VAR_33->pdev->dev, "Timing registers unset; using most conservative defaults\n");
   VAR_29[0] = VAR_29[1] = VAR_29[2] = 0xffffffff;
  }
 }


 FUNC_2(VAR_33, 1, VAR_9);
 FUNC_2(VAR_33, 0, VAR_9);

 FUNC_2(VAR_33, VAR_29[0], VAR_11);
 FUNC_2(VAR_33, VAR_29[1], VAR_12);
 FUNC_2(VAR_33, VAR_29[2], VAR_13);

 FUNC_2(VAR_33, 0xffffffff, VAR_8);
 VAR_35 = FUNC_18(VAR_30->irq, &VAR_20, VAR_5,
     "CAFE NAND", VAR_32);
 if (VAR_35) {
  FUNC_3(&VAR_30->dev, "Could not register IRQ %d\n", VAR_30->irq);
  goto out_ior;
 }


 VAR_34 = FUNC_1(VAR_33, VAR_3);
 VAR_34 &= 0xffffeff0;
 VAR_34 |= 0x00007000;
 FUNC_2(VAR_33, VAR_34 | 0x05, VAR_3);
 FUNC_2(VAR_33, VAR_34 | 0x0a, VAR_3);
 FUNC_2(VAR_33, 0, VAR_7);

 FUNC_2(VAR_33, 0x7006, VAR_3);
 FUNC_2(VAR_33, 0x700a, VAR_3);


 FUNC_2(VAR_33, 0x80000007, VAR_4);
 FUNC_0(&VAR_33->pdev->dev, "Control %x, IRQ mask %x\n",
  FUNC_1(VAR_33, VAR_3),
  FUNC_1(VAR_33, VAR_4));


 VAR_33->usedma = 0;


 VAR_33->nand.legacy.dummy_controller.ops = &VAR_19;
 VAR_35 = FUNC_10(&VAR_33->nand, 2);
 if (VAR_35)
  goto out_irq;

 FUNC_16(VAR_30, VAR_32);

 VAR_32->name = "cafe_nand";
 VAR_35 = FUNC_8(VAR_32, VAR_27, ((void*)0), ((void*)0), 0);
 if (VAR_35)
  goto out_cleanup_nand;

 goto out;

 out_cleanup_nand:
 FUNC_9(&VAR_33->nand);
 out_irq:

 FUNC_2(VAR_33, ~1 & FUNC_1(VAR_33, VAR_4), VAR_4);
 FUNC_4(VAR_30->irq, VAR_32);
 out_ior:
 FUNC_15(VAR_30, VAR_33->mmio);
 out_free_mtd:
 FUNC_6(VAR_33);
 out:
 return VAR_35;
}
