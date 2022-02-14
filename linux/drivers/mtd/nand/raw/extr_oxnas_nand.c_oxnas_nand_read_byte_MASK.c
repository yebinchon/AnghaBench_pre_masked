
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct oxnas_nand_ctrl {int io_base; } ;
struct nand_chip {int dummy; } ;


 struct oxnas_nand_ctrl* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint8_t FUNC_2(struct nand_chip *VAR_0)
{
 struct oxnas_nand_ctrl *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->io_base);
}
