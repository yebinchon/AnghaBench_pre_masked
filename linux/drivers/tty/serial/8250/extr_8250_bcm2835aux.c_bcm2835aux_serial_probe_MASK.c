
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int regshift; int fifosize; int flags; int irq; int line; int uartclk; int membase; int iotype; int type; TYPE_3__* dev; int lock; } ;
struct TYPE_8__ {int capabilities; TYPE_1__ port; } ;
struct bcm2835aux_data {int line; int clk; TYPE_2__ uart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,struct resource*) ;
 struct bcm2835aux_data* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct bcm2835aux_data*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 struct bcm2835aux_data *VAR_13;
 struct resource *VAR_14;
 int VAR_15;


 VAR_13 = FUNC_7(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;


 FUNC_13(&VAR_13->uart.port.lock);
 VAR_13->uart.capabilities = VAR_5 | VAR_6;
 VAR_13->uart.port.dev = &VAR_12->dev;
 VAR_13->uart.port.regshift = 2;
 VAR_13->uart.port.type = VAR_4;
 VAR_13->uart.port.iotype = VAR_11;
 VAR_13->uart.port.fifosize = 8;
 VAR_13->uart.port.flags = VAR_9 |
    VAR_7 |
    VAR_8 |
    VAR_10;


 VAR_13->clk = FUNC_5(&VAR_12->dev, ((void*)0));
 VAR_15 = FUNC_0(VAR_13->clk);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "could not get clk: %d\n", VAR_15);
  return VAR_15;
 }


 VAR_15 = FUNC_9(VAR_12, 0);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_13->uart.port.irq = VAR_15;


 VAR_14 = FUNC_10(VAR_12, VAR_3, 0);
 if (!VAR_14) {
  FUNC_4(&VAR_12->dev, "memory resource not found");
  return -VAR_0;
 }
 VAR_13->uart.port.membase = FUNC_6(&VAR_12->dev, VAR_14);
 VAR_15 = FUNC_0(VAR_13->uart.port.membase);
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_8(VAR_12->dev.of_node, "serial");
 if (VAR_15 >= 0)
  VAR_13->uart.port.line = VAR_15;


 VAR_15 = FUNC_3(VAR_13->clk);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "unable to enable uart clock - %d\n",
   VAR_15);
  return VAR_15;
 }






 VAR_13->uart.port.uartclk = FUNC_2(VAR_13->clk) * 2;


 VAR_15 = FUNC_12(&VAR_13->uart);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_12->dev, "unable to register 8250 port - %d\n",
   VAR_15);
  goto dis_clk;
 }
 VAR_13->line = VAR_15;

 FUNC_11(VAR_12, VAR_13);

 return 0;

dis_clk:
 FUNC_1(VAR_13->clk);
 return VAR_15;
}
