
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_nand_info {int ecc_opt; TYPE_1__* pdev; int elm_of_node; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct omap_nand_info*,int ) ;

__attribute__((used)) static bool FUNC_3(struct omap_nand_info *VAR_2)
{
 bool VAR_3, VAR_4, VAR_5;

 switch (VAR_2->ecc_opt) {
 case 130:
 case 128:
  VAR_4 = 0;
  VAR_3 = 1;
  VAR_5 = 0;
  break;
 case 131:
 case 129:
 case 132:
  VAR_4 = 1;
  VAR_3 = 0;
  VAR_5 = 1;
  break;
 default:
  VAR_4 = 0;
  VAR_3 = 0;
  VAR_5 = 0;
  break;
 }

 if (VAR_3 && !FUNC_0(VAR_0)) {
  FUNC_1(&VAR_2->pdev->dev,
   "CONFIG_MTD_NAND_ECC_SW_BCH not enabled\n");
  return 0;
 }
 if (VAR_4 && !FUNC_0(VAR_1)) {
  FUNC_1(&VAR_2->pdev->dev,
   "CONFIG_MTD_NAND_OMAP_BCH not enabled\n");
  return 0;
 }
 if (VAR_5 && !FUNC_2(VAR_2, VAR_2->elm_of_node)) {
  FUNC_1(&VAR_2->pdev->dev, "ELM not available\n");
  return 0;
 }

 return 1;
}
