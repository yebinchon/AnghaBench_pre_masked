
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct uart_port {int fifosize; size_t line; scalar_t__ membase; int uartclk; struct mvebu_uart* private_data; int mapbase; scalar_t__ irqflags; int irq; int flags; int iotype; scalar_t__ regshift; int * ops; int type; TYPE_1__* dev; int lock; } ;
struct resource {int start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mvebu_uart_driver_data {int dummy; } ;
struct mvebu_uart {int* irq; scalar_t__ clk; struct uart_port* port; struct mvebu_uart_driver_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,struct resource*) ;
 struct mvebu_uart* FUNC_9 (TYPE_1__*,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct uart_port* VAR_17 ;
 int FUNC_10 (int ,char*) ;
 struct of_device_id* FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,char*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct platform_device*,struct mvebu_uart*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,struct uart_port*) ;
 int VAR_18 ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 struct resource *VAR_20 = FUNC_14(VAR_19, VAR_6, 0);
 const struct of_device_id *VAR_21 = FUNC_11(VAR_15,
          &VAR_19->dev);
 struct uart_port *VAR_22;
 struct mvebu_uart *VAR_23;
 int VAR_24, VAR_25, VAR_26;

 if (!VAR_20) {
  FUNC_6(&VAR_19->dev, "no registers defined\n");
  return -VAR_1;
 }

 if (!VAR_21)
  return -VAR_2;


 VAR_25 = FUNC_10(VAR_19->dev.of_node, "serial");
 if (!VAR_19->dev.of_node || VAR_25 < 0)
  VAR_19->id = VAR_18++;
 else
  VAR_19->id = VAR_25;

 if (VAR_19->id >= VAR_7) {
  FUNC_6(&VAR_19->dev, "cannot have more than %d UART ports\n",
   VAR_7);
  return -VAR_1;
 }

 VAR_22 = &VAR_17[VAR_19->id];

 FUNC_17(&VAR_22->lock);

 VAR_22->dev = &VAR_19->dev;
 VAR_22->type = VAR_8;
 VAR_22->ops = &VAR_16;
 VAR_22->regshift = 0;

 VAR_22->fifosize = 32;
 VAR_22->iotype = VAR_13;
 VAR_22->flags = VAR_12;
 VAR_22->line = VAR_19->id;






 VAR_22->irq = 0;
 VAR_22->irqflags = 0;
 VAR_22->mapbase = VAR_20->start;

 VAR_22->membase = FUNC_8(&VAR_19->dev, VAR_20);
 if (FUNC_0(VAR_22->membase))
  return -FUNC_2(VAR_22->membase);

 VAR_23 = FUNC_9(&VAR_19->dev, sizeof(struct mvebu_uart),
         VAR_5);
 if (!VAR_23)
  return -VAR_3;


 VAR_23->data = (struct mvebu_uart_driver_data *)VAR_21->data;
 VAR_23->port = VAR_22;

 VAR_22->private_data = VAR_23;
 FUNC_16(VAR_19, VAR_23);


 VAR_23->clk = FUNC_7(&VAR_19->dev, ((void*)0));
 if (FUNC_0(VAR_23->clk)) {
  if (FUNC_2(VAR_23->clk) == -VAR_4)
   return FUNC_2(VAR_23->clk);

  if (FUNC_1(VAR_22)) {
   FUNC_6(&VAR_19->dev, "unable to get UART clock\n");
   return FUNC_2(VAR_23->clk);
  }
 } else {
  if (!FUNC_5(VAR_23->clk))
   VAR_22->uartclk = FUNC_4(VAR_23->clk);
 }


 if (FUNC_15(VAR_19) == 1) {

  VAR_26 = FUNC_12(VAR_19, 0);
  if (VAR_26 < 0)
   return VAR_26;

  VAR_23->irq[VAR_9] = VAR_26;
 } else {





  VAR_26 = FUNC_13(VAR_19, "uart-rx");
  if (VAR_26 < 0)
   return VAR_26;

  VAR_23->irq[VAR_10] = VAR_26;

  VAR_26 = FUNC_13(VAR_19, "uart-tx");
  if (VAR_26 < 0)
   return VAR_26;

  VAR_23->irq[VAR_11] = VAR_26;
 }


 FUNC_20(VAR_0, VAR_22->membase + FUNC_3(VAR_22));
 FUNC_19(1);
 FUNC_20(0, VAR_22->membase + FUNC_3(VAR_22));

 VAR_24 = FUNC_18(&VAR_14, VAR_22);
 if (VAR_24)
  return VAR_24;
 return 0;
}
