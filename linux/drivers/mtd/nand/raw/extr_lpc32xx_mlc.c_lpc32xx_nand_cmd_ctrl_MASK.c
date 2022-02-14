
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int io_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct lpc32xx_nand_host* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, int VAR_3,
      unsigned int VAR_4)
{
 struct lpc32xx_nand_host *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 != VAR_1) {
  if (VAR_4 & VAR_0)
   FUNC_3(VAR_3, FUNC_1(VAR_5->io_base));
  else
   FUNC_3(VAR_3, FUNC_0(VAR_5->io_base));
 }
}
