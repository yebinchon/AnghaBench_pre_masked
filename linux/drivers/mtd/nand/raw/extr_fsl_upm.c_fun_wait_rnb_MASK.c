
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct fsl_upm_nand {scalar_t__* rnb_gpio; size_t mchip_number; int dev; int chip; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 struct mtd_info* FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct fsl_upm_nand *VAR_0)
{
 if (VAR_0->rnb_gpio[VAR_0->mchip_number] >= 0) {
  struct mtd_info *VAR_1 = FUNC_3(&VAR_0->chip);
  int VAR_2 = 1000000;

  while (--VAR_2 && !FUNC_2(&VAR_0->chip))
   FUNC_0();
  if (!VAR_2)
   FUNC_1(VAR_0->dev, "tired waiting for RNB\n");
 } else {
  FUNC_4(100);
 }
}
