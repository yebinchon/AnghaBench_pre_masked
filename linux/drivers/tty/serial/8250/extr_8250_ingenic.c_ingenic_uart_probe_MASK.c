
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int regshift; int line; int uartclk; int membase; int fifosize; TYPE_2__* dev; int irq; int serial_in; int serial_out; int mapbase; int iotype; int type; int lock; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; int tx_loadsz; } ;
struct resource {int start; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct ingenic_uart_config* data; } ;
struct ingenic_uart_data {int line; void* clk_module; void* clk_baud; } ;
struct ingenic_uart_config {int tx_loadsz; int fifosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 struct ingenic_uart_data* FUNC_8 (TYPE_2__*,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ,char*) ;
 int VAR_16 ;
 struct of_device_id* FUNC_10 (int ,TYPE_2__*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ingenic_uart_data*) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (struct uart_8250_port*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_17)
{
 struct uart_8250_port VAR_18 = {};
 struct resource *VAR_19 = FUNC_11(VAR_17, VAR_6, 0);
 struct resource *VAR_20 = FUNC_11(VAR_17, VAR_5, 0);
 struct ingenic_uart_data *VAR_21;
 const struct ingenic_uart_config *VAR_22;
 const struct of_device_id *VAR_23;
 int VAR_24, VAR_25;

 VAR_23 = FUNC_10(VAR_16, &VAR_17->dev);
 if (!VAR_23) {
  FUNC_5(&VAR_17->dev, "Error: No device match found\n");
  return -VAR_1;
 }
 VAR_22 = VAR_23->data;

 if (!VAR_19 || !VAR_20) {
  FUNC_5(&VAR_17->dev, "no registers/irq defined\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_8(&VAR_17->dev, sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_2;

 FUNC_15(&VAR_18.port.lock);
 VAR_18.port.type = VAR_7;
 VAR_18.port.flags = VAR_12 | VAR_11 | VAR_10;
 VAR_18.port.iotype = VAR_13;
 VAR_18.port.mapbase = VAR_19->start;
 VAR_18.port.regshift = 2;
 VAR_18.port.serial_out = VAR_15;
 VAR_18.port.serial_in = VAR_14;
 VAR_18.port.irq = VAR_20->start;
 VAR_18.port.dev = &VAR_17->dev;
 VAR_18.port.fifosize = VAR_22->fifosize;
 VAR_18.tx_loadsz = VAR_22->tx_loadsz;
 VAR_18.capabilities = VAR_8 | VAR_9;


 VAR_25 = FUNC_9(VAR_17->dev.of_node, "serial");
 if (VAR_25 >= 0)
  VAR_18.port.line = VAR_25;

 VAR_18.port.membase = FUNC_7(&VAR_17->dev, VAR_19->start,
      FUNC_13(VAR_19));
 if (!VAR_18.port.membase)
  return -VAR_2;

 VAR_21->clk_module = FUNC_6(&VAR_17->dev, "module");
 if (FUNC_0(VAR_21->clk_module)) {
  VAR_24 = FUNC_1(VAR_21->clk_module);
  if (VAR_24 != -VAR_3)
   FUNC_5(&VAR_17->dev,
    "unable to get module clock: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_21->clk_baud = FUNC_6(&VAR_17->dev, "baud");
 if (FUNC_0(VAR_21->clk_baud)) {
  VAR_24 = FUNC_1(VAR_21->clk_baud);
  if (VAR_24 != -VAR_3)
   FUNC_5(&VAR_17->dev,
    "unable to get baud clock: %d\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_4(VAR_21->clk_module);
 if (VAR_24) {
  FUNC_5(&VAR_17->dev, "could not enable module clock: %d\n", VAR_24);
  goto out;
 }

 VAR_24 = FUNC_4(VAR_21->clk_baud);
 if (VAR_24) {
  FUNC_5(&VAR_17->dev, "could not enable baud clock: %d\n", VAR_24);
  goto out_disable_moduleclk;
 }
 VAR_18.port.uartclk = FUNC_3(VAR_21->clk_baud);

 VAR_21->line = FUNC_14(&VAR_18);
 if (VAR_21->line < 0) {
  VAR_24 = VAR_21->line;
  goto out_disable_baudclk;
 }

 FUNC_12(VAR_17, VAR_21);
 return 0;

out_disable_baudclk:
 FUNC_2(VAR_21->clk_baud);
out_disable_moduleclk:
 FUNC_2(VAR_21->clk_module);
out:
 return VAR_24;
}
