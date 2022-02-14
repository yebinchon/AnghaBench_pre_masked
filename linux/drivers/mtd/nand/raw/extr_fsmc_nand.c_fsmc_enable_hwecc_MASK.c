
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct fsmc_nand_data {scalar_t__ regs_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fsmc_nand_data* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3, int VAR_4)
{
 struct fsmc_nand_data *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(FUNC_1(VAR_5->regs_va + VAR_2) & ~VAR_1,
         VAR_5->regs_va + VAR_2);
 FUNC_2(FUNC_1(VAR_5->regs_va + VAR_2) & ~VAR_0,
         VAR_5->regs_va + VAR_2);
 FUNC_2(FUNC_1(VAR_5->regs_va + VAR_2) | VAR_0,
         VAR_5->regs_va + VAR_2);
}
