
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int irq; int uartclk; int lock; int mapbase; int membase; int rs485_config; int fifosize; int * dev; int * ops; int flags; int iotype; } ;
struct stm32_port {int wakeirq; int clk; struct uart_port port; TYPE_2__* info; int fifoen; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int has_fifo; scalar_t__ has_wakeup; int fifosize; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 void* FUNC_7 (struct platform_device*,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (struct uart_port*,struct platform_device*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct stm32_port *VAR_8,
     struct platform_device *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_8->port;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10->iotype = VAR_5;
 VAR_10->flags = VAR_4;
 VAR_10->ops = &VAR_7;
 VAR_10->dev = &VAR_9->dev;
 VAR_10->fifosize = VAR_8->info->cfg.fifosize;

 VAR_12 = FUNC_7(VAR_9, 0);
 if (VAR_12 <= 0)
  return VAR_12 ? : -VAR_1;
 VAR_10->irq = VAR_12;

 VAR_10->rs485_config = VAR_6;

 FUNC_10(VAR_10, VAR_9);

 if (VAR_8->info->cfg.has_wakeup) {
  VAR_8->wakeirq = FUNC_7(VAR_9, 1);
  if (VAR_8->wakeirq <= 0 && VAR_8->wakeirq != -VAR_2)
   return VAR_8->wakeirq ? : -VAR_1;
 }

 VAR_8->fifoen = VAR_8->info->cfg.has_fifo;

 VAR_11 = FUNC_8(VAR_9, VAR_3, 0);
 VAR_10->membase = FUNC_6(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->membase))
  return FUNC_1(VAR_10->membase);
 VAR_10->mapbase = VAR_11->start;

 FUNC_9(&VAR_10->lock);

 VAR_8->clk = FUNC_5(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);


 VAR_12 = FUNC_4(VAR_8->clk);
 if (VAR_12)
  return VAR_12;

 VAR_8->port.uartclk = FUNC_3(VAR_8->clk);
 if (!VAR_8->port.uartclk) {
  FUNC_2(VAR_8->clk);
  VAR_12 = -VAR_0;
 }

 return VAR_12;
}
