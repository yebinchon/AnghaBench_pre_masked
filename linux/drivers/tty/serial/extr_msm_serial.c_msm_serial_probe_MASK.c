
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int uartclk; int irq; int mapbase; TYPE_1__* dev; } ;
struct resource {int start; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct msm_port {unsigned long is_uartdm; void* clk; void* pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 struct msm_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 void* FUNC_6 (TYPE_1__*,char*) ;
 struct uart_port* FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (scalar_t__,char*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct uart_port*) ;
 int FUNC_13 (int *,struct uart_port*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct msm_port *VAR_7;
 struct resource *VAR_8;
 struct uart_port *VAR_9;
 const struct of_device_id *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6->dev.of_node)
  VAR_12 = FUNC_8(VAR_6->dev.of_node, "serial");
 else
  VAR_12 = VAR_6->id;

 if (VAR_12 < 0)
  VAR_12 = FUNC_3(&VAR_4) - 1;

 if (FUNC_14(VAR_12 < 0 || VAR_12 >= VAR_2))
  return -VAR_0;

 FUNC_5(&VAR_6->dev, "msm_serial: detected port #%d\n", VAR_12);

 VAR_9 = FUNC_7(VAR_12);
 VAR_9->dev = &VAR_6->dev;
 VAR_7 = FUNC_2(VAR_9);

 VAR_10 = FUNC_9(VAR_5, &VAR_6->dev);
 if (VAR_10)
  VAR_7->is_uartdm = (unsigned long)VAR_10->data;
 else
  VAR_7->is_uartdm = 0;

 VAR_7->clk = FUNC_6(&VAR_6->dev, "core");
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 if (VAR_7->is_uartdm) {
  VAR_7->pclk = FUNC_6(&VAR_6->dev, "iface");
  if (FUNC_0(VAR_7->pclk))
   return FUNC_1(VAR_7->pclk);
 }

 VAR_9->uartclk = FUNC_4(VAR_7->clk);
 FUNC_5(&VAR_6->dev, "uartclk = %d\n", VAR_9->uartclk);

 VAR_8 = FUNC_11(VAR_6, VAR_1, 0);
 if (FUNC_14(!VAR_8))
  return -VAR_0;
 VAR_9->mapbase = VAR_8->start;

 VAR_11 = FUNC_10(VAR_6, 0);
 if (FUNC_14(VAR_11 < 0))
  return -VAR_0;
 VAR_9->irq = VAR_11;

 FUNC_12(VAR_6, VAR_9);

 return FUNC_13(&VAR_3, VAR_9);
}
