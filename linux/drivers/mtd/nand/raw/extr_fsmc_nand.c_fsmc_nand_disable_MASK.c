
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsmc_nand_data {scalar_t__ regs_va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fsmc_nand_data *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->regs_va + VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_2->regs_va + VAR_1);
}
