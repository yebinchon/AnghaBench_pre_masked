
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int type; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct serial_private*,struct pciserial_board const*,struct uart_8250_port*,int) ;

__attribute__((used)) static int
FUNC_1(struct serial_private *VAR_3,
    const struct pciserial_board *VAR_4,
    struct uart_8250_port *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_5->port.type = VAR_0;
 VAR_5->port.flags = (VAR_5->port.flags | VAR_1 | VAR_2);
 return VAR_7;
}
