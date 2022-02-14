
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {struct pxa8250_data* private_data; } ;
struct pxa8250_data {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct pxa8250_data *VAR_3 = VAR_0->private_data;

 if (!VAR_1)
  FUNC_1(VAR_3->clk);
 else
  FUNC_0(VAR_3->clk);
}
