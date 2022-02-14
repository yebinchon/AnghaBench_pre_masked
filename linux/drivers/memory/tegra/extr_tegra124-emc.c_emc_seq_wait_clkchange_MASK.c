
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_emc {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct tegra_emc *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  VAR_5 = FUNC_1(VAR_3->regs + VAR_0);
  if (VAR_5 & VAR_1)
   return;
  FUNC_2(1);
 }

 FUNC_0(VAR_3->dev, "clock change timed out\n");
}
