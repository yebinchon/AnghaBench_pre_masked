
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_wrapper {int ahb_clks; } ;
struct geni_se {int clk; struct geni_wrapper* wrapper; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct geni_se *VAR_0)
{
 int VAR_1;
 struct geni_wrapper *VAR_2 = VAR_0->wrapper;

 VAR_1 = FUNC_2(FUNC_0(VAR_2->ahb_clks),
      VAR_2->ahb_clks);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_3(VAR_0->clk);
 if (VAR_1)
  FUNC_1(FUNC_0(VAR_2->ahb_clks),
       VAR_2->ahb_clks);
 return VAR_1;
}
