
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int line; int dev; } ;
struct uart_omap_port {TYPE_1__ port; int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct uart_omap_port*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct uart_omap_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_6(struct uart_port *VAR_8)
{
 struct uart_omap_port *VAR_9 = FUNC_5(VAR_8);
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;

 FUNC_2(VAR_9->dev);
 VAR_10 = FUNC_0(VAR_9);
 FUNC_3(VAR_9->dev);
 FUNC_4(VAR_9->dev);

 FUNC_1(VAR_9->port.dev, "serial_omap_get_mctrl+%d\n", VAR_9->port.line);

 if (VAR_10 & VAR_5)
  VAR_11 |= VAR_0;
 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_3;
 if (VAR_10 & VAR_6)
  VAR_11 |= VAR_2;
 if (VAR_10 & VAR_4)
  VAR_11 |= VAR_1;
 return VAR_11;
}
