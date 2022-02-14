
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int irq; int uartclk; } ;
struct TYPE_2__ {int location; } ;
struct efm32_uart_port {int clk; int txirq; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct efm32_uart_port*,int,int ) ;
 int FUNC_5 (struct efm32_uart_port*,char*) ;
 int FUNC_6 (int ,struct efm32_uart_port*) ;
 int FUNC_7 (int ,int ,int ,int ,struct efm32_uart_port*) ;
 struct efm32_uart_port* FUNC_8 (struct uart_port*) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_11)
{
 struct efm32_uart_port *VAR_12 = FUNC_8(VAR_11);
 int VAR_13;

 VAR_13 = FUNC_2(VAR_12->clk);
 if (VAR_13) {
  FUNC_5(VAR_12, "failed to enable clk\n");
  goto err_clk_enable;
 }
 VAR_11->uartclk = FUNC_3(VAR_12->clk);


 FUNC_4(VAR_12,
   FUNC_0(VAR_12->pdata.location) |
   VAR_7 | VAR_8,
   VAR_6);

 VAR_13 = FUNC_7(VAR_11->irq, VAR_9, 0,
   VAR_0, VAR_12);
 if (VAR_13) {
  FUNC_5(VAR_12, "failed to register rxirq\n");
  goto err_request_irq_rx;
 }


 FUNC_4(VAR_12, 0, VAR_3);

 VAR_13 = FUNC_7(VAR_12->txirq, VAR_10, 0,
   VAR_0, VAR_12);
 if (VAR_13) {
  FUNC_5(VAR_12, "failed to register txirq\n");
  FUNC_6(VAR_11->irq, VAR_12);
err_request_irq_rx:

  FUNC_1(VAR_12->clk);
 } else {
  FUNC_4(VAR_12,
    VAR_4 | VAR_5, VAR_3);
  FUNC_4(VAR_12, VAR_2, VAR_1);
 }

err_clk_enable:
 return VAR_13;
}
