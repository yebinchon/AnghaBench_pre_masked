
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_5__ {size_t line; int irq; scalar_t__ uartclk; int flags; int * ops; int fifosize; scalar_t__ x_char; int mapbase; int iotype; int type; scalar_t__ regshift; TYPE_2__* dev; } ;
struct rda_uart_port {TYPE_1__ port; int clk; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct platform_device {size_t id; TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 struct rda_uart_port* FUNC_5 (TYPE_2__*,int,int ) ;
 size_t FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct rda_uart_port*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct rda_uart_port** VAR_15 ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_16)
{
 struct resource *VAR_17;
 struct rda_uart_port *VAR_18;
 int VAR_19, VAR_20;

 if (VAR_16->dev.of_node)
  VAR_16->id = FUNC_6(VAR_16->dev.of_node, "serial");

 if (VAR_16->id < 0 || VAR_16->id >= VAR_7) {
  FUNC_3(&VAR_16->dev, "id %d out of range\n", VAR_16->id);
  return -VAR_1;
 }

 VAR_17 = FUNC_8(VAR_16, VAR_5, 0);
 if (!VAR_17) {
  FUNC_3(&VAR_16->dev, "could not get mem\n");
  return -VAR_2;
 }

 VAR_20 = FUNC_7(VAR_16, 0);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_15[VAR_16->id]) {
  FUNC_3(&VAR_16->dev, "port %d already allocated\n", VAR_16->id);
  return -VAR_0;
 }

 VAR_18 = FUNC_5(&VAR_16->dev, sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return -VAR_3;

 VAR_18->clk = FUNC_4(&VAR_16->dev, ((void*)0));
 if (FUNC_0(VAR_18->clk)) {
  FUNC_3(&VAR_16->dev, "could not get clk\n");
  return FUNC_1(VAR_18->clk);
 }

 VAR_18->port.dev = &VAR_16->dev;
 VAR_18->port.regshift = 0;
 VAR_18->port.line = VAR_16->id;
 VAR_18->port.type = VAR_6;
 VAR_18->port.iotype = VAR_12;
 VAR_18->port.mapbase = VAR_17->start;
 VAR_18->port.irq = VAR_20;
 VAR_18->port.uartclk = FUNC_2(VAR_18->clk);
 if (VAR_18->port.uartclk == 0) {
  FUNC_3(&VAR_16->dev, "clock rate is zero\n");
  return -VAR_1;
 }
 VAR_18->port.flags = VAR_9 | VAR_10 |
          VAR_11;
 VAR_18->port.x_char = 0;
 VAR_18->port.fifosize = VAR_8;
 VAR_18->port.ops = &VAR_14;

 VAR_15[VAR_16->id] = VAR_18;
 FUNC_9(VAR_16, VAR_18);

 VAR_19 = FUNC_10(&VAR_13, &VAR_18->port);
 if (VAR_19)
  VAR_15[VAR_16->id] = ((void*)0);

 return VAR_19;
}
