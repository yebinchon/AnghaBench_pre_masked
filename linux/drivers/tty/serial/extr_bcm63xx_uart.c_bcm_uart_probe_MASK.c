
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int fifosize; int uartclk; size_t line; struct clk* membase; TYPE_1__* dev; int flags; int * ops; int irq; int iotype; int mapbase; } ;
struct resource {int start; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {size_t id; TYPE_1__ dev; } ;
struct clk {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct clk* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 struct clk* FUNC_5 (TYPE_1__*,struct resource*) ;
 int FUNC_6 (struct uart_port*,int ,int) ;
 void* FUNC_7 (scalar_t__,char*) ;
 struct clk* FUNC_8 (scalar_t__,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct uart_port*) ;
 struct uart_port* VAR_10 ;
 int FUNC_11 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct resource *VAR_12, *VAR_13;
 struct uart_port *VAR_14;
 struct clk *VAR_15;
 int VAR_16;

 if (VAR_11->dev.of_node) {
  VAR_11->id = FUNC_7(VAR_11->dev.of_node, "serial");

  if (VAR_11->id < 0)
   VAR_11->id = FUNC_7(VAR_11->dev.of_node, "uart");
 }

 if (VAR_11->id < 0 || VAR_11->id >= VAR_0)
  return -VAR_2;

 VAR_14 = &VAR_10[VAR_11->id];
 if (VAR_14->membase)
  return -VAR_1;
 FUNC_6(VAR_14, 0, sizeof(*VAR_14));

 VAR_12 = FUNC_9(VAR_11, VAR_5, 0);
 if (!VAR_12)
  return -VAR_3;

 VAR_14->mapbase = VAR_12->start;
 VAR_14->membase = FUNC_5(&VAR_11->dev, VAR_12);
 if (FUNC_0(VAR_14->membase))
  return FUNC_1(VAR_14->membase);

 VAR_13 = FUNC_9(VAR_11, VAR_4, 0);
 if (!VAR_13)
  return -VAR_3;

 VAR_15 = FUNC_2(&VAR_11->dev, "refclk");
 if (FUNC_0(VAR_15) && VAR_11->dev.of_node)
  VAR_15 = FUNC_8(VAR_11->dev.of_node, 0);

 if (FUNC_0(VAR_15))
  return -VAR_3;

 VAR_14->iotype = VAR_7;
 VAR_14->irq = VAR_13->start;
 VAR_14->ops = &VAR_9;
 VAR_14->flags = VAR_6;
 VAR_14->dev = &VAR_11->dev;
 VAR_14->fifosize = 16;
 VAR_14->uartclk = FUNC_3(VAR_15) / 2;
 VAR_14->line = VAR_11->id;
 FUNC_4(VAR_15);

 VAR_16 = FUNC_11(&VAR_8, VAR_14);
 if (VAR_16) {
  VAR_10[VAR_11->id].membase = ((void*)0);
  return VAR_16;
 }
 FUNC_10(VAR_11, VAR_14);
 return 0;
}
