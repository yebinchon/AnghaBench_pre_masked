
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uart ;
struct TYPE_9__ {int line; int irq; int regshift; int flags; int serial_out; int rs485_config; struct lpc18xx_uart_data* private_data; int uartclk; int type; int mapbase; int iotype; TYPE_5__* dev; int lock; int membase; } ;
struct uart_8250_port {TYPE_4__* dma; TYPE_1__ port; } ;
struct resource {int start; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_11__ {int dst_maxburst; } ;
struct TYPE_10__ {int src_maxburst; } ;
struct TYPE_12__ {TYPE_3__ txconf; TYPE_2__ rxconf; struct lpc18xx_uart_data* tx_param; struct lpc18xx_uart_data* rx_param; } ;
struct lpc18xx_uart_data {int line; void* clk_reg; void* clk_uart; TYPE_4__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 void* FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 struct lpc18xx_uart_data* FUNC_8 (TYPE_5__*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct uart_8250_port*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct lpc18xx_uart_data*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct uart_8250_port*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_11)
{
 struct lpc18xx_uart_data *VAR_12;
 struct uart_8250_port VAR_13;
 struct resource *VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_11(VAR_11, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_12(VAR_11, VAR_3, 0);
 if (!VAR_14) {
  FUNC_5(&VAR_11->dev, "memory resource not found");
  return -VAR_0;
 }

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));

 VAR_13.port.membase = FUNC_7(&VAR_11->dev, VAR_14->start,
      FUNC_14(VAR_14));
 if (!VAR_13.port.membase)
  return -VAR_1;

 VAR_12 = FUNC_8(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->clk_uart = FUNC_6(&VAR_11->dev, "uartclk");
 if (FUNC_0(VAR_12->clk_uart)) {
  FUNC_5(&VAR_11->dev, "uart clock not found\n");
  return FUNC_1(VAR_12->clk_uart);
 }

 VAR_12->clk_reg = FUNC_6(&VAR_11->dev, "reg");
 if (FUNC_0(VAR_12->clk_reg)) {
  FUNC_5(&VAR_11->dev, "reg clock not found\n");
  return FUNC_1(VAR_12->clk_reg);
 }

 VAR_16 = FUNC_4(VAR_12->clk_reg);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "unable to enable reg clock\n");
  return VAR_16;
 }

 VAR_16 = FUNC_4(VAR_12->clk_uart);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "unable to enable uart clock\n");
  goto dis_clk_reg;
 }

 VAR_16 = FUNC_10(VAR_11->dev.of_node, "serial");
 if (VAR_16 >= 0)
  VAR_13.port.line = VAR_16;

 VAR_12->dma.rx_param = VAR_12;
 VAR_12->dma.tx_param = VAR_12;

 FUNC_16(&VAR_13.port.lock);
 VAR_13.port.dev = &VAR_11->dev;
 VAR_13.port.irq = VAR_15;
 VAR_13.port.iotype = VAR_8;
 VAR_13.port.mapbase = VAR_14->start;
 VAR_13.port.regshift = 2;
 VAR_13.port.type = VAR_4;
 VAR_13.port.flags = VAR_5 | VAR_6 | VAR_7;
 VAR_13.port.uartclk = FUNC_3(VAR_12->clk_uart);
 VAR_13.port.private_data = VAR_12;
 VAR_13.port.rs485_config = VAR_9;
 VAR_13.port.serial_out = VAR_10;

 VAR_13.dma = &VAR_12->dma;
 VAR_13.dma->rxconf.src_maxburst = 1;
 VAR_13.dma->txconf.dst_maxburst = 1;

 VAR_16 = FUNC_15(&VAR_13);
 if (VAR_16 < 0) {
  FUNC_5(&VAR_11->dev, "unable to register 8250 port\n");
  goto dis_uart_clk;
 }

 VAR_12->line = VAR_16;
 FUNC_13(VAR_11, VAR_12);

 return 0;

dis_uart_clk:
 FUNC_2(VAR_12->clk_uart);
dis_clk_reg:
 FUNC_2(VAR_12->clk_reg);
 return VAR_16;
}
