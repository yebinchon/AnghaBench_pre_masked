
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; int iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {int dev; } ;
struct pciserial_board {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct serial_private*,struct pciserial_board const*,struct uart_8250_port*,int) ;
 int FUNC_2 (struct uart_8250_port*) ;
 scalar_t__ FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct serial_private *VAR_0,
    const struct pciserial_board *VAR_1,
    struct uart_8250_port *VAR_2, int VAR_3)
{

 VAR_2->port.iobase = FUNC_4(VAR_0->dev, FUNC_0(VAR_1->flags));

 VAR_2->port.uartclk = FUNC_2(VAR_2);

 if (FUNC_3(VAR_2))
  FUNC_5("quatech: software control of RS422 features not currently supported.\n");
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
