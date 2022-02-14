
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ fifosize; int irq; } ;
struct uart_8250_port {scalar_t__ overrun_backoff_time_ms; TYPE_3__ port; int capabilities; scalar_t__ tx_loadsz; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_serial_info {unsigned int type; int line; int clk; } ;
typedef int port8250 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct of_serial_info*) ;
 struct of_serial_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct uart_8250_port*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct platform_device*,unsigned int,TYPE_3__*,struct of_serial_info*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,char*,scalar_t__*) ;
 int FUNC_9 (struct platform_device*,struct of_serial_info*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct of_serial_info *VAR_8;
 struct uart_8250_port VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_10 = (unsigned long)FUNC_5(&VAR_7->dev);
 if (VAR_10 == VAR_4)
  return -VAR_1;

 if (FUNC_7(VAR_7->dev.of_node, "used-by-rtas"))
  return -VAR_0;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_12 = FUNC_6(VAR_7, VAR_10, &VAR_9, VAR_8);
 if (VAR_12)
  goto err_free;

 if (VAR_9)
  VAR_9 = VAR_6;


 if ((FUNC_8(VAR_7->dev.of_node, "tx-threshold",
      &VAR_11) == 0) &&
     (VAR_11 < VAR_9))
  VAR_9 = VAR_9 - VAR_11;

 if (FUNC_7(VAR_7->dev.of_node, "auto-flow-control"))
  VAR_9 |= VAR_5;

 if (FUNC_8(VAR_7->dev.of_node,
   "overrun-throttle-ms",
   &VAR_9) != 0)
  VAR_9 = 0;

 VAR_12 = FUNC_12(&VAR_9);
 if (VAR_12 < 0)
  goto err_dispose;

 VAR_8->type = VAR_10;
 VAR_8->line = VAR_12;
 FUNC_9(VAR_7, VAR_8);
 return 0;
err_dispose:
 FUNC_1(VAR_9);
 FUNC_11(&VAR_7->dev);
 FUNC_10(&VAR_7->dev);
 FUNC_0(VAR_8->clk);
err_free:
 FUNC_2(VAR_8);
 return VAR_12;
}
