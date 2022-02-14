
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct uartlite_data {int dummy; } ;
struct uart_port {scalar_t__ mapbase; int fifosize; int regshift; int iobase; int irq; int line; struct uartlite_data* private_data; int type; struct device* dev; int flags; int * ops; int * membase; int iotype; int lock; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* cons; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct uart_port* VAR_7 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,struct uart_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct uart_port*) ;
 int VAR_8 ;
 struct uart_port* VAR_9 ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, int VAR_12, u32 VAR_13, int VAR_14,
   struct uartlite_data *VAR_15)
{
 struct uart_port *VAR_16;
 int VAR_17;


 if (VAR_12 < 0) {
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
   if (VAR_9[VAR_12].mapbase == 0)
    break;
 }
 if (VAR_12 < 0 || VAR_12 >= VAR_4) {
  FUNC_0(VAR_11, "%s%i too large\n", VAR_3, VAR_12);
  return -VAR_1;
 }

 if ((VAR_9[VAR_12].mapbase) && (VAR_9[VAR_12].mapbase != VAR_13)) {
  FUNC_0(VAR_11, "cannot assign to %s%i; it is already in use\n",
   VAR_3, VAR_12);
  return -VAR_0;
 }

 VAR_16 = &VAR_9[VAR_12];

 FUNC_2(&VAR_16->lock);
 VAR_16->fifosize = 16;
 VAR_16->regshift = 2;
 VAR_16->iotype = VAR_6;
 VAR_16->iobase = 1;
 VAR_16->mapbase = VAR_13;
 VAR_16->membase = ((void*)0);
 VAR_16->ops = &VAR_8;
 VAR_16->irq = VAR_14;
 VAR_16->flags = VAR_5;
 VAR_16->dev = VAR_11;
 VAR_16->type = VAR_2;
 VAR_16->line = VAR_12;
 VAR_16->private_data = VAR_15;

 FUNC_1(VAR_11, VAR_16);
 VAR_17 = FUNC_3(&VAR_10, VAR_16);
 if (VAR_17) {
  FUNC_0(VAR_11, "uart_add_one_port() failed; err=%i\n", VAR_17);
  VAR_16->mapbase = 0;
  FUNC_1(VAR_11, ((void*)0));
  return VAR_17;
 }







 return 0;
}
