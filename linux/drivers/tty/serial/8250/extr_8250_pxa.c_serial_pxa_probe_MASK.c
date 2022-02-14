
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line; int regshift; int fifosize; int flags; struct pxa8250_data* private_data; int pm; int uartclk; TYPE_2__* dev; int irq; int mapbase; int iotype; int type; } ;
struct uart_8250_port {int dl_write; TYPE_1__ port; } ;
struct resource {int start; } ;
struct pxa8250_data {int line; int clk; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 struct pxa8250_data* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (int ,char*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct pxa8250_data*) ;
 int FUNC_10 (struct uart_8250_port*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_11)
{
 struct uart_8250_port VAR_12 = {};
 struct pxa8250_data *VAR_13;
 struct resource *VAR_14, *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(VAR_11, VAR_4, 0);
 VAR_15 = FUNC_8(VAR_11, VAR_3, 0);
 if (!VAR_14 || !VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->clk = FUNC_5(&VAR_11->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk))
  return FUNC_1(VAR_13->clk);

 VAR_16 = FUNC_3(VAR_13->clk);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_7(VAR_11->dev.of_node, "serial");
 if (VAR_16 >= 0)
  VAR_12.port.line = VAR_16;

 VAR_12.port.type = VAR_5;
 VAR_12.port.iotype = VAR_8;
 VAR_12.port.mapbase = VAR_14->start;
 VAR_12.port.regshift = 2;
 VAR_12.port.irq = VAR_15->start;
 VAR_12.port.fifosize = 64;
 VAR_12.port.flags = VAR_6 | VAR_7;
 VAR_12.port.dev = &VAR_11->dev;
 VAR_12.port.uartclk = FUNC_2(VAR_13->clk);
 VAR_12.port.pm = VAR_10;
 VAR_12.port.private_data = VAR_13;
 VAR_12.dl_write = VAR_9;

 VAR_16 = FUNC_10(&VAR_12);
 if (VAR_16 < 0)
  goto err_clk;

 VAR_13->line = VAR_16;

 FUNC_9(VAR_11, VAR_13);

 return 0;

 err_clk:
 FUNC_4(VAR_13->clk);
 return VAR_16;
}
