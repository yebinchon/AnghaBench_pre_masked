
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct fsl_upm_nand {size_t mchip_number; int dev; int * rnb_gpio; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct fsl_upm_nand* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0)
{
 struct fsl_upm_nand *VAR_1 = FUNC_3(FUNC_2(VAR_0));

 if (FUNC_1(VAR_1->rnb_gpio[VAR_1->mchip_number]))
  return 1;

 FUNC_0(VAR_1->dev, "busy\n");
 return 0;
}
