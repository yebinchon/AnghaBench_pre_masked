
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int block_markbad; int block_bad; void* get_features; void* set_features; int write_buf; int read_buf; int read_byte; int select_chip; int cmdfunc; } ;
struct nand_chip {int options; int * controller; TYPE_2__ legacy; } ;
struct qcom_nand_host {int status; int cs; struct nand_chip chip; } ;
struct qcom_nand_controller {struct device* dev; int bam_txn; TYPE_3__* props; int controller; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {TYPE_1__ dev; int owner; int name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,char*,int ) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 void* VAR_9 ;
 int FUNC_6 (struct nand_chip*,int) ;
 int FUNC_7 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct device_node*,char*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_10(struct qcom_nand_controller *VAR_17,
         struct qcom_nand_host *VAR_18,
         struct device_node *VAR_19)
{
 struct nand_chip *VAR_20 = &VAR_18->chip;
 struct mtd_info *VAR_21 = FUNC_8(VAR_20);
 struct device *VAR_22 = VAR_17->dev;
 int VAR_23;

 VAR_23 = FUNC_9(VAR_19, "reg", &VAR_18->cs);
 if (VAR_23) {
  FUNC_1(VAR_22, "can't get chip-select\n");
  return -VAR_1;
 }

 FUNC_7(VAR_20, VAR_19);
 VAR_21->name = FUNC_2(VAR_22, VAR_2, "qcom_nand.%d", VAR_18->cs);
 if (!VAR_21->name)
  return -VAR_0;

 VAR_21->owner = VAR_8;
 VAR_21->dev.parent = VAR_22;

 VAR_20->legacy.cmdfunc = VAR_12;
 VAR_20->legacy.select_chip = VAR_15;
 VAR_20->legacy.read_byte = VAR_14;
 VAR_20->legacy.read_buf = VAR_13;
 VAR_20->legacy.write_buf = VAR_16;
 VAR_20->legacy.set_features = VAR_9;
 VAR_20->legacy.get_features = VAR_9;
 VAR_20->legacy.block_bad = VAR_10;
 VAR_20->legacy.block_markbad = VAR_11;

 VAR_20->controller = &VAR_17->controller;
 VAR_20->options |= VAR_3 | VAR_7 |
    VAR_4;


 VAR_18->status = VAR_5 | VAR_6;

 VAR_23 = FUNC_6(VAR_20, 1);
 if (VAR_23)
  return VAR_23;

 if (VAR_17->props->is_bam) {
  FUNC_3(VAR_17);
  VAR_17->bam_txn = FUNC_0(VAR_17);
  if (!VAR_17->bam_txn) {
   FUNC_1(VAR_17->dev,
    "failed to allocate bam transaction\n");
   return -VAR_0;
  }
 }

 VAR_23 = FUNC_4(VAR_21, ((void*)0), 0);
 if (VAR_23)
  FUNC_5(VAR_20);

 return VAR_23;
}
