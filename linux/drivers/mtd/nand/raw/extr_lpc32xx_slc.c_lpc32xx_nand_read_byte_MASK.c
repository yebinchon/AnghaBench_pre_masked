
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int io_base; } ;


 int FUNC_0 (int ) ;
 struct lpc32xx_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct nand_chip *VAR_0)
{
 struct lpc32xx_nand_host *VAR_1 = FUNC_1(VAR_0);

 return (uint8_t)FUNC_2(FUNC_0(VAR_1->io_base));
}
