
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_wzrd {int axi_clk; int nb; int clk_in1; scalar_t__ speed_grade; int * clks_internal; int * clkout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct clk_wzrd* FUNC_4 (struct platform_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 int VAR_3;
 struct clk_wzrd *VAR_4 = FUNC_4(VAR_2);

 FUNC_3(VAR_2->dev.of_node);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_4->clkout[VAR_3]);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_2(VAR_4->clks_internal[VAR_3]);

 if (VAR_4->speed_grade) {
  FUNC_1(VAR_4->axi_clk, &VAR_4->nb);
  FUNC_1(VAR_4->clk_in1, &VAR_4->nb);
 }

 FUNC_0(VAR_4->axi_clk);

 return 0;
}
