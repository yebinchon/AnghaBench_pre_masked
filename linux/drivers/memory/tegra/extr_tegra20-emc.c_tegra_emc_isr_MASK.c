
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_emc {scalar_t__ regs; int dev; int clk_handshake_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct tegra_emc *VAR_7 = VAR_6;
 u32 VAR_8 = VAR_2 | VAR_0;
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_7->regs + VAR_1) & VAR_8;
 if (!VAR_9)
  return VAR_4;


 if (VAR_9 & VAR_0)
  FUNC_0(&VAR_7->clk_handshake_complete);


 if (VAR_9 & VAR_2)
  FUNC_1(VAR_7->dev,
        "refresh request overflow timeout\n");


 FUNC_3(VAR_9, VAR_7->regs + VAR_1);

 return VAR_3;
}
