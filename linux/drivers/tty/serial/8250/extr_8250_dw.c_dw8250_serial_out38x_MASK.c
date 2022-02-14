
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; int private_data; } ;
struct dw8250_data {int uart_16550_compatible; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,int) ;
 int FUNC_1 (struct uart_port*) ;
 struct dw8250_data* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1, int VAR_2, int VAR_3)
{
 struct dw8250_data *VAR_4 = FUNC_2(VAR_1->private_data);


 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1);

 FUNC_3(VAR_3, VAR_1->membase + (VAR_2 << VAR_1->regshift));

 if (VAR_2 == VAR_0 && !VAR_4->uart_16550_compatible)
  FUNC_0(VAR_1, VAR_3);
}
