
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_17__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct lpuart_soc_data* data; } ;
struct lpuart_soc_data {int iotype; int devtype; scalar_t__ reg_off; } ;
struct TYPE_18__ {int flags; scalar_t__ delay_rts_after_send; scalar_t__ delay_rts_before_send; } ;
struct TYPE_20__ {int line; int irq; TYPE_1__* dev; TYPE_2__ rs485; int uartclk; int (* rs485_config ) (TYPE_4__*,TYPE_2__*) ;int flags; int * ops; int iotype; int type; int mapbase; int * membase; } ;
struct lpuart_port {TYPE_4__ port; void* dma_rx_chan; void* dma_tx_chan; int * baud_clk; int * ipg_clk; int devtype; } ;
struct device_node {int dummy; } ;
struct TYPE_19__ {int cons; } ;


 int FUNC_0 (struct lpuart_port**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 int * FUNC_6 (TYPE_1__*,struct resource*) ;
 struct lpuart_port* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ,int ,int ,struct lpuart_port*) ;
 void* FUNC_9 (TYPE_1__*,char*) ;
 int VAR_11 ;
 int FUNC_10 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct lpuart_port*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_13 (struct lpuart_port*) ;
 int VAR_14 ;
 int FUNC_14 (struct lpuart_port*) ;
 int FUNC_15 (struct lpuart_port*) ;
 int VAR_15 ;
 scalar_t__ FUNC_16 (struct lpuart_port*) ;
 int VAR_16 ;
 struct lpuart_port** VAR_17 ;
 TYPE_3__ VAR_18 ;
 int FUNC_17 (struct device_node*,char*) ;
 struct of_device_id* FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,TYPE_4__*) ;
 int FUNC_22 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_23 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_19)
{
 const struct of_device_id *VAR_20 = FUNC_18(VAR_14,
          &VAR_19->dev);
 const struct lpuart_soc_data *VAR_21 = VAR_20->data;
 struct device_node *VAR_22 = VAR_19->dev.of_node;
 struct lpuart_port *VAR_23;
 struct resource *VAR_24;
 int VAR_25;

 VAR_23 = FUNC_7(&VAR_19->dev, sizeof(*VAR_23), VAR_3);
 if (!VAR_23)
  return -VAR_2;

 VAR_25 = FUNC_17(VAR_22, "serial");
 if (VAR_25 < 0) {
  VAR_25 = FUNC_10(&VAR_11, 0, VAR_9, VAR_3);
  if (VAR_25 < 0) {
   FUNC_3(&VAR_19->dev, "port line is full, add device failed\n");
   return VAR_25;
  }
 }
 if (VAR_25 >= FUNC_0(VAR_17)) {
  FUNC_3(&VAR_19->dev, "serial%d out of range\n", VAR_25);
  return -VAR_1;
 }
 VAR_23->port.line = VAR_25;
 VAR_24 = FUNC_20(VAR_19, VAR_4, 0);
 VAR_23->port.membase = FUNC_6(&VAR_19->dev, VAR_24);
 if (FUNC_1(VAR_23->port.membase))
  return FUNC_2(VAR_23->port.membase);

 VAR_23->port.membase += VAR_21->reg_off;
 VAR_23->port.mapbase = VAR_24->start;
 VAR_23->port.dev = &VAR_19->dev;
 VAR_23->port.type = VAR_7;
 VAR_23->devtype = VAR_21->devtype;
 VAR_25 = FUNC_19(VAR_19, 0);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23->port.irq = VAR_25;
 VAR_23->port.iotype = VAR_21->iotype;
 if (FUNC_16(VAR_23))
  VAR_23->port.ops = &VAR_13;
 else
  VAR_23->port.ops = &VAR_16;
 VAR_23->port.flags = VAR_10;

 VAR_23->port.rs485_config = FUNC_12;

 VAR_23->ipg_clk = FUNC_5(&VAR_19->dev, "ipg");
 if (FUNC_1(VAR_23->ipg_clk)) {
  VAR_25 = FUNC_2(VAR_23->ipg_clk);
  FUNC_3(&VAR_19->dev, "failed to get uart ipg clk: %d\n", VAR_25);
  return VAR_25;
 }

 VAR_23->baud_clk = ((void*)0);
 if (FUNC_11(VAR_23)) {
  VAR_23->baud_clk = FUNC_5(&VAR_19->dev, "baud");
  if (FUNC_1(VAR_23->baud_clk)) {
   VAR_25 = FUNC_2(VAR_23->baud_clk);
   FUNC_3(&VAR_19->dev, "failed to get uart baud clk: %d\n", VAR_25);
   return VAR_25;
  }
 }

 VAR_25 = FUNC_14(VAR_23);
 if (VAR_25)
  return VAR_25;
 VAR_23->port.uartclk = FUNC_15(VAR_23);

 VAR_17[VAR_23->port.line] = VAR_23;

 FUNC_21(VAR_19, &VAR_23->port);

 if (FUNC_16(VAR_23)) {
  VAR_18.cons = VAR_5;
  VAR_25 = FUNC_8(&VAR_19->dev, VAR_23->port.irq, VAR_12, 0,
     VAR_0, VAR_23);
 } else {
  VAR_18.cons = VAR_6;
  VAR_25 = FUNC_8(&VAR_19->dev, VAR_23->port.irq, VAR_15, 0,
     VAR_0, VAR_23);
 }

 if (VAR_25)
  goto failed_irq_request;

 VAR_25 = FUNC_22(&VAR_18, &VAR_23->port);
 if (VAR_25)
  goto failed_attach_port;

 FUNC_23(&VAR_19->dev, &VAR_23->port.rs485);

 if (VAR_23->port.rs485.flags & VAR_8)
  FUNC_3(&VAR_19->dev, "driver doesn't support RX during TX\n");

 if (VAR_23->port.rs485.delay_rts_before_send ||
     VAR_23->port.rs485.delay_rts_after_send)
  FUNC_3(&VAR_19->dev, "driver doesn't support RTS delays\n");

 FUNC_12(&VAR_23->port, &VAR_23->port.rs485);

 VAR_23->dma_tx_chan = FUNC_9(VAR_23->port.dev, "tx");
 if (!VAR_23->dma_tx_chan)
  FUNC_4(VAR_23->port.dev, "DMA tx channel request failed, "
    "operating without tx DMA\n");

 VAR_23->dma_rx_chan = FUNC_9(VAR_23->port.dev, "rx");
 if (!VAR_23->dma_rx_chan)
  FUNC_4(VAR_23->port.dev, "DMA rx channel request failed, "
    "operating without rx DMA\n");

 return 0;

failed_attach_port:
failed_irq_request:
 FUNC_13(VAR_23);
 return VAR_25;
}
