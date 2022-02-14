
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_nand_info {scalar_t__ dma; } ;
struct TYPE_2__ {int * priv; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 struct omap_nand_info* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_5(VAR_0);
 struct nand_chip *VAR_2 = FUNC_1(VAR_1);
 struct omap_nand_info *VAR_3 = FUNC_2(VAR_1);
 if (VAR_2->ecc.priv) {
  FUNC_3(VAR_2->ecc.priv);
  VAR_2->ecc.priv = ((void*)0);
 }
 if (VAR_3->dma)
  FUNC_0(VAR_3->dma);
 FUNC_4(VAR_2);
 return 0;
}
