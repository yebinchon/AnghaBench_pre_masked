
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_powergate {unsigned int num_clks; int * clks; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_powergate *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_clks; VAR_1++)
  FUNC_0(VAR_0->clks[VAR_1]);
}
