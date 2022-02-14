
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isc_device {struct isc_clk* isc_clks; TYPE_1__* dev; } ;
struct isc_clk {int clk; } ;
struct TYPE_2__ {int of_node; } ;


 unsigned int FUNC_0 (struct isc_clk*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct isc_device *VAR_0)
{
 unsigned int VAR_1;

 FUNC_3(VAR_0->dev->of_node);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->isc_clks); VAR_1++) {
  struct isc_clk *VAR_2 = &VAR_0->isc_clks[VAR_1];

  if (!FUNC_1(VAR_2->clk))
   FUNC_2(VAR_2->clk);
 }
}
