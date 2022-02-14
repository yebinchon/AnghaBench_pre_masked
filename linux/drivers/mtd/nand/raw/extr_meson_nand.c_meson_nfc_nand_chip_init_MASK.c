
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nand_chip {int options; TYPE_1__* controller; } ;
struct TYPE_4__ {struct device* parent; } ;
struct mtd_info {TYPE_2__ dev; int owner; } ;
struct meson_nfc_nand_chip {int nsels; int node; struct nand_chip nand; } ;
struct TYPE_3__ {int * ops; } ;
struct meson_nfc {int chips; TYPE_1__ controller; int assigned_cs; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct meson_nfc_nand_chip* FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct mtd_info*,int *,int ) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int) ;
 int FUNC_6 (struct nand_chip*,struct meson_nfc*) ;
 int FUNC_7 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct device_node*,char*,int) ;
 int FUNC_10 (struct device_node*,char*,int,int*) ;
 int VAR_7 ;
 int FUNC_11 (struct meson_nfc_nand_chip*,int ,int) ;
 scalar_t__ FUNC_12 (int,int *) ;

__attribute__((used)) static int
FUNC_13(struct device *VAR_8,
    struct meson_nfc *VAR_9, struct device_node *VAR_10)
{
 struct meson_nfc_nand_chip *VAR_11;
 struct nand_chip *VAR_12;
 struct mtd_info *VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 VAR_17 = FUNC_9(VAR_10, "reg", sizeof(u32));
 if (!VAR_17 || VAR_17 > VAR_3) {
  FUNC_0(VAR_8, "invalid register property size\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_1(VAR_8, FUNC_11(VAR_11, VAR_7, VAR_17),
      VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->nsels = VAR_17;

 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  VAR_14 = FUNC_10(VAR_10, "reg", VAR_15, &VAR_16);
  if (VAR_14) {
   FUNC_0(VAR_8, "could not retrieve register property: %d\n",
    VAR_14);
   return VAR_14;
  }

  if (FUNC_12(VAR_16, &VAR_9->assigned_cs)) {
   FUNC_0(VAR_8, "CS %d already assigned\n", VAR_16);
   return -VAR_0;
  }
 }

 VAR_12 = &VAR_11->nand;
 VAR_12->controller = &VAR_9->controller;
 VAR_12->controller->ops = &VAR_6;
 FUNC_7(VAR_12, VAR_10);
 FUNC_6(VAR_12, VAR_9);

 VAR_12->options |= VAR_4;
 VAR_13 = FUNC_8(VAR_12);
 VAR_13->owner = VAR_5;
 VAR_13->dev.parent = VAR_8;

 VAR_14 = FUNC_5(VAR_12, VAR_17);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_13, ((void*)0), 0);
 if (VAR_14) {
  FUNC_0(VAR_8, "failed to register MTD device: %d\n", VAR_14);
  FUNC_4(VAR_12);
  return VAR_14;
 }

 FUNC_2(&VAR_11->node, &VAR_9->chips);

 return 0;
}
