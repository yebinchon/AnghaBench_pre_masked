
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int membase; int dev; int mapbase; } ;
struct TYPE_2__ {int membase; } ;
struct efm32_uart_port {int clk; TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct efm32_uart_port*,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 struct efm32_uart_port* FUNC_8 (struct uart_port*) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_1)
{
 struct efm32_uart_port *VAR_2 = FUNC_8(VAR_1);
 int VAR_3;

 VAR_1->membase = FUNC_6(VAR_1->mapbase, 60);
 if (!VAR_2->port.membase) {
  VAR_3 = -VAR_0;
  FUNC_5(VAR_2, "failed to remap\n");
  goto err_ioremap;
 }

 VAR_2->clk = FUNC_2(VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_2->clk)) {
  VAR_3 = FUNC_1(VAR_2->clk);
  FUNC_5(VAR_2, "failed to get clock\n");
  goto err_clk_get;
 }

 VAR_3 = FUNC_3(VAR_2->clk);
 if (VAR_3) {
  FUNC_4(VAR_2->clk);
err_clk_get:

  FUNC_7(VAR_1->membase);
err_ioremap:
  return VAR_3;
 }
 return 0;
}
