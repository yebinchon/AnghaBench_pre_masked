
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_emc {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tegra_emc *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;

 FUNC_3(0, VAR_4->regs + VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  VAR_6 = FUNC_1(VAR_4->regs + VAR_1);
  if ((VAR_6 & VAR_2) == 0)
   return;
  FUNC_2(1);
 }

 FUNC_0(VAR_4->dev, "auto cal disable timed out\n");
}
