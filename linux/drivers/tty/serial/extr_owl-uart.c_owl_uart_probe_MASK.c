
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct platform_device {size_t id; TYPE_2__ dev; } ;
struct TYPE_5__ {size_t line; int irq; scalar_t__ uartclk; int flags; int fifosize; int * ops; scalar_t__ x_char; int mapbase; int iotype; int type; TYPE_2__* dev; } ;
struct owl_uart_port {TYPE_1__ port; int clk; } ;
struct owl_uart_info {int tx_fifosize; } ;
struct of_device_id {struct owl_uart_info* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 struct owl_uart_port* FUNC_5 (TYPE_2__*,int,int ) ;
 size_t FUNC_6 (scalar_t__,char*) ;
 struct of_device_id* FUNC_7 (int ,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct owl_uart_port** VAR_15 ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct owl_uart_port*) ;
 int FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_16)
{
 const struct of_device_id *VAR_17;
 const struct owl_uart_info *VAR_18 = ((void*)0);
 struct resource *VAR_19;
 struct owl_uart_port *VAR_20;
 int VAR_21, VAR_22;

 if (VAR_16->dev.of_node) {
  VAR_16->id = FUNC_6(VAR_16->dev.of_node, "serial");
  VAR_17 = FUNC_7(VAR_13, VAR_16->dev.of_node);
  if (VAR_17)
   VAR_18 = VAR_17->data;
 }

 if (VAR_16->id < 0 || VAR_16->id >= VAR_6) {
  FUNC_3(&VAR_16->dev, "id %d out of range\n", VAR_16->id);
  return -VAR_1;
 }

 VAR_19 = FUNC_9(VAR_16, VAR_5, 0);
 if (!VAR_19) {
  FUNC_3(&VAR_16->dev, "could not get mem\n");
  return -VAR_2;
 }

 VAR_22 = FUNC_8(VAR_16, 0);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_15[VAR_16->id]) {
  FUNC_3(&VAR_16->dev, "port %d already allocated\n", VAR_16->id);
  return -VAR_0;
 }

 VAR_20 = FUNC_5(&VAR_16->dev, sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_3;

 VAR_20->clk = FUNC_4(&VAR_16->dev, ((void*)0));
 if (FUNC_0(VAR_20->clk)) {
  FUNC_3(&VAR_16->dev, "could not get clk\n");
  return FUNC_1(VAR_20->clk);
 }

 VAR_20->port.dev = &VAR_16->dev;
 VAR_20->port.line = VAR_16->id;
 VAR_20->port.type = VAR_7;
 VAR_20->port.iotype = VAR_11;
 VAR_20->port.mapbase = VAR_19->start;
 VAR_20->port.irq = VAR_22;
 VAR_20->port.uartclk = FUNC_2(VAR_20->clk);
 if (VAR_20->port.uartclk == 0) {
  FUNC_3(&VAR_16->dev, "clock rate is zero\n");
  return -VAR_1;
 }
 VAR_20->port.flags = VAR_8 | VAR_9 | VAR_10;
 VAR_20->port.x_char = 0;
 VAR_20->port.fifosize = (VAR_18) ? VAR_18->tx_fifosize : 16;
 VAR_20->port.ops = &VAR_14;

 VAR_15[VAR_16->id] = VAR_20;
 FUNC_10(VAR_16, VAR_20);

 VAR_21 = FUNC_11(&VAR_12, &VAR_20->port);
 if (VAR_21)
  VAR_15[VAR_16->id] = ((void*)0);

 return VAR_21;
}
