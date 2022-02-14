
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_nand_controller {int irq; int dma_complete; int command_complete; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tegra_nand_controller *VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_3->irq);


 FUNC_4(0, VAR_3->regs + VAR_1);
 FUNC_4(0, VAR_3->regs + VAR_0);


 VAR_4 = FUNC_2(VAR_3->regs + VAR_2);
 FUNC_4(VAR_4, VAR_3->regs + VAR_2);
 VAR_5 = FUNC_2(VAR_3->regs + VAR_1);
 FUNC_4(VAR_5, VAR_3->regs + VAR_1);

 FUNC_3(&VAR_3->command_complete);
 FUNC_3(&VAR_3->dma_complete);

 FUNC_1(VAR_3->irq);
}
