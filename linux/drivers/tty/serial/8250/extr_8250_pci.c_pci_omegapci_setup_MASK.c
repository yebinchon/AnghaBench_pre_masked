
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {int dummy; } ;


 int FUNC_0 (struct serial_private*,struct uart_8250_port*,int,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct serial_private *VAR_0,
        const struct pciserial_board *VAR_1,
        struct uart_8250_port *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0, VAR_2, 2, VAR_3 * 8, 0);
}
