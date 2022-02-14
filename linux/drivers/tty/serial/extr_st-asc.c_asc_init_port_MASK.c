
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ uartclk; int lock; int mapbase; int * membase; int irq; int * dev; int fifosize; int * ops; int flags; int iotype; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct asc_port {int ** states; int * pinctrl; int * clk; struct uart_port port; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 size_t VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int * FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,struct resource*) ;
 int * FUNC_9 (int *) ;
 void* FUNC_10 (int *,char*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct asc_port *VAR_8,
     struct platform_device *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_8->port;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10->iotype = VAR_6;
 VAR_10->flags = VAR_5;
 VAR_10->ops = &VAR_7;
 VAR_10->fifosize = VAR_0;
 VAR_10->dev = &VAR_9->dev;
 VAR_10->irq = FUNC_11(VAR_9, 0);

 VAR_11 = FUNC_12(VAR_9, VAR_3, 0);
 VAR_10->membase = FUNC_8(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->membase))
  return FUNC_1(VAR_10->membase);
 VAR_10->mapbase = VAR_11->start;

 FUNC_13(&VAR_10->lock);

 VAR_8->clk = FUNC_7(&VAR_9->dev, ((void*)0));

 if (FUNC_2(FUNC_0(VAR_8->clk)))
  return -VAR_2;

 FUNC_5(VAR_8->clk);
 VAR_8->port.uartclk = FUNC_4(VAR_8->clk);
 FUNC_2(VAR_8->port.uartclk == 0);
 FUNC_3(VAR_8->clk);

 VAR_8->pinctrl = FUNC_9(&VAR_9->dev);
 if (FUNC_0(VAR_8->pinctrl)) {
  VAR_12 = FUNC_1(VAR_8->pinctrl);
  FUNC_6(&VAR_9->dev, "Failed to get Pinctrl: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_8->states[VAR_1] =
  FUNC_10(VAR_8->pinctrl, "default");
 if (FUNC_0(VAR_8->states[VAR_1])) {
  VAR_12 = FUNC_1(VAR_8->states[VAR_1]);
  FUNC_6(&VAR_9->dev,
   "Failed to look up Pinctrl state 'default': %d\n", VAR_12);
  return VAR_12;
 }


 VAR_8->states[VAR_4] =
  FUNC_10(VAR_8->pinctrl, "no-hw-flowctrl");
 if (FUNC_0(VAR_8->states[VAR_4]))
  VAR_8->states[VAR_4] = ((void*)0);

 return 0;
}
