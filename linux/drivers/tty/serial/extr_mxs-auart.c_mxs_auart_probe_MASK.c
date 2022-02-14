
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct platform_device {size_t id; int dev; TYPE_1__* id_entry; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_4__ {size_t line; int irq; int type; int uartclk; int fifosize; int iotype; int * ops; int membase; int mapbase; int * dev; } ;
struct mxs_auart_port {int clk_ahb; int clk; TYPE_2__ port; scalar_t__ mctrl_prev; int devtype; int * dev; } ;
struct TYPE_3__ {int driver_data; } ;


 size_t FUNC_0 (struct mxs_auart_port**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mxs_auart_port** VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *) ;
 struct mxs_auart_port* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,int ,struct mxs_auart_port*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct mxs_auart_port*) ;
 int VAR_11 ;
 int FUNC_10 (struct mxs_auart_port*) ;
 int FUNC_11 (struct mxs_auart_port*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct mxs_auart_port*) ;
 int FUNC_13 (struct mxs_auart_port*) ;
 int FUNC_14 (struct mxs_auart_port*,struct platform_device*) ;
 int FUNC_15 (struct mxs_auart_port*) ;
 int FUNC_16 (struct mxs_auart_port*,int ) ;
 struct of_device_id* FUNC_17 (int ,int *) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct mxs_auart_port*) ;
 int FUNC_21 (struct resource*) ;
 int FUNC_22 (struct mxs_auart_port*,struct platform_device*) ;
 int FUNC_23 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_14)
{
 const struct of_device_id *VAR_15 =
   FUNC_17(VAR_11, &VAR_14->dev);
 struct mxs_auart_port *VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;
 struct resource *VAR_20;

 VAR_16 = FUNC_6(&VAR_14->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->port.dev = &VAR_14->dev;
 VAR_16->dev = &VAR_14->dev;

 VAR_18 = FUNC_22(VAR_16, VAR_14);
 if (VAR_18 > 0)
  VAR_16->port.line = VAR_14->id < 0 ? 0 : VAR_14->id;
 else if (VAR_18 < 0)
  return VAR_18;
 if (VAR_16->port.line >= FUNC_0(VAR_10)) {
  FUNC_3(&VAR_14->dev, "serial%d out of range\n", VAR_16->port.line);
  return -VAR_0;
 }

 if (VAR_15) {
  VAR_14->id_entry = VAR_15->data;
  VAR_16->devtype = VAR_14->id_entry->driver_data;
 }

 VAR_18 = FUNC_14(VAR_16, VAR_14);
 if (VAR_18)
  return VAR_18;

 VAR_20 = FUNC_19(VAR_14, VAR_4, 0);
 if (!VAR_20) {
  VAR_18 = -VAR_2;
  goto out_disable_clks;
 }

 VAR_16->port.mapbase = VAR_20->start;
 VAR_16->port.membase = FUNC_8(VAR_20->start, FUNC_21(VAR_20));
 if (!VAR_16->port.membase) {
  VAR_18 = -VAR_1;
  goto out_disable_clks;
 }
 VAR_16->port.ops = &VAR_13;
 VAR_16->port.iotype = VAR_8;
 VAR_16->port.fifosize = VAR_5;
 VAR_16->port.uartclk = FUNC_2(VAR_16->clk);
 VAR_16->port.type = VAR_6;

 FUNC_15(VAR_16);

 VAR_16->mctrl_prev = 0;

 VAR_19 = FUNC_18(VAR_14, 0);
 if (VAR_19 < 0) {
  VAR_18 = VAR_19;
  goto out_disable_clks;
 }

 VAR_16->port.irq = VAR_19;
 VAR_18 = FUNC_7(&VAR_14->dev, VAR_19, VAR_12, 0,
          FUNC_5(&VAR_14->dev), VAR_16);
 if (VAR_18)
  goto out_disable_clks;

 FUNC_20(VAR_14, VAR_16);

 VAR_18 = FUNC_11(VAR_16, &VAR_14->dev);
 if (VAR_18) {
  FUNC_3(&VAR_14->dev, "Failed to initialize GPIOs.\n");
  goto out_disable_clks;
 }




 VAR_18 = FUNC_12(VAR_16);
 if (VAR_18)
  goto out_disable_clks;

 VAR_10[VAR_16->port.line] = VAR_16;

 FUNC_13(VAR_16);

 VAR_18 = FUNC_23(&VAR_9, &VAR_16->port);
 if (VAR_18)
  goto out_free_qpio_irq;


 if (FUNC_9(VAR_16)) {
  FUNC_4(&VAR_14->dev, "Found APPUART ASM9260\n");
 } else {
  VAR_17 = FUNC_16(VAR_16, VAR_7);
  FUNC_4(&VAR_14->dev, "Found APPUART %d.%d.%d\n",
    (VAR_17 >> 24) & 0xff,
    (VAR_17 >> 16) & 0xff, VAR_17 & 0xffff);
 }

 return 0;

out_free_qpio_irq:
 FUNC_10(VAR_16);
 VAR_10[VAR_14->id] = ((void*)0);

out_disable_clks:
 if (FUNC_9(VAR_16)) {
  FUNC_1(VAR_16->clk);
  FUNC_1(VAR_16->clk_ahb);
 }
 return VAR_18;
}
