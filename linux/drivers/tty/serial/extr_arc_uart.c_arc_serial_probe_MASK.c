
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct uart_port {int line; scalar_t__ ignore_status_mask; int fifosize; int * ops; int flags; int iotype; TYPE_1__* dev; int irq; int membase; void* uartclk; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct arc_uart_port {struct uart_port port; void* baud; } ;


 int VAR_0 ;
 int FUNC_0 (struct arc_uart_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct arc_uart_port* VAR_8 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,void**) ;
 int FUNC_6 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct arc_uart_port *VAR_11;
 struct uart_port *VAR_12;
 int VAR_13;
 u32 VAR_14;


 if (!VAR_10)
  return -VAR_2;

 VAR_13 = FUNC_3(VAR_10, "serial");
 if (VAR_13 < 0)
  VAR_13 = 0;

 if (VAR_13 >= FUNC_0(VAR_8)) {
  FUNC_1(&VAR_9->dev, "serial%d out of range\n", VAR_13);
  return -VAR_1;
 }

 VAR_11 = &VAR_8[VAR_13];
 VAR_12 = &VAR_11->port;

 if (FUNC_5(VAR_10, "clock-frequency", &VAR_14)) {
  FUNC_1(&VAR_9->dev, "clock-frequency property NOTset\n");
  return -VAR_1;
 }
 VAR_12->uartclk = VAR_14;

 if (FUNC_5(VAR_10, "current-speed", &VAR_14)) {
  FUNC_1(&VAR_9->dev, "current-speed property NOT set\n");
  return -VAR_1;
 }
 VAR_11->baud = VAR_14;

 VAR_12->membase = FUNC_4(VAR_10, 0);
 if (!VAR_12->membase)

  return -VAR_3;

 VAR_12->irq = FUNC_2(VAR_10, 0);

 VAR_12->dev = &VAR_9->dev;
 VAR_12->iotype = VAR_5;
 VAR_12->flags = VAR_4;
 VAR_12->line = VAR_13;
 VAR_12->ops = &VAR_6;

 VAR_12->fifosize = VAR_0;





 VAR_12->ignore_status_mask = 0;

 return FUNC_6(&VAR_7, &VAR_8[VAR_13].port);
}
