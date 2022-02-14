
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * ops; } ;
struct sunxi_nfc {int chips; TYPE_2__ controller; int assigned_cs; } ;
struct TYPE_7__ {int mode; } ;
struct nand_chip {TYPE_3__ ecc; TYPE_2__* controller; } ;
struct sunxi_nand_chip {int nsels; int node; struct nand_chip nand; TYPE_1__* sels; } ;
struct TYPE_8__ {struct device* parent; } ;
struct mtd_info {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int cs; int rb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct sunxi_nand_chip* FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mtd_info*,int *,int ) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int) ;
 int FUNC_6 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct device_node*,char*,int*) ;
 int FUNC_9 (struct device_node*,char*,int,int*) ;
 int VAR_5 ;
 int FUNC_10 (struct sunxi_nand_chip*,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int,int *) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_7, struct sunxi_nfc *VAR_8,
    struct device_node *VAR_9)
{
 struct sunxi_nand_chip *VAR_10;
 struct mtd_info *VAR_11;
 struct nand_chip *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 u32 VAR_16;

 if (!FUNC_8(VAR_9, "reg", &VAR_13))
  return -VAR_0;

 VAR_13 /= sizeof(u32);
 if (!VAR_13) {
  FUNC_0(VAR_7, "invalid reg property size\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_7, FUNC_10(VAR_10, VAR_5, VAR_13),
      VAR_2);
 if (!VAR_10) {
  FUNC_0(VAR_7, "could not allocate chip\n");
  return -VAR_1;
 }

 VAR_10->nsels = VAR_13;

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_14 = FUNC_9(VAR_9, "reg", VAR_15, &VAR_16);
  if (VAR_14) {
   FUNC_0(VAR_7, "could not retrieve reg property: %d\n",
    VAR_14);
   return VAR_14;
  }

  if (VAR_16 > VAR_4) {
   FUNC_0(VAR_7,
    "invalid reg value: %u (max CS = 7)\n",
    VAR_16);
   return -VAR_0;
  }

  if (FUNC_11(VAR_16, &VAR_8->assigned_cs)) {
   FUNC_0(VAR_7, "CS %d already assigned\n", VAR_16);
   return -VAR_0;
  }

  VAR_10->sels[VAR_15].cs = VAR_16;

  if (!FUNC_9(VAR_9, "allwinner,rb", VAR_15, &VAR_16) &&
      VAR_16 < 2)
   VAR_10->sels[VAR_15].rb = VAR_16;
  else
   VAR_10->sels[VAR_15].rb = -1;
 }

 VAR_12 = &VAR_10->nand;

 VAR_12->controller = &VAR_8->controller;
 VAR_12->controller->ops = &VAR_6;





 VAR_12->ecc.mode = VAR_3;
 FUNC_6(VAR_12, VAR_9);

 VAR_11 = FUNC_7(VAR_12);
 VAR_11->dev.parent = VAR_7;

 VAR_14 = FUNC_5(VAR_12, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_11, ((void*)0), 0);
 if (VAR_14) {
  FUNC_0(VAR_7, "failed to register mtd device: %d\n", VAR_14);
  FUNC_4(VAR_12);
  return VAR_14;
 }

 FUNC_2(&VAR_10->node, &VAR_8->chips);

 return 0;
}
