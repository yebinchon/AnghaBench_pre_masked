
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifosize; int flags; int line; int membase; int uartclk; int * dev; int * ops; int irq; int mapbase; int iotype; int type; } ;
struct uart_pxa_port {int clk; TYPE_1__ port; int name; } ;
struct resource {int start; } ;
struct platform_device {int id; int dev; } ;


 int FUNC_0 (struct uart_pxa_port**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct uart_pxa_port*) ;
 struct uart_pxa_port* FUNC_11 (int,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct uart_pxa_port*) ;
 int FUNC_14 (struct resource*) ;
 int VAR_11 ;
 struct uart_pxa_port** VAR_12 ;
 int FUNC_15 (struct platform_device*,struct uart_pxa_port*) ;
 int VAR_13 ;
 int FUNC_16 (int ,scalar_t__,char*,int) ;
 int FUNC_17 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 struct uart_pxa_port *VAR_15;
 struct resource *VAR_16, *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_12(VAR_14, VAR_5, 0);
 VAR_17 = FUNC_12(VAR_14, VAR_4, 0);
 if (!VAR_16 || !VAR_17)
  return -VAR_1;

 VAR_15 = FUNC_11(sizeof(struct uart_pxa_port), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->clk = FUNC_3(&VAR_14->dev, ((void*)0));
 if (FUNC_1(VAR_15->clk)) {
  VAR_18 = FUNC_2(VAR_15->clk);
  goto err_free;
 }

 VAR_18 = FUNC_5(VAR_15->clk);
 if (VAR_18) {
  FUNC_6(VAR_15->clk);
  goto err_free;
 }

 VAR_15->port.type = VAR_6;
 VAR_15->port.iotype = VAR_10;
 VAR_15->port.mapbase = VAR_16->start;
 VAR_15->port.irq = VAR_17->start;
 VAR_15->port.fifosize = 64;
 VAR_15->port.ops = &VAR_11;
 VAR_15->port.dev = &VAR_14->dev;
 VAR_15->port.flags = VAR_9 | VAR_8;
 VAR_15->port.uartclk = FUNC_4(VAR_15->clk);

 VAR_18 = FUNC_15(VAR_14, VAR_15);
 if (VAR_18 > 0)
  VAR_15->port.line = VAR_14->id;
 else if (VAR_18 < 0)
  goto err_clk;
 if (VAR_15->port.line >= FUNC_0(VAR_12)) {
  FUNC_8(&VAR_14->dev, "serial%d out of range\n", VAR_15->port.line);
  VAR_18 = -VAR_0;
  goto err_clk;
 }
 FUNC_16(VAR_15->name, VAR_7 - 1, "UART%d", VAR_15->port.line + 1);

 VAR_15->port.membase = FUNC_9(VAR_16->start, FUNC_14(VAR_16));
 if (!VAR_15->port.membase) {
  VAR_18 = -VAR_2;
  goto err_clk;
 }

 VAR_12[VAR_15->port.line] = VAR_15;

 FUNC_17(&VAR_13, &VAR_15->port);
 FUNC_13(VAR_14, VAR_15);

 return 0;

 err_clk:
 FUNC_7(VAR_15->clk);
 FUNC_6(VAR_15->clk);
 err_free:
 FUNC_10(VAR_15);
 return VAR_18;
}
