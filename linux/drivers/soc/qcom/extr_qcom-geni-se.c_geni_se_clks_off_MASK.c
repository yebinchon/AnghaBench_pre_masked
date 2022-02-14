
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_wrapper {int ahb_clks; } ;
struct geni_se {int clk; struct geni_wrapper* wrapper; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct geni_se *VAR_0)
{
 struct geni_wrapper *VAR_1 = VAR_0->wrapper;

 FUNC_2(VAR_0->clk);
 FUNC_1(FUNC_0(VAR_1->ahb_clks),
      VAR_1->ahb_clks);
}
