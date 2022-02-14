
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_powergate {unsigned int num_clks; int * clks; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
typedef int clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device_node*,unsigned int) ;
 unsigned int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct tegra_powergate *VAR_3,
           struct device_node *VAR_4)
{
 struct clk *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7 == 0)
  return -VAR_0;

 VAR_3->clks = FUNC_3(VAR_7, sizeof(VAR_5), VAR_2);
 if (!VAR_3->clks)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_3->clks[VAR_6] = FUNC_5(VAR_4, VAR_6);
  if (FUNC_0(VAR_3->clks[VAR_6])) {
   VAR_8 = FUNC_1(VAR_3->clks[VAR_6]);
   goto err;
  }
 }

 VAR_3->num_clks = VAR_7;

 return 0;

err:
 while (VAR_6--)
  FUNC_2(VAR_3->clks[VAR_6]);

 FUNC_4(VAR_3->clks);

 return VAR_8;
}
