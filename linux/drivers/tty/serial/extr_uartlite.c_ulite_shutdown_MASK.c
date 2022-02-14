
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uartlite_data {int clk; } ;
struct uart_port {int irq; struct uartlite_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct uart_port*) ;
 int FUNC_2 (int ,struct uart_port*) ;
 int FUNC_3 (int ,int ,struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1)
{
 struct uartlite_data *VAR_2 = VAR_1->private_data;

 FUNC_3(0, VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(VAR_2->clk);
}
