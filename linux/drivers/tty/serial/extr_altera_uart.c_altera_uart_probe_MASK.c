
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ mapbase; scalar_t__ irq; int line; TYPE_1__* dev; int flags; int * ops; int iotype; int type; scalar_t__ regshift; int membase; int uartclk; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct altera_uart_platform_uart {scalar_t__ mapbase; scalar_t__ irq; scalar_t__ bus_shift; int uartclk; } ;
struct TYPE_4__ {struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 struct altera_uart_platform_uart* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*,int *) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (struct platform_device*,struct uart_port*) ;
 int FUNC_5 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_12)
{
 struct altera_uart_platform_uart *VAR_13 = FUNC_0(&VAR_12->dev);
 struct uart_port *VAR_14;
 struct resource *VAR_15;
 struct resource *VAR_16;
 int VAR_17 = VAR_12->id;
 int VAR_18;


 if (VAR_17 == -1) {
  for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
   if (VAR_11[VAR_17].port.mapbase == 0)
    break;
 }

 if (VAR_17 < 0 || VAR_17 >= VAR_1)
  return -VAR_2;

 VAR_14 = &VAR_11[VAR_17].port;

 VAR_15 = FUNC_3(VAR_12, VAR_5, 0);
 if (VAR_15)
  VAR_14->mapbase = VAR_15->start;
 else if (VAR_13)
  VAR_14->mapbase = VAR_13->mapbase;
 else
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_12, VAR_4, 0);
 if (VAR_16)
  VAR_14->irq = VAR_16->start;
 else if (VAR_13)
  VAR_14->irq = VAR_13->irq;


 if (VAR_13)
  VAR_14->uartclk = VAR_13->uartclk;
 else {
  VAR_18 = FUNC_2(VAR_12->dev.of_node, "clock-frequency",
        &VAR_14->uartclk);
  if (VAR_18)
   return VAR_18;
 }

 VAR_14->membase = FUNC_1(VAR_14->mapbase, VAR_0);
 if (!VAR_14->membase)
  return -VAR_3;

 if (VAR_13)
  VAR_14->regshift = VAR_13->bus_shift;
 else
  VAR_14->regshift = 0;

 VAR_14->line = VAR_17;
 VAR_14->type = VAR_6;
 VAR_14->iotype = VAR_7;
 VAR_14->ops = &VAR_10;
 VAR_14->flags = VAR_8;
 VAR_14->dev = &VAR_12->dev;

 FUNC_4(VAR_12, VAR_14);

 FUNC_5(&VAR_9, VAR_14);

 return 0;
}
