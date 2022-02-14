
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int bugs; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct serial_private*,struct pciserial_board const*,struct uart_8250_port*,int) ;

__attribute__((used)) static int FUNC_1(struct serial_private *VAR_1,
    const struct pciserial_board *VAR_2,
    struct uart_8250_port *VAR_3, int VAR_4)
{
 VAR_3->bugs |= VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
