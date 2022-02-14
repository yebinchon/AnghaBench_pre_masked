
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct lpc32xx_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2)
{
 struct lpc32xx_nand_host *VAR_3 = FUNC_1(VAR_2);

 if ((FUNC_2(FUNC_0(VAR_3->io_base)) &
      (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1))
  return 1;

 return 0;
}
