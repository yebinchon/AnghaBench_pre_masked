
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_9__ {int flags; } ;
struct uart_port {int flags; int fifosize; TYPE_2__ iso7816; TYPE_4__ rs485; int uartclk; int * membase; int iso7816_config; int rs485_config; int irq; int mapbase; TYPE_3__* dev; int * ops; int iotype; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_3__ dev; TYPE_1__* resource; } ;
struct atmel_uart_port {int tx_done_mask; int * clk; int rx_ring; struct uart_port uart; } ;
struct TYPE_6__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct atmel_uart_port*,struct platform_device*) ;
 int VAR_12 ;
 int FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 struct platform_device* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_13(struct atmel_uart_port *VAR_13,
          struct platform_device *VAR_14)
{
 int VAR_15;
 struct uart_port *VAR_16 = &VAR_13->uart;
 struct platform_device *VAR_17 = FUNC_11(VAR_14->dev.parent);

 FUNC_2(VAR_13, VAR_14);
 FUNC_3(VAR_16);

 FUNC_12(&VAR_17->dev, &VAR_16->rs485);

 VAR_16->iotype = VAR_9;
 VAR_16->flags = VAR_7 | VAR_8;
 VAR_16->ops = &VAR_12;
 VAR_16->fifosize = 1;
 VAR_16->dev = &VAR_14->dev;
 VAR_16->mapbase = VAR_17->resource[0].start;
 VAR_16->irq = VAR_17->resource[1].start;
 VAR_16->rs485_config = VAR_11;
 VAR_16->iso7816_config = VAR_10;
 VAR_16->membase = ((void*)0);

 FUNC_10(&VAR_13->rx_ring, 0, sizeof(VAR_13->rx_ring));


 if (!VAR_13->clk) {
  VAR_13->clk = FUNC_6(&VAR_17->dev, "usart");
  if (FUNC_0(VAR_13->clk)) {
   VAR_15 = FUNC_1(VAR_13->clk);
   VAR_13->clk = ((void*)0);
   return VAR_15;
  }
  VAR_15 = FUNC_8(VAR_13->clk);
  if (VAR_15) {
   FUNC_9(VAR_13->clk);
   VAR_13->clk = ((void*)0);
   return VAR_15;
  }
  VAR_16->uartclk = FUNC_7(VAR_13->clk);
  FUNC_5(VAR_13->clk);

 }





 if (VAR_16->rs485.flags & VAR_6 ||
     VAR_16->iso7816.flags & VAR_5)
  VAR_13->tx_done_mask = VAR_2;
 else if (FUNC_4(VAR_16)) {
  VAR_16->fifosize = VAR_4;
  VAR_13->tx_done_mask = VAR_0 | VAR_1;
 } else {
  VAR_13->tx_done_mask = VAR_3;
 }

 return 0;
}
