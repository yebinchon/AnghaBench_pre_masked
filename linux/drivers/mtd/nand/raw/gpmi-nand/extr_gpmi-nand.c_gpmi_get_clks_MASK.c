
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resources {struct clk** clock; } ;
struct gpmi_nand_data {int dev; TYPE_1__* devdata; struct resources resources; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int clks_count; int * clks; } ;


 scalar_t__ FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*,int) ;
 int FUNC_4 (int ,char*) ;
 struct clk* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gpmi_nand_data *VAR_0)
{
 struct resources *VAR_1 = &VAR_0->resources;
 struct clk *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->devdata->clks_count; VAR_4++) {
  VAR_2 = FUNC_5(VAR_0->dev, VAR_0->devdata->clks[VAR_4]);
  if (FUNC_1(VAR_2)) {
   VAR_3 = FUNC_2(VAR_2);
   goto err_clock;
  }

  VAR_1->clock[VAR_4] = VAR_2;
 }

 if (FUNC_0(VAR_0))






  FUNC_3(VAR_1->clock[0], 22000000);

 return 0;

err_clock:
 FUNC_4(VAR_0->dev, "failed in finding the clocks.\n");
 return VAR_3;
}
