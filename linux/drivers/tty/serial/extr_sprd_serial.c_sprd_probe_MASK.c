
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int line; int irq; int mapbase; int membase; int flags; int * ops; int fifosize; int uartclk; int iotype; int type; int * dev; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {struct uart_port port; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,struct resource*) ;
 TYPE_1__* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct uart_port*) ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 int FUNC_9 (struct uart_port*) ;
 TYPE_1__** VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_13 (int *,struct uart_port*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 struct resource *VAR_14;
 struct uart_port *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_10); VAR_17++)
  if (VAR_10[VAR_17] == ((void*)0))
   break;

 if (VAR_17 == FUNC_0(VAR_10))
  return -VAR_0;

 VAR_17 = FUNC_10(VAR_17, &VAR_13->dev);

 VAR_10[VAR_17] = FUNC_4(&VAR_13->dev, sizeof(*VAR_10[VAR_17]),
     VAR_2);
 if (!VAR_10[VAR_17])
  return -VAR_1;

 VAR_15 = &VAR_10[VAR_17]->port;
 VAR_15->dev = &VAR_13->dev;
 VAR_15->line = VAR_17;
 VAR_15->type = VAR_4;
 VAR_15->iotype = VAR_8;
 VAR_15->uartclk = VAR_5;
 VAR_15->fifosize = VAR_6;
 VAR_15->ops = &VAR_9;
 VAR_15->flags = VAR_7;

 VAR_18 = FUNC_9(VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_14 = FUNC_6(VAR_13, VAR_3, 0);
 VAR_15->membase = FUNC_3(&VAR_13->dev, VAR_14);
 if (FUNC_1(VAR_15->membase))
  return FUNC_2(VAR_15->membase);

 VAR_15->mapbase = VAR_14->start;

 VAR_16 = FUNC_5(VAR_13, 0);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_15->irq = VAR_16;





 VAR_18 = FUNC_12(VAR_10[VAR_17]);
 if (VAR_18)
  return VAR_18;

 if (!VAR_11) {
  VAR_18 = FUNC_14(&VAR_12);
  if (VAR_18 < 0) {
   FUNC_8("Failed to register SPRD-UART driver\n");
   return VAR_18;
  }
 }
 VAR_11++;

 VAR_18 = FUNC_13(&VAR_12, VAR_15);
 if (VAR_18) {
  VAR_10[VAR_17] = ((void*)0);
  FUNC_11(VAR_13);
 }

 FUNC_7(VAR_13, VAR_15);

 return VAR_18;
}
