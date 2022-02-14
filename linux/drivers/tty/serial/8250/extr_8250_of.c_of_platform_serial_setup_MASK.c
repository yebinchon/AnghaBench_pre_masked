
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int custom_divisor; int flags; int iobase; int mapbase; int regshift; int fifosize; int line; int irq; int type; int uartclk; int handle_irq; void* iotype; int handle_break; TYPE_1__* dev; int irqflags; int mapsize; int lock; } ;
struct resource {int start; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_serial_info {int clk; int rst; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int VAR_17 ;
 int FUNC_9 (struct uart_port*,int ,int) ;
 int FUNC_10 (struct device_node*,int ,struct resource*) ;
 int FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct device_node*,int ) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*,int*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct resource*) ;
 scalar_t__ FUNC_23 (struct resource*) ;
 int FUNC_24 (int *) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_19,
   int VAR_20, struct uart_port *VAR_21,
   struct of_serial_info *VAR_22)
{
 struct resource VAR_23;
 struct device_node *VAR_24 = VAR_19->dev.of_node;
 u32 VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;

 FUNC_9(VAR_21, 0, sizeof *VAR_21);

 FUNC_18(&VAR_19->dev);
 FUNC_19(&VAR_19->dev);

 if (FUNC_16(VAR_24, "clock-frequency", &VAR_25)) {


  VAR_22->clk = FUNC_7(&VAR_19->dev, ((void*)0));
  if (FUNC_1(VAR_22->clk)) {
   VAR_28 = FUNC_2(VAR_22->clk);
   if (VAR_28 != -VAR_2)
    FUNC_6(&VAR_19->dev,
      "failed to get clock: %d\n", VAR_28);
   goto err_pmruntime;
  }

  VAR_28 = FUNC_5(VAR_22->clk);
  if (VAR_28 < 0)
   goto err_pmruntime;

  VAR_25 = FUNC_4(VAR_22->clk);
 }

 if (FUNC_16(VAR_24, "current-speed", &VAR_26) == 0)
  VAR_21->custom_divisor = VAR_25 / (16 * VAR_26);

 VAR_28 = FUNC_10(VAR_24, 0, &VAR_23);
 if (VAR_28) {
  FUNC_6(&VAR_19->dev, "invalid address\n");
  goto err_unprepare;
 }

 VAR_21->flags = VAR_9 | VAR_5 | VAR_6 |
      VAR_7;
 FUNC_24(&VAR_21->lock);

 if (FUNC_23(&VAR_23) == VAR_3) {
  VAR_21->iotype = VAR_16;
  VAR_21->iobase = VAR_23.start;
 } else {
  VAR_21->mapbase = VAR_23.start;
  VAR_21->mapsize = FUNC_22(&VAR_23);


  if (FUNC_16(VAR_24, "reg-offset", &VAR_27) == 0)
   VAR_21->mapbase += VAR_27;

  VAR_21->iotype = VAR_12;
  if (FUNC_16(VAR_24, "reg-io-width", &VAR_27) == 0) {
   switch (VAR_27) {
   case 1:
    VAR_21->iotype = VAR_12;
    break;
   case 2:
    VAR_21->iotype = VAR_13;
    break;
   case 4:
    VAR_21->iotype = FUNC_12(VAR_24) ?
            VAR_15 : VAR_14;
    break;
   default:
    FUNC_6(&VAR_19->dev, "unsupported reg-io-width (%d)\n",
      VAR_27);
    VAR_28 = -VAR_1;
    goto err_unprepare;
   }
  }
  VAR_21->flags |= VAR_8;
 }


 if (FUNC_13(VAR_24, "mrvl,mmp-uart"))
  VAR_21->regshift = 2;


 if (FUNC_16(VAR_24, "reg-shift", &VAR_27) == 0)
  VAR_21->regshift = VAR_27;


 if (FUNC_16(VAR_24, "fifo-size", &VAR_27) == 0)
  VAR_21->fifosize = VAR_27;


 VAR_28 = FUNC_11(VAR_24, "serial");
 if (VAR_28 >= 0)
  VAR_21->line = VAR_28;

 VAR_29 = FUNC_14(VAR_24, 0);
 if (VAR_29 < 0) {
  if (VAR_29 == -VAR_2) {
   VAR_28 = -VAR_2;
   goto err_unprepare;
  }

  VAR_29 = 0;
 }

 VAR_21->irq = VAR_29;

 VAR_22->rst = FUNC_8(&VAR_19->dev, ((void*)0));
 if (FUNC_1(VAR_22->rst)) {
  VAR_28 = FUNC_2(VAR_22->rst);
  goto err_unprepare;
 }

 VAR_28 = FUNC_21(VAR_22->rst);
 if (VAR_28)
  goto err_unprepare;

 VAR_21->type = VAR_20;
 VAR_21->uartclk = VAR_25;
 VAR_21->irqflags |= VAR_4;

 if (FUNC_15(VAR_24, "no-loopback-test"))
  VAR_21->flags |= VAR_10;

 VAR_21->dev = &VAR_19->dev;

 switch (VAR_20) {
 case 128:
  VAR_21->handle_break = VAR_18;
  break;

 case 129:
  VAR_21->iotype = VAR_11;
  break;
 }

 if (FUNC_0(VAR_0) &&
     (FUNC_13(VAR_24, "fsl,ns16550") ||
      FUNC_13(VAR_24, "fsl,16550-FIFO64")))
  VAR_21->handle_irq = VAR_17;

 return 0;
err_unprepare:
 FUNC_3(VAR_22->clk);
err_pmruntime:
 FUNC_20(&VAR_19->dev);
 FUNC_17(&VAR_19->dev);
 return VAR_28;
}
