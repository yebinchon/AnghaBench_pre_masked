
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int irq; int regshift; int flags; int mapbase; int lock; int line; int * ops; int * dev; int uartclk; int iotype; int * membase; } ;
struct lpc32xx_hsuart_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,size_t) ;
 struct lpc32xx_hsuart_port* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct lpc32xx_hsuart_port*,int ,int) ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct lpc32xx_hsuart_port*) ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 size_t VAR_11 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_12)
{
 struct lpc32xx_hsuart_port *VAR_13 = &VAR_8[VAR_11];
 int VAR_14 = 0;
 struct resource *VAR_15;

 if (VAR_11 >= VAR_3) {
  FUNC_0(&VAR_12->dev,
   "Error: Number of possible ports exceeded (%d)!\n",
   VAR_11 + 1);
  return -VAR_0;
 }

 FUNC_2(VAR_13, 0, sizeof(*VAR_13));

 VAR_15 = FUNC_4(VAR_12, VAR_1, 0);
 if (!VAR_15) {
  FUNC_0(&VAR_12->dev,
   "Error getting mem resource for HS UART port %d\n",
   VAR_11);
  return -VAR_0;
 }
 VAR_13->port.mapbase = VAR_15->start;
 VAR_13->port.membase = ((void*)0);

 VAR_14 = FUNC_3(VAR_12, 0);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_13->port.irq = VAR_14;

 VAR_13->port.iotype = VAR_7;
 VAR_13->port.uartclk = VAR_2;
 VAR_13->port.regshift = 2;
 VAR_13->port.flags = VAR_4 | VAR_5 | VAR_6;
 VAR_13->port.dev = &VAR_12->dev;
 VAR_13->port.ops = &VAR_10;
 VAR_13->port.line = VAR_11++;
 FUNC_6(&VAR_13->port.lock);


 FUNC_1(VAR_13->port.mapbase, 1);

 VAR_14 = FUNC_7(&VAR_9, &VAR_13->port);

 FUNC_5(VAR_12, VAR_13);

 return VAR_14;
}
