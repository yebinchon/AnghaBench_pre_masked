
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int fifosize; void* irq; int uartclk; int * dev; int * ops; int flags; int iotype; int mapsize; int mapbase; int membase; } ;
struct mps2_uart_port {int flags; TYPE_1__ port; void* tx_irq; void* rx_irq; int clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 int VAR_4 ;
 void* FUNC_7 (struct platform_device*,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct resource*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5,
     struct mps2_uart_port *VAR_6)
{
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_5, VAR_0, 0);
 VAR_6->port.membase = FUNC_6(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->port.membase))
  return FUNC_1(VAR_6->port.membase);

 VAR_6->port.mapbase = VAR_7->start;
 VAR_6->port.mapsize = FUNC_9(VAR_7);
 VAR_6->port.iotype = VAR_3;
 VAR_6->port.flags = VAR_2;
 VAR_6->port.fifosize = 1;
 VAR_6->port.ops = &VAR_4;
 VAR_6->port.dev = &VAR_5->dev;

 VAR_6->clk = FUNC_5(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_8 = FUNC_4(VAR_6->clk);
 if (VAR_8)
  return VAR_8;

 VAR_6->port.uartclk = FUNC_3(VAR_6->clk);

 FUNC_2(VAR_6->clk);


 if (VAR_6->flags & VAR_1) {
  VAR_6->port.irq = FUNC_7(VAR_5, 0);
 } else {
  VAR_6->rx_irq = FUNC_7(VAR_5, 0);
  VAR_6->tx_irq = FUNC_7(VAR_5, 1);
  VAR_6->port.irq = FUNC_7(VAR_5, 2);
 }

 return VAR_8;
}
