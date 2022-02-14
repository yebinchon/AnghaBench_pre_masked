
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int line; scalar_t__ dev; scalar_t__ mapbase; int iotype; int uartclk; int irq; int membase; scalar_t__ iobase; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct uart_port {int flags; scalar_t__ dev; scalar_t__ mapbase; int iotype; int uartclk; int irq; int membase; scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct uart_txx9_port* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct uart_port*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_7)
{
 int VAR_8;
 struct uart_txx9_port *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_0(&VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = &VAR_5[VAR_8];
  if (FUNC_3(&VAR_9->port, VAR_7)) {
   FUNC_4(&VAR_6, &VAR_9->port);
   break;
  }
 }
 if (VAR_8 == VAR_1) {

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_9 = &VAR_5[VAR_8];
   if (!(VAR_9->port.iobase || VAR_9->port.mapbase))
    break;
  }
 }
 if (VAR_8 < VAR_1) {
  VAR_9->port.iobase = VAR_7->iobase;
  VAR_9->port.membase = VAR_7->membase;
  VAR_9->port.irq = VAR_7->irq;
  VAR_9->port.uartclk = VAR_7->uartclk;
  VAR_9->port.iotype = VAR_7->iotype;
  VAR_9->port.flags = VAR_7->flags
   | VAR_2 | VAR_3;
  VAR_9->port.mapbase = VAR_7->mapbase;
  if (VAR_7->dev)
   VAR_9->port.dev = VAR_7->dev;
  VAR_10 = FUNC_2(&VAR_6, &VAR_9->port);
  if (VAR_10 == 0)
   VAR_10 = VAR_9->port.line;
 }
 FUNC_1(&VAR_4);
 return VAR_10;
}
