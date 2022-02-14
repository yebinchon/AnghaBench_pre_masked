
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct atmel_nand_controller {int chips; int dev; TYPE_2__* caps; } ;
struct atmel_nand {int node; int numcs; scalar_t__ cdgpio; struct nand_chip base; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* nand_init ) (struct atmel_nand_controller*,struct atmel_nand*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct atmel_nand_controller*,struct atmel_nand*) ;

__attribute__((used)) static int
FUNC_9(struct atmel_nand_controller *VAR_0,
          struct atmel_nand *VAR_1)
{
 struct nand_chip *VAR_2 = &VAR_1->base;
 struct mtd_info *VAR_3 = FUNC_7(VAR_2);
 int VAR_4;


 if (VAR_1->cdgpio && FUNC_2(VAR_1->cdgpio)) {
  FUNC_1(VAR_0->dev, "No SmartMedia card inserted.\n");
  return 0;
 }

 VAR_0->caps->ops->nand_init(VAR_0, VAR_1);

 VAR_4 = FUNC_6(VAR_2, VAR_1->numcs);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "NAND scan failed: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3, ((void*)0), 0);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "Failed to register mtd device: %d\n", VAR_4);
  FUNC_5(VAR_2);
  return VAR_4;
 }

 FUNC_3(&VAR_1->node, &VAR_0->chips);

 return 0;
}
