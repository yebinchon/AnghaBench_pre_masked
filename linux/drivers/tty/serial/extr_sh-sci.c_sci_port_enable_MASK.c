
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; int dev; } ;
struct sci_port {int * clk_rates; TYPE_1__ port; int * clks; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sci_port *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_2->port.dev)
  return;

 FUNC_2(VAR_2->port.dev);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_1(VAR_2->clks[VAR_3]);
  VAR_2->clk_rates[VAR_3] = FUNC_0(VAR_2->clks[VAR_3]);
 }
 VAR_2->port.uartclk = VAR_2->clk_rates[VAR_0];
}
