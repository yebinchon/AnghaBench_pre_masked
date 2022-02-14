
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_11__ {int irq; int fifosize; int line; int lock; int type; int * ops; TYPE_4__* dev; int uartclk; int iotype; struct clk* membase; int mapbase; } ;
struct digicolor_port {TYPE_1__ port; int rx_poll_work; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_6 ;
 int FUNC_2 (struct clk*) ;
 int VAR_7 ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 struct clk* FUNC_6 (TYPE_4__*,int *) ;
 struct clk* FUNC_7 (TYPE_4__*,struct resource*) ;
 struct digicolor_port* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,int,int ,int ,int ,TYPE_1__*) ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 int VAR_15, VAR_16, VAR_17;
 struct digicolor_port *VAR_18;
 struct resource *VAR_19;
 struct clk *VAR_20;

 if (!VAR_14) {
  FUNC_4(&VAR_13->dev, "Missing device tree node\n");
  return -VAR_3;
 }

 VAR_17 = FUNC_10(VAR_14, "serial");
 if (VAR_17 < 0 || VAR_17 >= VAR_0)
  return -VAR_1;

 VAR_18 = FUNC_8(&VAR_13->dev, sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return -VAR_2;

 VAR_20 = FUNC_6(&VAR_13->dev, ((void*)0));
 if (FUNC_1(VAR_20))
  return FUNC_2(VAR_20);

 VAR_19 = FUNC_12(VAR_13, VAR_5, 0);
 VAR_18->port.mapbase = VAR_19->start;
 VAR_18->port.membase = FUNC_7(&VAR_13->dev, VAR_19);
 if (FUNC_1(VAR_18->port.membase))
  return FUNC_2(VAR_18->port.membase);

 VAR_15 = FUNC_11(VAR_13, 0);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_18->port.irq = VAR_15;

 VAR_18->port.iotype = VAR_7;
 VAR_18->port.uartclk = FUNC_3(VAR_20);
 VAR_18->port.fifosize = 16;
 VAR_18->port.dev = &VAR_13->dev;
 VAR_18->port.ops = &VAR_12;
 VAR_18->port.line = VAR_17;
 VAR_18->port.type = VAR_6;
 FUNC_14(&VAR_18->port.lock);

 VAR_8[VAR_17] = &VAR_18->port;
 FUNC_13(VAR_13, &VAR_18->port);

 FUNC_0(&VAR_18->rx_poll_work, VAR_9);

 VAR_16 = FUNC_9(&VAR_13->dev, VAR_18->port.irq, VAR_11, 0,
          FUNC_5(&VAR_13->dev), &VAR_18->port);
 if (VAR_16)
  return VAR_16;

 return FUNC_15(&VAR_10, &VAR_18->port);
}
