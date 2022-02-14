
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtd_info {struct fsl_upm_nand* name; } ;
struct fsl_upm_nand {int mchip_count; scalar_t__* rnb_gpio; int chip; } ;


 struct fsl_upm_nand* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fsl_upm_nand*) ;
 int FUNC_3 (int *) ;
 struct mtd_info* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fsl_upm_nand *VAR_1 = FUNC_0(&VAR_0->dev);
 struct mtd_info *VAR_2 = FUNC_4(&VAR_1->chip);
 int VAR_3;

 FUNC_3(&VAR_1->chip);
 FUNC_2(VAR_2->name);

 for (VAR_3 = 0; VAR_3 < VAR_1->mchip_count; VAR_3++) {
  if (VAR_1->rnb_gpio[VAR_3] < 0)
   break;
  FUNC_1(VAR_1->rnb_gpio[VAR_3]);
 }

 FUNC_2(VAR_1);

 return 0;
}
