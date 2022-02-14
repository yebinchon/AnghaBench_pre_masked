
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_powergate {unsigned int id; int num_clks; TYPE_1__* pmc; struct reset_control* reset; struct clk** clks; } ;
struct reset_control {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (struct tegra_powergate*) ;
 struct tegra_powergate* FUNC_2 (int,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (struct tegra_powergate*,int) ;

int FUNC_5(unsigned int VAR_4, struct clk *VAR_5,
          struct reset_control *VAR_6)
{
 struct tegra_powergate *VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_3, VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->id = VAR_4;
 VAR_7->clks = &VAR_5;
 VAR_7->num_clks = 1;
 VAR_7->reset = VAR_6;
 VAR_7->pmc = VAR_3;

 VAR_8 = FUNC_4(VAR_7, 0);
 if (VAR_8)
  FUNC_0(VAR_3->dev, "failed to turn on partition %d: %d\n", VAR_4,
   VAR_8);

 FUNC_1(VAR_7);

 return VAR_8;
}
