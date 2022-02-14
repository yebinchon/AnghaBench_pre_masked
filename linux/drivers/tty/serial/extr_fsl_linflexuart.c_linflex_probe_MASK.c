
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int line; int flags; int * ops; int irq; int iotype; int type; TYPE_1__* dev; int membase; int mapbase; } ;
struct resource {int start; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct resource*) ;
 struct uart_port* FUNC_4 (TYPE_1__*,int,int ) ;
 int VAR_8 ;
 struct uart_port** VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct uart_port*) ;
 int FUNC_9 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct uart_port *VAR_13;
 struct resource *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_15 = FUNC_5(VAR_12, "serial");
 if (VAR_15 < 0) {
  FUNC_2(&VAR_11->dev, "failed to get alias id, errno %d\n", VAR_15);
  return VAR_15;
 }
 if (VAR_15 >= VAR_5) {
  FUNC_2(&VAR_11->dev, "driver limited to %d serial ports\n",
   VAR_5);
  return -VAR_1;
 }

 VAR_13->line = VAR_15;

 VAR_14 = FUNC_7(VAR_11, VAR_3, 0);
 if (!VAR_14)
  return -VAR_0;

 VAR_13->mapbase = VAR_14->start;
 VAR_13->membase = FUNC_3(&VAR_11->dev, VAR_14);
 if (FUNC_0(VAR_13->membase))
  return FUNC_1(VAR_13->membase);

 VAR_13->dev = &VAR_11->dev;
 VAR_13->type = VAR_4;
 VAR_13->iotype = VAR_7;
 VAR_13->irq = FUNC_6(VAR_11, 0);
 VAR_13->ops = &VAR_8;
 VAR_13->flags = VAR_6;

 VAR_9[VAR_13->line] = VAR_13;

 FUNC_8(VAR_11, VAR_13);

 VAR_15 = FUNC_9(&VAR_10, VAR_13);
 if (VAR_15)
  return VAR_15;

 return 0;
}
