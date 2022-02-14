
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; int uartclk; int fifosize; int flags; int line; int mapbase; int iotype; scalar_t__ regshift; int irq; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,int) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;
 struct uart_port* VAR_7 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_8)
{
 struct uart_port *VAR_9;
 struct resource *VAR_10;
 int *VAR_11 = FUNC_0(&VAR_8->dev);
 int VAR_12;

 if (!VAR_11)
  return 0;

 VAR_9 = VAR_7;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_9->type = VAR_11[VAR_12];
  if (VAR_9->type == VAR_1)
   continue;
  VAR_9->irq = FUNC_1(VAR_8, VAR_12);
  VAR_9->uartclk = VAR_2 * 16;
  VAR_9->fifosize = 16;
  VAR_9->regshift = 0;
  VAR_9->iotype = VAR_6;
  VAR_9->flags = VAR_5 | VAR_4;
  VAR_9->line = VAR_12;
  VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_12);
  VAR_9->mapbase = VAR_10->start;
  VAR_9++;
 }

 return VAR_12;
}
