
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_nand_controller {struct nand_chip* chip; int controller; } ;
struct nand_chip {int options; int * controller; } ;
struct tegra_nand_chip {int ecc; struct nand_chip chip; int wp_gpio; int * cs; } ;
struct TYPE_2__ {struct device* parent; } ;
struct mtd_info {char* name; int owner; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct tegra_nand_chip* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct mtd_info*,int *,int ) ;
 int FUNC_6 (struct mtd_info*,int ,int *) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int) ;
 int FUNC_9 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,int *) ;
 int FUNC_13 (struct device_node*,char*,int) ;
 int FUNC_14 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_7,
     struct tegra_nand_controller *VAR_8)
{
 struct device_node *VAR_9 = VAR_7->of_node;
 struct device_node *VAR_10;
 int VAR_11, VAR_12 = FUNC_11(VAR_9);
 struct tegra_nand_chip *VAR_13;
 struct mtd_info *VAR_14;
 struct nand_chip *VAR_15;
 int VAR_16;
 u32 VAR_17;

 if (VAR_12 != 1) {
  FUNC_2(VAR_7, "Currently only one NAND chip supported\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_12(VAR_9, ((void*)0));

 VAR_11 = FUNC_13(VAR_10, "reg", sizeof(u32));
 if (VAR_11 != 1) {
  FUNC_2(VAR_7, "Missing/invalid reg property\n");
  return -VAR_0;
 }


 VAR_16 = FUNC_14(VAR_10, "reg", &VAR_17);
 if (VAR_16) {
  FUNC_2(VAR_7, "could not retrieve reg property: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_13 = FUNC_4(VAR_7, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->cs[0] = VAR_17;

 VAR_13->wp_gpio = FUNC_3(VAR_7, "wp", VAR_3);

 if (FUNC_0(VAR_13->wp_gpio)) {
  VAR_16 = FUNC_1(VAR_13->wp_gpio);
  FUNC_2(VAR_7, "Failed to request WP GPIO: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_15 = &VAR_13->chip;
 VAR_15->controller = &VAR_8->controller;

 VAR_14 = FUNC_10(VAR_15);

 VAR_14->dev.parent = VAR_7;
 VAR_14->owner = VAR_6;

 FUNC_9(VAR_15, VAR_10);

 if (!VAR_14->name)
  VAR_14->name = "tegra_nand";

 VAR_15->options = VAR_4 | VAR_5;

 VAR_16 = FUNC_8(VAR_15, 1);
 if (VAR_16)
  return VAR_16;

 FUNC_6(VAR_14, 0, &VAR_13->ecc);

 VAR_16 = FUNC_5(VAR_14, ((void*)0), 0);
 if (VAR_16) {
  FUNC_2(VAR_7, "Failed to register mtd device: %d\n", VAR_16);
  FUNC_7(VAR_15);
  return VAR_16;
 }

 VAR_8->chip = VAR_15;

 return 0;
}
