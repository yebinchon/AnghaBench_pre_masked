
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fifosize; int line; int flags; int uartclk; TYPE_2__* dev; int * ops; int irq; int mapbase; int iotype; int type; int membase; } ;
struct vt8500_port {unsigned int vt8500_uart_flags; int clk_predivisor; TYPE_1__ uart; int name; int clk; } ;
struct resource {int start; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct of_device_id {unsigned int* data; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 struct vt8500_port* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,int ) ;
 struct of_device_id* FUNC_11 (int ,TYPE_2__*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct vt8500_port*) ;
 int FUNC_14 (int ,int,char*,int) ;
 scalar_t__ FUNC_15 (int,int ) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct vt8500_port** VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_19)
{
 struct vt8500_port *VAR_20;
 struct resource *VAR_21, *VAR_22;
 struct device_node *VAR_23 = VAR_19->dev.of_node;
 const struct of_device_id *VAR_24;
 const unsigned int *VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_24 = FUNC_11(VAR_18, &VAR_19->dev);
 if (!VAR_24)
  return -VAR_1;

 VAR_25 = VAR_24->data;

 VAR_21 = FUNC_12(VAR_19, VAR_6, 0);
 VAR_22 = FUNC_12(VAR_19, VAR_5, 0);
 if (!VAR_21 || !VAR_22)
  return -VAR_2;

 if (VAR_23) {
  VAR_27 = FUNC_9(VAR_23, "serial");
  if (VAR_27 >= VAR_11)
   VAR_27 = -1;
 } else {
  VAR_27 = -1;
 }

 if (VAR_27 < 0) {

  VAR_27 = FUNC_8(VAR_14,
        VAR_11);
 }

 if (VAR_27 >= VAR_11)
  return -VAR_2;


 if (FUNC_15(VAR_27, VAR_14)) {

  return -VAR_0;
 }

 VAR_20 = FUNC_7(&VAR_19->dev, sizeof(struct vt8500_port),
       VAR_4);
 if (!VAR_20)
  return -VAR_3;

 VAR_20->uart.membase = FUNC_6(&VAR_19->dev, VAR_21);
 if (FUNC_1(VAR_20->uart.membase))
  return FUNC_2(VAR_20->uart.membase);

 VAR_20->clk = FUNC_10(VAR_19->dev.of_node, 0);
 if (FUNC_1(VAR_20->clk)) {
  FUNC_5(&VAR_19->dev, "failed to get clock\n");
  return -VAR_1;
 }

 VAR_26 = FUNC_4(VAR_20->clk);
 if (VAR_26) {
  FUNC_5(&VAR_19->dev, "failed to enable clock\n");
  return VAR_26;
 }

 VAR_20->vt8500_uart_flags = *VAR_25;
 VAR_20->clk_predivisor = FUNC_0(
     FUNC_3(VAR_20->clk),
     VAR_13
          );
 VAR_20->uart.type = VAR_7;
 VAR_20->uart.iotype = VAR_10;
 VAR_20->uart.mapbase = VAR_21->start;
 VAR_20->uart.irq = VAR_22->start;
 VAR_20->uart.fifosize = 16;
 VAR_20->uart.ops = &VAR_16;
 VAR_20->uart.line = VAR_27;
 VAR_20->uart.dev = &VAR_19->dev;
 VAR_20->uart.flags = VAR_9 | VAR_8;


 VAR_20->uart.uartclk = 16 * FUNC_3(VAR_20->clk) /
     VAR_20->clk_predivisor /
     VAR_12;

 FUNC_14(VAR_20->name, sizeof(VAR_20->name),
   "VT8500 UART%d", VAR_19->id);

 VAR_17[VAR_27] = VAR_20;

 FUNC_16(&VAR_15, &VAR_20->uart);

 FUNC_13(VAR_19, VAR_20);

 return 0;
}
