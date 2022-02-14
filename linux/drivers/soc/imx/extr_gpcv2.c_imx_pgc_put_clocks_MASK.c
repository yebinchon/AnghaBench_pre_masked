
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_pgc_domain {int num_clks; int * clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct imx_pgc_domain *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->num_clks - 1; VAR_1 >= 0; VAR_1--)
  FUNC_0(VAR_0->clk[VAR_1]);
}
