
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {unsigned int id; int dev; } ;
struct TYPE_2__ {int irq; int fifosize; unsigned int line; int flags; int * ops; int iotype; int type; int mapbase; int * dev; } ;
struct efm32_uart_pdata {int dummy; } ;
struct efm32_uart_port {int txirq; TYPE_1__ port; struct efm32_uart_pdata pdata; } ;


 unsigned int FUNC_0 (struct efm32_uart_port**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,...) ;
 struct efm32_uart_pdata* FUNC_2 (int *) ;
 int VAR_8 ;
 struct efm32_uart_port** VAR_9 ;
 int FUNC_3 (struct platform_device*,struct efm32_uart_port*) ;
 int VAR_10 ;
 int FUNC_4 (struct efm32_uart_port*) ;
 struct efm32_uart_port* FUNC_5 (int,int ) ;
 int FUNC_6 (struct platform_device*,int) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct efm32_uart_port*) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_11)
{
 struct efm32_uart_port *VAR_12;
 struct resource *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  FUNC_1(&VAR_11->dev, "failed to allocate private data\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_7(VAR_11, VAR_4, 0);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  FUNC_1(&VAR_11->dev, "failed to determine base address\n");
  goto err_get_base;
 }

 if (FUNC_9(VAR_13) < 60) {
  VAR_15 = -VAR_0;
  FUNC_1(&VAR_11->dev, "memory resource too small\n");
  goto err_too_small;
 }

 VAR_15 = FUNC_6(VAR_11, 0);
 if (VAR_15 <= 0) {
  FUNC_1(&VAR_11->dev, "failed to get rx irq\n");
  goto err_get_rxirq;
 }

 VAR_12->port.irq = VAR_15;

 VAR_15 = FUNC_6(VAR_11, 1);
 if (VAR_15 <= 0)
  VAR_15 = VAR_12->port.irq + 1;

 VAR_12->txirq = VAR_15;

 VAR_12->port.dev = &VAR_11->dev;
 VAR_12->port.mapbase = VAR_13->start;
 VAR_12->port.type = VAR_5;
 VAR_12->port.iotype = VAR_7;
 VAR_12->port.fifosize = 2;
 VAR_12->port.ops = &VAR_8;
 VAR_12->port.flags = VAR_6;

 VAR_15 = FUNC_3(VAR_11, VAR_12);
 if (VAR_15 > 0) {

  const struct efm32_uart_pdata *VAR_16 = FUNC_2(&VAR_11->dev);

  VAR_12->port.line = VAR_11->id;

  if (VAR_16)
   VAR_12->pdata = *VAR_16;
 } else if (VAR_15 < 0)
  goto err_probe_dt;

 VAR_14 = VAR_12->port.line;

 if (VAR_14 >= 0 && VAR_14 < FUNC_0(VAR_9))
  VAR_9[VAR_14] = VAR_12;

 VAR_15 = FUNC_10(&VAR_10, &VAR_12->port);
 if (VAR_15) {
  FUNC_1(&VAR_11->dev, "failed to add port: %d\n", VAR_15);

  if (VAR_14 >= 0 && VAR_14 < FUNC_0(VAR_9))
   VAR_9[VAR_14] = ((void*)0);
err_probe_dt:
err_get_rxirq:
err_too_small:
err_get_base:
  FUNC_4(VAR_12);
 } else {
  FUNC_8(VAR_11, VAR_12);
  FUNC_1(&VAR_11->dev, "\\o/\n");
 }

 return VAR_15;
}
