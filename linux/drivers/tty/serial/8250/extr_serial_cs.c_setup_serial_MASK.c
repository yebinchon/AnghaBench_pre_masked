
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uart ;
struct TYPE_3__ {unsigned int iobase; int irq; int flags; int uartclk; int * dev; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_info {int* line; size_t ndev; TYPE_2__* quirk; } ;
struct pcmcia_device {int dev; } ;
struct TYPE_4__ {int (* setup ) (struct pcmcia_device*,struct uart_8250_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct uart_8250_port*,int ,int) ;
 int FUNC_1 (char*,unsigned long,int) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct pcmcia_device*,struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_6, struct serial_info *VAR_7,
   unsigned int VAR_8, int VAR_9)
{
 struct uart_8250_port VAR_10;
 int VAR_11;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.port.iobase = VAR_8;
 VAR_10.port.irq = VAR_9;
 VAR_10.port.flags = VAR_1 | VAR_4 | VAR_3;
 VAR_10.port.uartclk = 1843200;
 VAR_10.port.dev = &VAR_6->dev;
 if (VAR_5)
  VAR_10.port.flags |= VAR_2;

 if (VAR_7->quirk && VAR_7->quirk->setup)
  VAR_7->quirk->setup(VAR_6, &VAR_10);

 VAR_11 = FUNC_2(&VAR_10);
 if (VAR_11 < 0) {
  FUNC_1("serial_cs: serial8250_register_8250_port() at 0x%04lx, irq %d failed\n",
       (unsigned long)VAR_8, VAR_9);
  return -VAR_0;
 }

 VAR_7->line[VAR_7->ndev] = VAR_11;
 VAR_7->ndev++;

 return 0;
}
