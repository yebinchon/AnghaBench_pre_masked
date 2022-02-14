
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int irq; int fifosize; int flags; int * ops; int uartclk; int type; int mapbase; int iotype; TYPE_4__* dev; int line; struct clk* membase; } ;
struct clps711x_port {int rx_irq; int tx_enabled; TYPE_1__ port; struct clk* syscon; struct clk* gpios; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_3 ;
 int FUNC_1 (struct clk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct clk*) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*) ;
 struct clk* FUNC_4 (TYPE_4__*,int *) ;
 struct clk* FUNC_5 (TYPE_4__*,struct resource*) ;
 struct clps711x_port* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int,int ,int ,int ,TYPE_1__*) ;
 struct clk* FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (struct device_node*,char*) ;
 void* FUNC_10 (struct platform_device*,int) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct clps711x_port*) ;
 int FUNC_13 (struct clk*,int ,int ,int ) ;
 struct clk* FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct clps711x_port *VAR_15;
 struct resource *VAR_16;
 struct clk *VAR_17;
 int VAR_18, VAR_19;

 VAR_15 = FUNC_6(&VAR_13->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_17 = FUNC_4(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);

 VAR_16 = FUNC_11(VAR_13, VAR_2, 0);
 VAR_15->port.membase = FUNC_5(&VAR_13->dev, VAR_16);
 if (FUNC_0(VAR_15->port.membase))
  return FUNC_1(VAR_15->port.membase);

 VAR_18 = FUNC_10(VAR_13, 0);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_15->port.irq = VAR_18;

 VAR_15->rx_irq = FUNC_10(VAR_13, 1);
 if (VAR_15->rx_irq < 0)
  return VAR_15->rx_irq;

 VAR_15->syscon = FUNC_14(VAR_14, "syscon");
 if (FUNC_0(VAR_15->syscon))
  return FUNC_1(VAR_15->syscon);

 VAR_15->port.line = FUNC_9(VAR_14, "serial");
 VAR_15->port.dev = &VAR_13->dev;
 VAR_15->port.iotype = VAR_8;
 VAR_15->port.mapbase = VAR_16->start;
 VAR_15->port.type = VAR_3;
 VAR_15->port.fifosize = 16;
 VAR_15->port.flags = VAR_7 | VAR_6;
 VAR_15->port.uartclk = FUNC_2(VAR_17);
 VAR_15->port.ops = &VAR_12;

 FUNC_12(VAR_13, VAR_15);

 VAR_15->gpios = FUNC_8(&VAR_13->dev, 0);
 if (FUNC_0(VAR_15->gpios))
     return FUNC_1(VAR_15->gpios);

 VAR_19 = FUNC_15(&VAR_9, &VAR_15->port);
 if (VAR_19)
  return VAR_19;


 if (!FUNC_16(&VAR_15->port))
  FUNC_13(VAR_15->syscon, VAR_4, VAR_5, 0);

 VAR_15->tx_enabled = 1;

 VAR_19 = FUNC_7(&VAR_13->dev, VAR_15->port.irq, VAR_11, 0,
          FUNC_3(&VAR_13->dev), &VAR_15->port);
 if (VAR_19) {
  FUNC_17(&VAR_9, &VAR_15->port);
  return VAR_19;
 }

 VAR_19 = FUNC_7(&VAR_13->dev, VAR_15->rx_irq, VAR_10, 0,
          FUNC_3(&VAR_13->dev), &VAR_15->port);
 if (VAR_19)
  FUNC_17(&VAR_9, &VAR_15->port);

 return VAR_19;
}
