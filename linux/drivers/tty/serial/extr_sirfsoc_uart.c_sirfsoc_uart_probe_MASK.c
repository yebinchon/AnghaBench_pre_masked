
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct uart_port {size_t line; TYPE_4__* dev; int lock; int * ops; int uartclk; int irq; int membase; int mapbase; int fifosize; struct sirfsoc_uart_port* private_data; int flags; int iotype; } ;
struct sirfsoc_uart_register {int uart_type; } ;
struct TYPE_12__ {int buf; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_13__ {int dma_addr; TYPE_1__ xmit; } ;
struct TYPE_14__ {int function; } ;
struct sirfsoc_uart_port {int hw_flow_ctrl; int cts_gpio; int rts_gpio; int is_atlas7; int is_hrt_enabled; void* rx_dma_chan; TYPE_2__ rx_dma_items; TYPE_3__ hrt; void* tx_dma_chan; int clk; struct sirfsoc_uart_register* uart_reg; struct uart_port port; } ;
struct resource {int start; } ;
struct TYPE_15__ {struct device_node* of_node; } ;
struct platform_device {int id; TYPE_4__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; } ;
struct device_node {int dummy; } ;


 size_t FUNC_0 (struct sirfsoc_uart_port**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,int,char*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 struct sirfsoc_uart_port* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int *,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (void*,struct dma_slave_config*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_3__*,int ,int ) ;
 size_t FUNC_18 (struct device_node*,char*) ;
 scalar_t__ FUNC_19 (struct device_node*,char*) ;
 scalar_t__ FUNC_20 (struct device_node*,char*,int *) ;
 void* FUNC_21 (struct device_node*,char*,int ) ;
 struct of_device_id* FUNC_22 (int ,struct device_node*) ;
 scalar_t__ FUNC_23 (struct device_node*,char*) ;
 scalar_t__ FUNC_24 (struct device_node*,char*,int *) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct sirfsoc_uart_port*) ;
 int FUNC_27 (struct resource*) ;
 struct sirfsoc_uart_port** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_18)
{
 struct device_node *VAR_19 = VAR_18->dev.of_node;
 struct sirfsoc_uart_port *VAR_20;
 struct uart_port *VAR_21;
 struct resource *VAR_22;
 int VAR_23;
 struct dma_slave_config VAR_24 = {
  .src_maxburst = 1,
 };
 struct dma_slave_config VAR_25 = {
  .dst_maxburst = 2,
 };
 const struct of_device_id *VAR_26;

 VAR_26 = FUNC_22(VAR_15, VAR_19);
 VAR_20 = FUNC_8(&VAR_18->dev, sizeof(*VAR_20), VAR_4);
 if (!VAR_20) {
  VAR_23 = -VAR_3;
  goto err;
 }
 VAR_20->port.line = FUNC_18(VAR_19, "serial");
 if (VAR_20->port.line >= FUNC_0(VAR_13)) {
  FUNC_4(&VAR_18->dev, "serial%d out of range\n",
   VAR_20->port.line);
  return -VAR_2;
 }
 VAR_13[VAR_20->port.line] = VAR_20;
 VAR_20->port.iotype = VAR_12;
 VAR_20->port.flags = VAR_11;
 VAR_21 = &VAR_20->port;
 VAR_21->dev = &VAR_18->dev;
 VAR_21->private_data = VAR_20;
 VAR_20->uart_reg = (struct sirfsoc_uart_register *)VAR_26->data;

 VAR_20->hw_flow_ctrl =
  FUNC_23(VAR_19, "uart-has-rtscts") ||
  FUNC_23(VAR_19, "sirf,uart-has-rtscts") ;
 if (FUNC_19(VAR_19, "sirf,prima2-uart") ||
  FUNC_19(VAR_19, "sirf,atlas7-uart"))
  VAR_20->uart_reg->uart_type = VAR_9;
 if (FUNC_19(VAR_19, "sirf,prima2-usp-uart") ||
     FUNC_19(VAR_19, "sirf,atlas7-usp-uart")) {
  VAR_20->uart_reg->uart_type = VAR_10;
  if (!VAR_20->hw_flow_ctrl)
   goto usp_no_flow_control;
  if (FUNC_20(VAR_19, "cts-gpios", ((void*)0)))
   VAR_20->cts_gpio =
    FUNC_21(VAR_19, "cts-gpios", 0);
  else
   VAR_20->cts_gpio = -1;
  if (FUNC_20(VAR_19, "rts-gpios", ((void*)0)))
   VAR_20->rts_gpio =
    FUNC_21(VAR_19, "rts-gpios", 0);
  else
   VAR_20->rts_gpio = -1;

  if ((!FUNC_16(VAR_20->cts_gpio) ||
    !FUNC_16(VAR_20->rts_gpio))) {
   VAR_23 = -VAR_2;
   FUNC_4(&VAR_18->dev,
    "Usp flow control must have cts and rts gpio");
   goto err;
  }
  VAR_23 = FUNC_6(&VAR_18->dev, VAR_20->cts_gpio,
    "usp-cts-gpio");
  if (VAR_23) {
   FUNC_4(&VAR_18->dev, "Unable request cts gpio");
   goto err;
  }
  FUNC_14(VAR_20->cts_gpio);
  VAR_23 = FUNC_6(&VAR_18->dev, VAR_20->rts_gpio,
    "usp-rts-gpio");
  if (VAR_23) {
   FUNC_4(&VAR_18->dev, "Unable request rts gpio");
   goto err;
  }
  FUNC_15(VAR_20->rts_gpio, 1);
 }
usp_no_flow_control:
 if (FUNC_19(VAR_19, "sirf,atlas7-uart") ||
     FUNC_19(VAR_19, "sirf,atlas7-usp-uart"))
  VAR_20->is_atlas7 = 1;

 if (FUNC_24(VAR_19, "fifosize", &VAR_21->fifosize)) {
  FUNC_4(&VAR_18->dev,
   "Unable to find fifosize in uart node.\n");
  VAR_23 = -VAR_1;
  goto err;
 }

 VAR_22 = FUNC_25(VAR_18, VAR_7, 0);
 if (VAR_22 == ((void*)0)) {
  FUNC_4(&VAR_18->dev, "Insufficient resources.\n");
  VAR_23 = -VAR_1;
  goto err;
 }
 VAR_21->mapbase = VAR_22->start;
 VAR_21->membase = FUNC_7(&VAR_18->dev,
   VAR_22->start, FUNC_27(VAR_22));
 if (!VAR_21->membase) {
  FUNC_4(&VAR_18->dev, "Cannot remap resource.\n");
  VAR_23 = -VAR_3;
  goto err;
 }
 VAR_22 = FUNC_25(VAR_18, VAR_6, 0);
 if (VAR_22 == ((void*)0)) {
  FUNC_4(&VAR_18->dev, "Insufficient resources.\n");
  VAR_23 = -VAR_1;
  goto err;
 }
 VAR_21->irq = VAR_22->start;

 VAR_20->clk = FUNC_5(&VAR_18->dev, ((void*)0));
 if (FUNC_1(VAR_20->clk)) {
  VAR_23 = FUNC_2(VAR_20->clk);
  goto err;
 }
 VAR_21->uartclk = FUNC_3(VAR_20->clk);

 VAR_21->ops = &VAR_16;
 FUNC_28(&VAR_21->lock);

 FUNC_26(VAR_18, VAR_20);
 VAR_23 = FUNC_29(&VAR_14, VAR_21);
 if (VAR_23 != 0) {
  FUNC_4(&VAR_18->dev, "Cannot add UART port(%d).\n", VAR_18->id);
  goto err;
 }

 VAR_20->rx_dma_chan = FUNC_12(VAR_21->dev, "rx");
 VAR_20->rx_dma_items.xmit.buf =
  FUNC_9(VAR_21->dev, VAR_8,
  &VAR_20->rx_dma_items.dma_addr, VAR_4);
 if (!VAR_20->rx_dma_items.xmit.buf) {
  FUNC_4(VAR_21->dev, "Uart alloc bufa failed\n");
  VAR_23 = -VAR_3;
  goto alloc_coherent_err;
 }
 VAR_20->rx_dma_items.xmit.head =
  VAR_20->rx_dma_items.xmit.tail = 0;
 if (VAR_20->rx_dma_chan)
  FUNC_13(VAR_20->rx_dma_chan, &VAR_24);
 VAR_20->tx_dma_chan = FUNC_12(VAR_21->dev, "tx");
 if (VAR_20->tx_dma_chan)
  FUNC_13(VAR_20->tx_dma_chan, &VAR_25);
 if (VAR_20->rx_dma_chan) {
  FUNC_17(&VAR_20->hrt, VAR_0, VAR_5);
  VAR_20->hrt.function = VAR_17;
  VAR_20->is_hrt_enabled = 0;
 }

 return 0;
alloc_coherent_err:
 FUNC_10(VAR_21->dev, VAR_8,
   VAR_20->rx_dma_items.xmit.buf,
   VAR_20->rx_dma_items.dma_addr);
 FUNC_11(VAR_20->rx_dma_chan);
err:
 return VAR_23;
}
