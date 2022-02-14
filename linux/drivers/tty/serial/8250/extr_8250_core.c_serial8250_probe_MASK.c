
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uart ;
struct TYPE_2__ {int irqflags; scalar_t__ flags; int * dev; int pm; int get_mctrl; int set_ldisc; int set_termios; int handle_break; int handle_irq; int serial_out; int serial_in; int type; int private_data; int hub6; scalar_t__ mapbase; int iotype; int regshift; int uartclk; int irq; int membase; int iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct platform_device {int dev; } ;
struct plat_serial8250_port {scalar_t__ flags; int irqflags; int irq; scalar_t__ mapbase; int iobase; int pm; int get_mctrl; int set_ldisc; int set_termios; int handle_break; int handle_irq; int serial_out; int serial_in; int type; int private_data; int hub6; int iotype; int regshift; int uartclk; int membase; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,unsigned long long,int ,int) ;
 struct plat_serial8250_port* FUNC_1 (int *) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;
 int FUNC_3 (struct uart_8250_port*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct plat_serial8250_port *VAR_3 = FUNC_1(&VAR_2->dev);
 struct uart_8250_port VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 if (VAR_1)
  VAR_7 = VAR_0;

 for (VAR_6 = 0; VAR_3 && VAR_3->flags != 0; VAR_3++, VAR_6++) {
  VAR_4.port.iobase = VAR_3->iobase;
  VAR_4.port.membase = VAR_3->membase;
  VAR_4.port.irq = VAR_3->irq;
  VAR_4.port.irqflags = VAR_3->irqflags;
  VAR_4.port.uartclk = VAR_3->uartclk;
  VAR_4.port.regshift = VAR_3->regshift;
  VAR_4.port.iotype = VAR_3->iotype;
  VAR_4.port.flags = VAR_3->flags;
  VAR_4.port.mapbase = VAR_3->mapbase;
  VAR_4.port.hub6 = VAR_3->hub6;
  VAR_4.port.private_data = VAR_3->private_data;
  VAR_4.port.type = VAR_3->type;
  VAR_4.port.serial_in = VAR_3->serial_in;
  VAR_4.port.serial_out = VAR_3->serial_out;
  VAR_4.port.handle_irq = VAR_3->handle_irq;
  VAR_4.port.handle_break = VAR_3->handle_break;
  VAR_4.port.set_termios = VAR_3->set_termios;
  VAR_4.port.set_ldisc = VAR_3->set_ldisc;
  VAR_4.port.get_mctrl = VAR_3->get_mctrl;
  VAR_4.port.pm = VAR_3->pm;
  VAR_4.port.dev = &VAR_2->dev;
  VAR_4.port.irqflags |= VAR_7;
  VAR_5 = FUNC_3(&VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_2->dev, "unable to register port at index %d "
    "(IO%lx MEM%llx IRQ%d): %d\n", VAR_6,
    VAR_3->iobase, (unsigned long long)VAR_3->mapbase,
    VAR_3->irq, VAR_5);
  }
 }
 return 0;
}
