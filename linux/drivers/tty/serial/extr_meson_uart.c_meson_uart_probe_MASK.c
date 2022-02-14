
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int flags; size_t line; int fifosize; int * ops; scalar_t__ x_char; int type; TYPE_1__* dev; int irq; int mapsize; int mapbase; int iotype; } ;
struct resource {int start; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*,char*,size_t) ;
 struct uart_port* FUNC_1 (TYPE_1__*,int,int ) ;
 struct uart_port** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct platform_device*,struct uart_port*) ;
 int FUNC_3 (struct platform_device*,struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (scalar_t__,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct uart_port*) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_16)
{
 struct resource *VAR_17, *VAR_18;
 struct uart_port *VAR_19;
 int VAR_20 = 0;
 int VAR_21 = -1;

 if (VAR_16->dev.of_node)
  VAR_16->id = FUNC_7(VAR_16->dev.of_node, "serial");

 if (VAR_16->id < 0) {
  for (VAR_21 = VAR_1; VAR_21 < VAR_0; VAR_21++) {
   if (!VAR_13[VAR_21]) {
    VAR_16->id = VAR_21;
    break;
   }
  }
 }

 if (VAR_16->id < 0 || VAR_16->id >= VAR_0)
  return -VAR_3;

 VAR_17 = FUNC_9(VAR_16, VAR_8, 0);
 if (!VAR_17)
  return -VAR_4;

 VAR_18 = FUNC_9(VAR_16, VAR_7, 0);
 if (!VAR_18)
  return -VAR_4;

 if (VAR_13[VAR_16->id]) {
  FUNC_0(&VAR_16->dev, "port %d already allocated\n", VAR_16->id);
  return -VAR_2;
 }

 VAR_19 = FUNC_1(&VAR_16->dev, sizeof(struct uart_port), VAR_6);
 if (!VAR_19)
  return -VAR_5;


 if (FUNC_8(VAR_16->dev.of_node, "amlogic,meson-uart"))
  VAR_20 = FUNC_3(VAR_16, VAR_19);
 else
  VAR_20 = FUNC_2(VAR_16, VAR_19);

 if (VAR_20)
  return VAR_20;

 VAR_19->iotype = VAR_12;
 VAR_19->mapbase = VAR_17->start;
 VAR_19->mapsize = FUNC_11(VAR_17);
 VAR_19->irq = VAR_18->start;
 VAR_19->flags = VAR_10 | VAR_11;
 VAR_19->dev = &VAR_16->dev;
 VAR_19->line = VAR_16->id;
 VAR_19->type = VAR_9;
 VAR_19->x_char = 0;
 VAR_19->ops = &VAR_15;
 VAR_19->fifosize = 64;

 VAR_13[VAR_16->id] = VAR_19;
 FUNC_10(VAR_16, VAR_19);


 if (FUNC_5(VAR_19) >= 0) {
  FUNC_6(VAR_19);
  FUNC_4(VAR_19);
 }

 VAR_20 = FUNC_12(&VAR_14, VAR_19);
 if (VAR_20)
  VAR_13[VAR_16->id] = ((void*)0);

 return VAR_20;
}
