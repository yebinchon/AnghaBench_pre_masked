
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pcmcia_device {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct pcmcia_device *VAR_0, struct uart_8250_port *VAR_1)
{
 VAR_1->port.uartclk = 14745600;
}
