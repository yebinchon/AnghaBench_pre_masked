
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_nand_controller {int last_read_error; scalar_t__ regs; int dma_complete; int dev; int command_complete; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct tegra_nand_controller *VAR_11 = VAR_10;
 u32 VAR_12, VAR_13;

 VAR_12 = FUNC_3(VAR_11->regs + VAR_4);
 VAR_13 = FUNC_3(VAR_11->regs + VAR_0);
 FUNC_1(VAR_11->dev, "isr %08x\n", VAR_12);

 if (!VAR_12 && !(VAR_13 & VAR_1))
  return VAR_3;






 if (VAR_12 & VAR_6)
  VAR_11->last_read_error = 1;

 if (VAR_12 & VAR_5)
  FUNC_0(&VAR_11->command_complete);

 if (VAR_12 & VAR_8)
  FUNC_2(VAR_11->dev, "FIFO underrun\n");

 if (VAR_12 & VAR_7)
  FUNC_2(VAR_11->dev, "FIFO overrun\n");


 if (VAR_13 & VAR_1) {
  FUNC_4(VAR_13, VAR_11->regs + VAR_0);
  FUNC_0(&VAR_11->dma_complete);
 }


 FUNC_4(VAR_12, VAR_11->regs + VAR_4);

 return VAR_2;
}
