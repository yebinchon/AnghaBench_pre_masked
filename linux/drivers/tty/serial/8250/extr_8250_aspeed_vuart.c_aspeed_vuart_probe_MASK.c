
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mapbase; int custom_divisor; int regshift; int fifosize; int line; int uartclk; int flags; int irq; int type; int iotype; int handle_irq; int irqflags; TYPE_2__* dev; int status; int unthrottle; int throttle; int shutdown; int startup; int mapsize; int membase; struct aspeed_vuart* private_data; } ;
struct uart_8250_port {TYPE_1__ port; int capabilities; } ;
struct resource {int start; } ;
struct TYPE_7__ {int kobj; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct aspeed_vuart {int line; TYPE_2__* dev; int clk; int regs; int unthrottle_timer; } ;
typedef int port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct aspeed_vuart*,int) ;
 int FUNC_3 (struct aspeed_vuart*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,struct resource*) ;
 struct aspeed_vuart* FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct device_node*,int ) ;
 int FUNC_13 (struct uart_8250_port*,int ,int) ;
 int FUNC_14 (struct device_node*,char*) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*,int*) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct aspeed_vuart*) ;
 int FUNC_19 (struct resource*) ;
 int FUNC_20 (struct uart_8250_port*) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_22)
{
 struct uart_8250_port VAR_23;
 struct aspeed_vuart *VAR_24;
 struct device_node *VAR_25;
 struct resource *VAR_26;
 u32 VAR_27, VAR_28;
 int VAR_29;

 VAR_25 = VAR_22->dev.of_node;

 VAR_24 = FUNC_10(&VAR_22->dev, sizeof(*VAR_24), VAR_1);
 if (!VAR_24)
  return -VAR_0;

 VAR_24->dev = &VAR_22->dev;
 FUNC_23(&VAR_24->unthrottle_timer, VAR_21, 0);

 VAR_26 = FUNC_17(VAR_22, VAR_2, 0);
 VAR_24->regs = FUNC_9(&VAR_22->dev, VAR_26);
 if (FUNC_0(VAR_24->regs))
  return FUNC_1(VAR_24->regs);

 FUNC_13(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.port.private_data = VAR_24;
 VAR_23.port.membase = VAR_24->regs;
 VAR_23.port.mapbase = VAR_26->start;
 VAR_23.port.mapsize = FUNC_19(VAR_26);
 VAR_23.port.startup = VAR_18;
 VAR_23.port.shutdown = VAR_17;
 VAR_23.port.throttle = VAR_19;
 VAR_23.port.unthrottle = VAR_20;
 VAR_23.port.status = VAR_14;
 VAR_23.port.dev = &VAR_22->dev;

 VAR_29 = FUNC_21(&VAR_24->dev->kobj, &VAR_15);
 if (VAR_29 < 0)
  return VAR_29;

 if (FUNC_16(VAR_25, "clock-frequency", &VAR_27)) {
  VAR_24->clk = FUNC_8(&VAR_22->dev, ((void*)0));
  if (FUNC_0(VAR_24->clk)) {
   FUNC_7(&VAR_22->dev,
    "clk or clock-frequency not defined\n");
   VAR_29 = FUNC_1(VAR_24->clk);
   goto err_sysfs_remove;
  }

  VAR_29 = FUNC_6(VAR_24->clk);
  if (VAR_29 < 0)
   goto err_sysfs_remove;

  VAR_27 = FUNC_5(VAR_24->clk);
 }


 if (FUNC_16(VAR_25, "current-speed", &VAR_28) == 0)
  VAR_23.port.custom_divisor = VAR_27 / (16 * VAR_28);


 if (FUNC_16(VAR_25, "reg-offset", &VAR_28) == 0)
  VAR_23.port.mapbase += VAR_28;


 if (FUNC_16(VAR_25, "reg-shift", &VAR_28) == 0)
  VAR_23.port.regshift = VAR_28;


 if (FUNC_16(VAR_25, "fifo-size", &VAR_28) == 0)
  VAR_23.port.fifosize = VAR_28;


 VAR_29 = FUNC_14(VAR_25, "serial");
 if (VAR_29 >= 0)
  VAR_23.port.line = VAR_29;

 VAR_23.port.irq = FUNC_12(VAR_25, 0);
 VAR_23.port.irqflags = VAR_3;
 VAR_23.port.handle_irq = VAR_16;
 VAR_23.port.iotype = VAR_13;
 VAR_23.port.type = VAR_4;
 VAR_23.port.uartclk = VAR_27;
 VAR_23.port.flags = VAR_11 | VAR_7
  | VAR_8 | VAR_9 | VAR_10;

 if (FUNC_15(VAR_25, "no-loopback-test"))
  VAR_23.port.flags |= VAR_12;

 if (VAR_23.port.fifosize)
  VAR_23.capabilities = VAR_6;

 if (FUNC_15(VAR_25, "auto-flow-control"))
  VAR_23.capabilities |= VAR_5;

 VAR_29 = FUNC_20(&VAR_23);
 if (VAR_29 < 0)
  goto err_clk_disable;

 VAR_24->line = VAR_29;

 FUNC_2(VAR_24, 1);
 FUNC_3(VAR_24, 1);
 FUNC_18(VAR_22, VAR_24);

 return 0;

err_clk_disable:
 FUNC_4(VAR_24->clk);
 FUNC_11(VAR_23.port.irq);
err_sysfs_remove:
 FUNC_22(&VAR_24->dev->kobj, &VAR_15);
 return VAR_29;
}
