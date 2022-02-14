
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int * ops; } ;
struct TYPE_6__ {TYPE_2__ dummy_controller; void* get_features; void* set_features; int chip_delay; int read_buf; int write_buf; int read_byte; int select_chip; int cmdfunc; } ;
struct nand_chip {TYPE_3__ legacy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {char* name; TYPE_1__ dev; } ;
struct hinfc_host {void* mmio; void* iobase; struct nand_chip chip; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 struct hinfc_host* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int ,int,char*,struct hinfc_host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct hinfc_host*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (struct mtd_info*,int *,int ) ;
 int FUNC_8 (struct nand_chip*) ;
 void* VAR_13 ;
 int FUNC_9 (struct nand_chip*,int) ;
 int FUNC_10 (struct nand_chip*,struct hinfc_host*) ;
 int FUNC_11 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct hinfc_host*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_14)
{
 int VAR_15 = 0, VAR_16, VAR_17 = VAR_4;
 struct device *VAR_18 = &VAR_14->dev;
 struct hinfc_host *VAR_19;
 struct nand_chip *VAR_20;
 struct mtd_info *VAR_21;
 struct resource *VAR_22;
 struct device_node *VAR_23 = VAR_18->of_node;

 VAR_19 = FUNC_4(VAR_18, sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_0;
 VAR_19->dev = VAR_18;

 FUNC_15(VAR_14, VAR_19);
 VAR_20 = &VAR_19->chip;
 VAR_21 = FUNC_12(VAR_20);

 VAR_16 = FUNC_13(VAR_14, 0);
 if (VAR_16 < 0) {
  FUNC_2(VAR_18, "no IRQ resource defined\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_14(VAR_14, VAR_5, 0);
 VAR_19->iobase = FUNC_3(VAR_18, VAR_22);
 if (FUNC_0(VAR_19->iobase))
  return FUNC_1(VAR_19->iobase);

 VAR_22 = FUNC_14(VAR_14, VAR_5, 1);
 VAR_19->mmio = FUNC_3(VAR_18, VAR_22);
 if (FUNC_0(VAR_19->mmio)) {
  FUNC_2(VAR_18, "devm_ioremap_resource[1] fail\n");
  return FUNC_1(VAR_19->mmio);
 }

 VAR_21->name = "hisi_nand";
 VAR_21->dev.parent = &VAR_14->dev;

 FUNC_10(VAR_20, VAR_19);
 FUNC_11(VAR_20, VAR_23);
 VAR_20->legacy.cmdfunc = VAR_7;
 VAR_20->legacy.select_chip = VAR_11;
 VAR_20->legacy.read_byte = VAR_10;
 VAR_20->legacy.write_buf = VAR_12;
 VAR_20->legacy.read_buf = VAR_9;
 VAR_20->legacy.chip_delay = VAR_3;
 VAR_20->legacy.set_features = VAR_13;
 VAR_20->legacy.get_features = VAR_13;

 FUNC_6(VAR_19);

 VAR_15 = FUNC_5(VAR_18, VAR_16, VAR_6, 0x0, "nandc", VAR_19);
 if (VAR_15) {
  FUNC_2(VAR_18, "failed to request IRQ\n");
  return VAR_15;
 }

 VAR_20->legacy.dummy_controller.ops = &VAR_8;
 VAR_15 = FUNC_9(VAR_20, VAR_17);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_7(VAR_21, ((void*)0), 0);
 if (VAR_15) {
  FUNC_2(VAR_18, "Err MTD partition=%d\n", VAR_15);
  FUNC_8(VAR_20);
  return VAR_15;
 }

 return 0;
}
