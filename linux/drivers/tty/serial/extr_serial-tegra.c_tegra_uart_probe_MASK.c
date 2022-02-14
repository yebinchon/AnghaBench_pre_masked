
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; int irq; int regshift; int iotype; int membase; int mapbase; int type; int * ops; int * dev; } ;
struct tegra_uart_port {int rst; int uart_clk; struct tegra_uart_chip_data const* cdata; struct uart_port uport; } ;
struct tegra_uart_chip_data {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct of_device_id {struct tegra_uart_chip_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct resource*) ;
 struct tegra_uart_port* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,char*) ;
 struct of_device_id* FUNC_7 (int ,int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct tegra_uart_port*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct platform_device*,struct tegra_uart_port*) ;
 int FUNC_12 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct tegra_uart_port *VAR_10;
 struct uart_port *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 const struct tegra_uart_chip_data *VAR_14;
 const struct of_device_id *VAR_15;

 VAR_15 = FUNC_7(VAR_7, &VAR_9->dev);
 if (!VAR_15) {
  FUNC_2(&VAR_9->dev, "Error: No device match found\n");
  return -VAR_0;
 }
 VAR_14 = VAR_15->data;

 VAR_10 = FUNC_5(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_2(&VAR_9->dev, "Failed to allocate memory for tup\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_11(VAR_9, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11 = &VAR_10->uport;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->ops = &VAR_8;
 VAR_11->type = VAR_4;
 VAR_11->fifosize = 32;
 VAR_10->cdata = VAR_14;

 FUNC_10(VAR_9, VAR_10);
 VAR_12 = FUNC_9(VAR_9, VAR_3, 0);
 if (!VAR_12) {
  FUNC_2(&VAR_9->dev, "No IO memory resource\n");
  return -VAR_0;
 }

 VAR_11->mapbase = VAR_12->start;
 VAR_11->membase = FUNC_4(&VAR_9->dev, VAR_12);
 if (FUNC_0(VAR_11->membase))
  return FUNC_1(VAR_11->membase);

 VAR_10->uart_clk = FUNC_3(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_10->uart_clk)) {
  FUNC_2(&VAR_9->dev, "Couldn't get the clock\n");
  return FUNC_1(VAR_10->uart_clk);
 }

 VAR_10->rst = FUNC_6(&VAR_9->dev, "serial");
 if (FUNC_0(VAR_10->rst)) {
  FUNC_2(&VAR_9->dev, "Couldn't get the reset\n");
  return FUNC_1(VAR_10->rst);
 }

 VAR_11->iotype = VAR_5;
 VAR_13 = FUNC_8(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_11->irq = VAR_13;
 VAR_11->regshift = 2;
 VAR_13 = FUNC_12(&VAR_6, VAR_11);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_9->dev, "Failed to add uart port, err %d\n", VAR_13);
  return VAR_13;
 }
 return VAR_13;
}
