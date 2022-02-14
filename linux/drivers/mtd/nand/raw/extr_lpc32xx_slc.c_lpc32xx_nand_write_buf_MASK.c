
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int io_base; } ;


 int FUNC_0 (int ) ;
 struct lpc32xx_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0, const uint8_t *VAR_1,
       int VAR_2)
{
 struct lpc32xx_nand_host *VAR_3 = FUNC_1(VAR_0);


 while (VAR_2-- > 0)
  FUNC_2((uint32_t)*VAR_1++, FUNC_0(VAR_3->io_base));
}
