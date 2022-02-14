
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int irq; TYPE_2__* dev; struct uart_driver* private_data; int mapbase; } ;
struct uart_driver {int dummy; } ;
struct resource {int start; } ;
struct TYPE_5__ {struct qcom_geni_serial_port* clk; int wrapper; TYPE_2__* dev; } ;
struct qcom_geni_serial_port {int handle_rx; int tx_fifo_width; void* rx_fifo_depth; void* tx_fifo_depth; TYPE_1__ se; struct uart_port uport; } ;
struct TYPE_6__ {int parent; int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qcom_geni_serial_port*) ;
 int FUNC_1 (struct qcom_geni_serial_port*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 struct qcom_geni_serial_port* FUNC_5 (TYPE_2__*,char*) ;
 struct qcom_geni_serial_port* FUNC_6 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct qcom_geni_serial_port*) ;
 struct uart_driver VAR_8 ;
 struct uart_driver VAR_9 ;
 int FUNC_12 (struct uart_driver*,struct uart_port*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = -1;
 struct qcom_geni_serial_port *VAR_13;
 struct uart_port *VAR_14;
 struct resource *VAR_15;
 int VAR_16;
 bool VAR_17 = 0;
 struct uart_driver *VAR_18;

 if (FUNC_8(VAR_10->dev.of_node, "qcom,geni-debug-uart"))
  VAR_17 = 1;

 if (VAR_17) {
  VAR_18 = &VAR_8;
  VAR_12 = FUNC_7(VAR_10->dev.of_node, "serial");
 } else {
  VAR_18 = &VAR_9;
  VAR_12 = FUNC_7(VAR_10->dev.of_node, "hsuart");
 }

 VAR_13 = FUNC_6(VAR_12, VAR_17);
 if (FUNC_0(VAR_13)) {
  FUNC_2(&VAR_10->dev, "Invalid line %d\n", VAR_12);
  return FUNC_1(VAR_13);
 }

 VAR_14 = &VAR_13->uport;

 if (VAR_14->private_data)
  return -VAR_3;

 VAR_14->dev = &VAR_10->dev;
 VAR_13->se.dev = &VAR_10->dev;
 VAR_13->se.wrapper = FUNC_3(VAR_10->dev.parent);
 VAR_13->se.clk = FUNC_5(&VAR_10->dev, "se");
 if (FUNC_0(VAR_13->se.clk)) {
  VAR_11 = FUNC_1(VAR_13->se.clk);
  FUNC_2(&VAR_10->dev, "Err getting SE Core clk %d\n", VAR_11);
  return VAR_11;
 }

 VAR_15 = FUNC_10(VAR_10, VAR_4, 0);
 if (!VAR_15)
  return -VAR_2;
 VAR_14->mapbase = VAR_15->start;

 VAR_13->tx_fifo_depth = VAR_0;
 VAR_13->rx_fifo_depth = VAR_0;
 VAR_13->tx_fifo_width = VAR_1;

 VAR_16 = FUNC_9(VAR_10, 0);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->irq = VAR_16;

 VAR_14->private_data = VAR_18;
 FUNC_11(VAR_10, VAR_13);
 VAR_13->handle_rx = VAR_17 ? VAR_6 : VAR_7;
 if (!VAR_17)
  FUNC_4(VAR_14->dev, &VAR_5);
 return FUNC_12(VAR_18, VAR_14);
}
