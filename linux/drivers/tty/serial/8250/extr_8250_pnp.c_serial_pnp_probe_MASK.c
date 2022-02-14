
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uart ;
struct TYPE_2__ {int flags; int uartclk; int * dev; int type; void* iotype; int irq; scalar_t__ mapbase; void* iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pnp_device_id {int driver_data; } ;
struct pnp_dev {int capabilities; int dev; } ;


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
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int *,char*,void*,unsigned long long,int ,void*) ;
 int FUNC_1 (struct uart_8250_port*,int ,int) ;
 int FUNC_2 (struct pnp_dev*,int ) ;
 int FUNC_3 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_4 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_5 (struct pnp_dev*,int ) ;
 scalar_t__ FUNC_6 (struct pnp_dev*,int ) ;
 void* FUNC_7 (struct pnp_dev*,int) ;
 scalar_t__ FUNC_8 (struct pnp_dev*,int) ;
 int FUNC_9 (struct pnp_dev*,void*) ;
 struct uart_8250_port* FUNC_10 (int) ;
 int FUNC_11 (struct uart_8250_port*) ;
 int FUNC_12 (struct pnp_dev*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14(struct pnp_dev *VAR_14, const struct pnp_device_id *VAR_15)
{
 struct uart_8250_port VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20 = VAR_15->driver_data;

 if (VAR_20 & VAR_5) {
  VAR_18 = FUNC_12(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;
 }

 FUNC_1(&VAR_16, 0, sizeof(VAR_16));
 if (FUNC_4(VAR_14, 0))
  VAR_16.port.irq = FUNC_2(VAR_14, 0);
 if ((VAR_20 & VAR_0) && FUNC_8(VAR_14, 2)) {
  VAR_16.port.iobase = FUNC_7(VAR_14, 2);
  VAR_16.port.iotype = VAR_13;
 } else if (FUNC_8(VAR_14, 0)) {
  VAR_16.port.iobase = FUNC_7(VAR_14, 0);
  VAR_16.port.iotype = VAR_13;
 } else if (FUNC_6(VAR_14, 0)) {
  VAR_16.port.mapbase = FUNC_5(VAR_14, 0);
  VAR_16.port.iotype = VAR_12;
  VAR_16.port.flags = VAR_9;
 } else
  return -VAR_1;

 FUNC_0(&VAR_14->dev,
   "Setup PNP port: port %#lx, mem %#llx, irq %u, type %u\n",
   VAR_16.port.iobase, (unsigned long long)VAR_16.port.mapbase,
   VAR_16.port.irq, VAR_16.port.iotype);

 if (VAR_20 & VAR_0) {
  VAR_16.port.flags |= VAR_7 | VAR_8;
  VAR_16.port.type = VAR_4;
 }

 VAR_16.port.flags |= VAR_11 | VAR_6;
 if (FUNC_3(VAR_14, 0) & VAR_2)
  VAR_16.port.flags |= VAR_10;
 VAR_16.port.uartclk = 1843200;
 VAR_16.port.dev = &VAR_14->dev;

 VAR_19 = FUNC_11(&VAR_16);
 if (VAR_19 < 0 || (VAR_20 & VAR_0))
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_19);
 if (FUNC_13(&VAR_17->port))
  VAR_14->capabilities |= VAR_3;

 FUNC_9(VAR_14, (void *)((long)VAR_19 + 1));
 return 0;
}
