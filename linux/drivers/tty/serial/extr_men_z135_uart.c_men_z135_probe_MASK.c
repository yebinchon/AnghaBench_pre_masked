
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {int uartclk; int flags; int * membase; int mapbase; int type; struct device* dev; scalar_t__ line; void* iotype; int irq; int * ops; int fifosize; } ;
struct men_z135_port {unsigned char* rxbuf; TYPE_1__ port; int lock; struct mcb_device* mdev; } ;
struct mcb_device_id {int dummy; } ;
struct device {int dummy; } ;
struct mcb_device {struct resource mem; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct men_z135_port* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_8 ;
 int FUNC_4 (struct mcb_device*) ;
 int FUNC_5 (struct mcb_device*,struct men_z135_port*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct mcb_device *VAR_11,
   const struct mcb_device_id *VAR_12)
{
 struct men_z135_port *VAR_13;
 struct resource *VAR_14;
 struct device *VAR_15;
 int VAR_16;

 VAR_15 = &VAR_11->dev;

 VAR_13 = FUNC_2(VAR_15, sizeof(struct men_z135_port), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->rxbuf = (unsigned char *)FUNC_0(VAR_1);
 if (!VAR_13->rxbuf)
  return -VAR_0;

 VAR_14 = &VAR_11->mem;

 FUNC_5(VAR_11, VAR_13);

 VAR_13->port.uartclk = VAR_2 * 16;
 VAR_13->port.fifosize = VAR_3;
 VAR_13->port.iotype = VAR_7;
 VAR_13->port.ops = &VAR_10;
 VAR_13->port.irq = FUNC_4(VAR_11);
 VAR_13->port.iotype = VAR_7;
 VAR_13->port.flags = VAR_5 | VAR_6;
 VAR_13->port.line = VAR_8++;
 VAR_13->port.dev = VAR_15;
 VAR_13->port.type = VAR_4;
 VAR_13->port.mapbase = VAR_14->start;
 VAR_13->port.membase = ((void*)0);
 VAR_13->mdev = VAR_11;

 FUNC_6(&VAR_13->lock);

 VAR_16 = FUNC_7(&VAR_9, &VAR_13->port);
 if (VAR_16)
  goto err;

 return 0;

err:
 FUNC_3((unsigned long) VAR_13->rxbuf);
 FUNC_1(VAR_15, "Failed to add UART: %d\n", VAR_16);

 return VAR_16;
}
