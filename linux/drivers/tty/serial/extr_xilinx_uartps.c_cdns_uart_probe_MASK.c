
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct uart_port {int irq; TYPE_2__* dev; struct cdns_uart* private_data; int uartclk; int mapbase; int fifosize; int * ops; int flags; int iotype; int type; int lock; } ;
struct uart_driver {char* driver_name; int minor; int nr; TYPE_1__* tty_driver; struct console* cons; int major; int dev_name; int owner; } ;
struct resource {int start; } ;
struct TYPE_19__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct cdns_platform_data* data; } ;
struct console {int index; int flags; struct uart_driver* data; int setup; int device; int write; int name; } ;
struct TYPE_17__ {int notifier_call; } ;
struct cdns_uart {scalar_t__ id; struct uart_driver* cdns_uart_driver; void* pclk; void* uartclk; TYPE_15__ clk_rate_change_nb; int cts_override; struct uart_port* port; int quirks; } ;
struct cdns_platform_data {int quirks; } ;
struct TYPE_18__ {int name_base; int major; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (void*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (struct platform_device*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,TYPE_15__*) ;
 int FUNC_7 (void*,TYPE_15__*) ;
 int FUNC_8 (void*) ;
 struct uart_port* VAR_24 ;
 int FUNC_9 (TYPE_2__*,char*,...) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 void* FUNC_12 (TYPE_2__*,char*) ;
 char* FUNC_13 (TYPE_2__*,int ,char*,int ,int) ;
 void* FUNC_14 (TYPE_2__*,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct of_device_id* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct uart_port*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*,int ) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ,int ,int) ;
 int FUNC_31 (struct uart_driver*,struct uart_port*) ;
 int VAR_25 ;
 int FUNC_32 (struct uart_driver*) ;
 int FUNC_33 (struct uart_driver*) ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_27)
{
 int VAR_28, VAR_29;
 struct uart_port *VAR_30;
 struct resource *VAR_31;
 struct cdns_uart *VAR_32;
 const struct of_device_id *VAR_33;
 struct uart_driver *VAR_34;
 char *VAR_35;




 VAR_32 = FUNC_14(&VAR_27->dev, sizeof(*VAR_32),
   VAR_9);
 if (!VAR_32)
  return -VAR_6;
 VAR_30 = FUNC_14(&VAR_27->dev, sizeof(*VAR_30), VAR_9);
 if (!VAR_30)
  return -VAR_6;

 VAR_34 = FUNC_14(&VAR_27->dev,
          sizeof(*VAR_34),
          VAR_9);
 if (!VAR_34)
  return -VAR_6;

 VAR_32->id = FUNC_2(VAR_27);
 if (VAR_32->id < 0)
  return VAR_32->id;


 VAR_35 = FUNC_13(&VAR_27->dev, VAR_9, "%s%d",
         VAR_1, VAR_32->id);
 if (!VAR_35) {
  VAR_28 = -VAR_6;
  goto err_out_id;
 }

 VAR_34->owner = VAR_13;
 VAR_34->driver_name = VAR_35;
 VAR_34->dev_name = VAR_2;
 VAR_34->major = VAR_26;
 VAR_34->minor = VAR_32->id;
 VAR_34->nr = 1;
 VAR_28 = FUNC_32(VAR_34);
 if (VAR_28 < 0) {
  FUNC_9(&VAR_27->dev, "Failed to register driver\n");
  goto err_out_id;
 }

 VAR_32->cdns_uart_driver = VAR_34;






 VAR_34->tty_driver->name_base = VAR_32->id;

 VAR_33 = FUNC_17(VAR_22, VAR_27->dev.of_node);
 if (VAR_33 && VAR_33->data) {
  const struct cdns_platform_data *VAR_36 = VAR_33->data;

  VAR_32->quirks = VAR_36->quirks;
 }

 VAR_32->pclk = FUNC_12(&VAR_27->dev, "pclk");
 if (FUNC_1(VAR_32->pclk) == -VAR_8) {
  VAR_28 = FUNC_1(VAR_32->pclk);
  goto err_out_unregister_driver;
 }

 if (FUNC_0(VAR_32->pclk)) {
  VAR_32->pclk = FUNC_12(&VAR_27->dev, "aper_clk");
  if (FUNC_0(VAR_32->pclk)) {
   VAR_28 = FUNC_1(VAR_32->pclk);
   goto err_out_unregister_driver;
  }
  FUNC_9(&VAR_27->dev, "clock name 'aper_clk' is deprecated.\n");
 }

 VAR_32->uartclk = FUNC_12(&VAR_27->dev, "uart_clk");
 if (FUNC_1(VAR_32->uartclk) == -VAR_8) {
  VAR_28 = FUNC_1(VAR_32->uartclk);
  goto err_out_unregister_driver;
 }

 if (FUNC_0(VAR_32->uartclk)) {
  VAR_32->uartclk = FUNC_12(&VAR_27->dev, "ref_clk");
  if (FUNC_0(VAR_32->uartclk)) {
   VAR_28 = FUNC_1(VAR_32->uartclk);
   goto err_out_unregister_driver;
  }
  FUNC_9(&VAR_27->dev, "clock name 'ref_clk' is deprecated.\n");
 }

 VAR_28 = FUNC_8(VAR_32->pclk);
 if (VAR_28) {
  FUNC_9(&VAR_27->dev, "Unable to enable pclk clock.\n");
  goto err_out_unregister_driver;
 }
 VAR_28 = FUNC_8(VAR_32->uartclk);
 if (VAR_28) {
  FUNC_9(&VAR_27->dev, "Unable to enable device clock.\n");
  goto err_out_clk_dis_pclk;
 }

 VAR_31 = FUNC_20(VAR_27, VAR_10, 0);
 if (!VAR_31) {
  VAR_28 = -VAR_5;
  goto err_out_clk_disable;
 }

 VAR_29 = FUNC_19(VAR_27, 0);
 if (VAR_29 <= 0) {
  VAR_28 = -VAR_7;
  goto err_out_clk_disable;
 }
 FUNC_29(&VAR_30->lock);
 VAR_30->type = VAR_12;
 VAR_30->iotype = VAR_16;
 VAR_30->flags = VAR_15;
 VAR_30->ops = &VAR_23;
 VAR_30->fifosize = VAR_0;






 VAR_30->mapbase = VAR_31->start;
 VAR_30->irq = VAR_29;
 VAR_30->dev = &VAR_27->dev;
 VAR_30->uartclk = FUNC_5(VAR_32->uartclk);
 VAR_30->private_data = VAR_32;
 VAR_32->port = VAR_30;
 FUNC_21(VAR_27, VAR_30);

 FUNC_28(&VAR_27->dev);
 FUNC_26(&VAR_27->dev, VAR_14);
 FUNC_25(&VAR_27->dev);
 FUNC_24(&VAR_27->dev);
 FUNC_11(VAR_30->dev, 1);
 VAR_28 = FUNC_31(VAR_34, VAR_30);
 if (VAR_28) {
  FUNC_9(&VAR_27->dev,
   "uart_add_one_port() failed; err=%i\n", VAR_28);
  goto err_out_pm_disable;
 }
 VAR_26 = VAR_34->tty_driver->major;
 VAR_32->cts_override = FUNC_18(VAR_27->dev.of_node,
            "cts-override");
 return 0;

err_out_pm_disable:
 FUNC_22(&VAR_27->dev);
 FUNC_27(&VAR_27->dev);
 FUNC_23(&VAR_27->dev);




err_out_clk_disable:
 FUNC_4(VAR_32->uartclk);
err_out_clk_dis_pclk:
 FUNC_4(VAR_32->pclk);
err_out_unregister_driver:
 FUNC_33(VAR_32->cdns_uart_driver);
err_out_id:
 FUNC_15(&VAR_18);
 if (VAR_32->id < VAR_11)
  FUNC_3(VAR_32->id, VAR_17);
 FUNC_16(&VAR_18);
 return VAR_28;
}
