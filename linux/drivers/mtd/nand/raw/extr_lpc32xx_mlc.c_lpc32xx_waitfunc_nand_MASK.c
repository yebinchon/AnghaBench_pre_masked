
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dev; } ;
struct lpc32xx_nand_host {int io_base; int comp_nand; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 struct lpc32xx_nand_host* FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_4(VAR_2);
 struct lpc32xx_nand_host *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_5(FUNC_0(VAR_4->io_base)) & VAR_0)
  goto exit;

 FUNC_6(&VAR_4->comp_nand);

 while (!(FUNC_5(FUNC_0(VAR_4->io_base)) & VAR_0)) {

  FUNC_2(&VAR_3->dev, "Warning: NAND not ready.\n");
  FUNC_1();
 }

exit:
 return VAR_1;
}
