
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct fsmc_nand_data {scalar_t__ regs_va; } ;


 scalar_t__ VAR_0 ;
 struct fsmc_nand_data* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1, const u8 *VAR_2,
    u8 *VAR_3)
{
 struct fsmc_nand_data *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->regs_va + VAR_0);
 VAR_3[0] = VAR_5;
 VAR_3[1] = VAR_5 >> 8;
 VAR_3[2] = VAR_5 >> 16;

 return 0;
}
