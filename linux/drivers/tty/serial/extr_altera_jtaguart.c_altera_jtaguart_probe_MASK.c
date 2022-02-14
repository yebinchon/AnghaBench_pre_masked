
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; int * dev; int flags; int * ops; int iotype; int type; int membase; int mapbase; int irq; } ;
struct resource {int start; } ;
struct platform_device {int id; int dev; } ;
struct altera_jtaguart_platform_uart {int irq; int mapbase; } ;
struct TYPE_2__ {struct uart_port port; } ;


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
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 struct altera_jtaguart_platform_uart* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_13)
{
 struct altera_jtaguart_platform_uart *VAR_14 =
   FUNC_0(&VAR_13->dev);
 struct uart_port *VAR_15;
 struct resource *VAR_16, *VAR_17;
 int VAR_18 = VAR_13->id;


 if (VAR_18 == -1)
  VAR_18 = 0;

 if (VAR_18 >= VAR_0)
  return -VAR_2;

 VAR_15 = &VAR_12[VAR_18].port;

 VAR_17 = FUNC_2(VAR_13, VAR_6, 0);
 if (VAR_17)
  VAR_15->mapbase = VAR_17->start;
 else if (VAR_14)
  VAR_15->mapbase = VAR_14->mapbase;
 else
  return -VAR_3;

 VAR_16 = FUNC_2(VAR_13, VAR_5, 0);
 if (VAR_16)
  VAR_15->irq = VAR_16->start;
 else if (VAR_14)
  VAR_15->irq = VAR_14->irq;
 else
  return -VAR_3;

 VAR_15->membase = FUNC_1(VAR_15->mapbase, VAR_1);
 if (!VAR_15->membase)
  return -VAR_4;

 VAR_15->line = VAR_18;
 VAR_15->type = VAR_7;
 VAR_15->iotype = VAR_8;
 VAR_15->ops = &VAR_11;
 VAR_15->flags = VAR_9;
 VAR_15->dev = &VAR_13->dev;

 FUNC_3(&VAR_10, VAR_15);

 return 0;
}
