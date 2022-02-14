
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ uartclk; int irq; scalar_t__ mapbase; int iobase; int * dev; int flags; int iotype; int membase; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int,int ,unsigned long long,int ,int) ;
 struct uart_port* FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct uart_port *VAR_1 = FUNC_1(&VAR_0->dev);
 struct uart_port VAR_2;
 int VAR_3, VAR_4;

 FUNC_2(&VAR_2, 0, sizeof(struct uart_port));
 for (VAR_4 = 0; VAR_1 && VAR_1->uartclk != 0; VAR_1++, VAR_4++) {
  VAR_2.iobase = VAR_1->iobase;
  VAR_2.membase = VAR_1->membase;
  VAR_2.irq = VAR_1->irq;
  VAR_2.uartclk = VAR_1->uartclk;
  VAR_2.iotype = VAR_1->iotype;
  VAR_2.flags = VAR_1->flags;
  VAR_2.mapbase = VAR_1->mapbase;
  VAR_2.dev = &VAR_0->dev;
  VAR_3 = FUNC_3(&VAR_2);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_0->dev, "unable to register port at index %d "
    "(IO%lx MEM%llx IRQ%d): %d\n", VAR_4,
    VAR_1->iobase, (unsigned long long)VAR_1->mapbase,
    VAR_1->irq, VAR_3);
  }
 }
 return 0;
}
