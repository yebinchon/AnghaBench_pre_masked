
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_clk_provider {unsigned int num_clocks; int * clks; scalar_t__ of_node; } ;
struct fimc_md {struct cam_clk_provider clk_provider; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fimc_md *VAR_0)
{
 struct cam_clk_provider *VAR_1 = &VAR_0->clk_provider;
 unsigned int VAR_2;

 if (VAR_1->of_node)
  FUNC_1(VAR_1->of_node);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_clocks; VAR_2++)
  FUNC_0(VAR_1->clks[VAR_2]);
}
