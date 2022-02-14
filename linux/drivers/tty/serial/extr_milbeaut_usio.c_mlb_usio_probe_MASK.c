
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int irq; int fifosize; int flags; int line; TYPE_1__* dev; int * ops; int iotype; int uartclk; int membase; void* private_data; } ;
struct resource {int start; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 struct clk* FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int** VAR_7 ;
 int VAR_8 ;
 struct uart_port* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (struct platform_device*,char*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 struct clk *VAR_12 = FUNC_6(&VAR_11->dev, ((void*)0));
 struct uart_port *VAR_13;
 struct resource *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 if (FUNC_0(VAR_12)) {
  FUNC_5(&VAR_11->dev, "Missing clock\n");
  return FUNC_1(VAR_12);
 }
 VAR_16 = FUNC_4(VAR_12);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "Clock enable failed: %d\n", VAR_16);
  return VAR_16;
 }
 FUNC_8(VAR_11->dev.of_node, "index", &VAR_15);
 VAR_13 = &VAR_9[VAR_15];

 VAR_13->private_data = (void *)VAR_12;
 VAR_14 = FUNC_10(VAR_11, VAR_1, 0);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(&VAR_11->dev, "Missing regs\n");
  VAR_16 = -VAR_0;
  goto failed;
 }
 VAR_13->membase = FUNC_7(&VAR_11->dev, VAR_14->start,
    FUNC_11(VAR_14));

 VAR_16 = FUNC_9(VAR_11, "rx");
 VAR_7[VAR_15][VAR_2] = VAR_16;

 VAR_16 = FUNC_9(VAR_11, "tx");
 VAR_7[VAR_15][VAR_3] = VAR_16;

 VAR_13->irq = VAR_7[VAR_15][VAR_2];
 VAR_13->uartclk = FUNC_3(VAR_12);
 VAR_13->fifosize = 128;
 VAR_13->iotype = VAR_6;
 VAR_13->flags = VAR_4 | VAR_5;
 VAR_13->line = VAR_15;
 VAR_13->ops = &VAR_8;
 VAR_13->dev = &VAR_11->dev;

 VAR_16 = FUNC_12(&VAR_10, VAR_13);
 if (VAR_16) {
  FUNC_5(&VAR_11->dev, "Adding port failed: %d\n", VAR_16);
  goto failed;
 }
 return 0;

failed:
 FUNC_2(VAR_12);

 return VAR_16;
}
