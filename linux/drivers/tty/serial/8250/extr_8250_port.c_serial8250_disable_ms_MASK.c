
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {int bugs; int ier; int gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3)
{
 struct uart_8250_port *VAR_4 = FUNC_2(VAR_3);


 if (VAR_4->bugs & VAR_0)
  return;

 FUNC_0(VAR_4->gpios);

 VAR_4->ier &= ~VAR_2;
 FUNC_1(VAR_3, VAR_1, VAR_4->ier);
}
