
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {void* read_oob; void* read_oob_raw; int read_page; int read_page_raw; int read_subpage; void* write_oob; void* write_oob_raw; int write_page; int write_page_raw; int write_subpage; int mode; } ;
struct TYPE_4__ {int cmd_ctrl; int read_buf; int read_byte; int write_buf; int write_byte; int select_chip; int dev_ready; } ;
struct nand_chip {int options; TYPE_2__ ecc; TYPE_1__ legacy; int * controller; } ;
struct mtk_nfc_nand_chip {int nsels; int* sels; int node; struct nand_chip nand; } ;
struct mtk_nfc {int chips; int controller; int assigned_cs; } ;
struct TYPE_6__ {struct device* parent; } ;
struct mtd_info {int name; TYPE_3__ dev; int owner; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*,...) ;
 struct mtk_nfc_nand_chip* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mtd_info*,int *,int ) ;
 int FUNC_4 (struct mtd_info*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct mtk_nfc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int) ;
 int FUNC_8 (struct nand_chip*,struct mtk_nfc*) ;
 int FUNC_9 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (struct device_node*,char*,int,int*) ;
 scalar_t__ FUNC_13 (int,int *) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_26, struct mtk_nfc *VAR_27,
      struct device_node *VAR_28)
{
 struct mtk_nfc_nand_chip *VAR_29;
 struct nand_chip *VAR_30;
 struct mtd_info *VAR_31;
 int VAR_32;
 u32 VAR_33;
 int VAR_34;
 int VAR_35;

 if (!FUNC_11(VAR_28, "reg", &VAR_32))
  return -VAR_1;

 VAR_32 /= sizeof(u32);
 if (!VAR_32 || VAR_32 > VAR_5) {
  FUNC_0(VAR_26, "invalid reg property size %d\n", VAR_32);
  return -VAR_0;
 }

 VAR_29 = FUNC_1(VAR_26, sizeof(*VAR_29) + VAR_32 * sizeof(u8),
       VAR_3);
 if (!VAR_29)
  return -VAR_2;

 VAR_29->nsels = VAR_32;
 for (VAR_35 = 0; VAR_35 < VAR_32; VAR_35++) {
  VAR_34 = FUNC_12(VAR_28, "reg", VAR_35, &VAR_33);
  if (VAR_34) {
   FUNC_0(VAR_26, "reg property failure : %d\n", VAR_34);
   return VAR_34;
  }

  if (VAR_33 >= VAR_5) {
   FUNC_0(VAR_26, "invalid CS: %u\n", VAR_33);
   return -VAR_0;
  }

  if (FUNC_13(VAR_33, &VAR_27->assigned_cs)) {
   FUNC_0(VAR_26, "CS %u already assigned\n", VAR_33);
   return -VAR_0;
  }

  VAR_29->sels[VAR_35] = VAR_33;
 }

 VAR_30 = &VAR_29->nand;
 VAR_30->controller = &VAR_27->controller;

 FUNC_9(VAR_30, VAR_28);
 FUNC_8(VAR_30, VAR_27);

 VAR_30->options |= VAR_8 | VAR_7;
 VAR_30->legacy.dev_ready = VAR_11;
 VAR_30->legacy.select_chip = VAR_19;
 VAR_30->legacy.write_byte = VAR_21;
 VAR_30->legacy.write_buf = VAR_20;
 VAR_30->legacy.read_byte = VAR_14;
 VAR_30->legacy.read_buf = VAR_13;
 VAR_30->legacy.cmd_ctrl = VAR_10;


 VAR_30->ecc.mode = VAR_6;

 VAR_30->ecc.write_subpage = VAR_25;
 VAR_30->ecc.write_page_raw = VAR_24;
 VAR_30->ecc.write_page = VAR_23;
 VAR_30->ecc.write_oob_raw = VAR_22;
 VAR_30->ecc.write_oob = VAR_22;

 VAR_30->ecc.read_subpage = VAR_18;
 VAR_30->ecc.read_page_raw = VAR_17;
 VAR_30->ecc.read_page = VAR_16;
 VAR_30->ecc.read_oob_raw = VAR_15;
 VAR_30->ecc.read_oob = VAR_15;

 VAR_31 = FUNC_10(VAR_30);
 VAR_31->owner = VAR_9;
 VAR_31->dev.parent = VAR_26;
 VAR_31->name = VAR_4;
 FUNC_4(VAR_31, &VAR_12);

 FUNC_5(VAR_27);

 VAR_34 = FUNC_7(VAR_30, VAR_32);
 if (VAR_34)
  return VAR_34;

 VAR_34 = FUNC_3(VAR_31, ((void*)0), 0);
 if (VAR_34) {
  FUNC_0(VAR_26, "mtd parse partition error\n");
  FUNC_6(VAR_30);
  return VAR_34;
 }

 FUNC_2(&VAR_29->node, &VAR_27->chips);

 return 0;
}
