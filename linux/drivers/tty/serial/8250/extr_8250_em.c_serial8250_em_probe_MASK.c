
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int up ;
struct TYPE_2__ {int flags; int serial_out; int serial_in; int iotype; int uartclk; struct serial8250_em_priv* private_data; int * dev; int type; int irq; int mapbase; } ;
struct uart_8250_port {int dl_write; int dl_read; TYPE_1__ port; } ;
struct serial8250_em_priv {int line; int sclk; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 struct serial8250_em_priv* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct uart_8250_port*,int ,int) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct serial8250_em_priv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_14)
{
 struct resource *VAR_15 = FUNC_9(VAR_14, VAR_4, 0);
 struct resource *VAR_16 = FUNC_9(VAR_14, VAR_3, 0);
 struct serial8250_em_priv *VAR_17;
 struct uart_8250_port VAR_18;
 int VAR_19;

 if (!VAR_15 || !VAR_16) {
  FUNC_5(&VAR_14->dev, "missing registers or irq\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_7(&VAR_14->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->sclk = FUNC_6(&VAR_14->dev, "sclk");
 if (FUNC_0(VAR_17->sclk)) {
  FUNC_5(&VAR_14->dev, "unable to get clock\n");
  return FUNC_1(VAR_17->sclk);
 }

 FUNC_8(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.port.mapbase = VAR_15->start;
 VAR_18.port.irq = VAR_16->start;
 VAR_18.port.type = VAR_5;
 VAR_18.port.flags = VAR_6 | VAR_7 | VAR_8;
 VAR_18.port.dev = &VAR_14->dev;
 VAR_18.port.private_data = VAR_17;

 FUNC_4(VAR_17->sclk);
 VAR_18.port.uartclk = FUNC_3(VAR_17->sclk);

 VAR_18.port.iotype = VAR_9;
 VAR_18.port.serial_in = VAR_12;
 VAR_18.port.serial_out = VAR_13;
 VAR_18.dl_read = VAR_10;
 VAR_18.dl_write = VAR_11;

 VAR_19 = FUNC_11(&VAR_18);
 if (VAR_19 < 0) {
  FUNC_5(&VAR_14->dev, "unable to register 8250 port\n");
  FUNC_2(VAR_17->sclk);
  return VAR_19;
 }

 VAR_17->line = VAR_19;
 FUNC_10(VAR_14, VAR_17);
 return 0;
}
