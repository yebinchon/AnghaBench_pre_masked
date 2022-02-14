
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct uart_8250_port {int acr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*,int ,int ) ;
 struct uart_8250_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 struct uart_8250_port *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);




 if (VAR_3->type == VAR_0) {
  VAR_4->acr |= VAR_2;
  FUNC_3(VAR_4, VAR_1, VAR_4->acr);
 }
 FUNC_2(VAR_4);
}
