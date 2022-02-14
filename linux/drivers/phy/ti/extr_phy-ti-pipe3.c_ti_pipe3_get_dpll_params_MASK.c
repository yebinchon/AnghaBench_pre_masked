
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {int dev; int sys_clk; struct pipe3_dpll_map* dpll_map; } ;
struct pipe3_dpll_params {int dummy; } ;
struct pipe3_dpll_map {long rate; struct pipe3_dpll_params params; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static struct pipe3_dpll_params *FUNC_2(struct ti_pipe3 *VAR_0)
{
 unsigned long VAR_1;
 struct pipe3_dpll_map *VAR_2 = VAR_0->dpll_map;

 VAR_1 = FUNC_0(VAR_0->sys_clk);

 for (; VAR_2->rate; VAR_2++) {
  if (VAR_1 == VAR_2->rate)
   return &VAR_2->params;
 }

 FUNC_1(VAR_0->dev, "No DPLL configuration for %lu Hz SYS CLK\n", VAR_1);

 return ((void*)0);
}
