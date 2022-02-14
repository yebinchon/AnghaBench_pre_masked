
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int line; int dev; } ;
struct uart_omap_port {int dev; TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char FUNC_4 (struct uart_omap_port*,int ) ;
 int FUNC_5 (struct uart_omap_port*,int ,unsigned char) ;
 struct uart_omap_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_6, unsigned int VAR_7,
        unsigned int VAR_8)
{
 struct uart_omap_port *VAR_9 = FUNC_6(VAR_6);
 unsigned char VAR_10;

 FUNC_0(VAR_9->port.dev, "serial_omap_pm+%d\n", VAR_9->port.line);

 FUNC_1(VAR_9->dev);
 FUNC_5(VAR_9, VAR_4, VAR_5);
 VAR_10 = FUNC_4(VAR_9, VAR_0);
 FUNC_5(VAR_9, VAR_0, VAR_10 | VAR_1);
 FUNC_5(VAR_9, VAR_4, 0);

 FUNC_5(VAR_9, VAR_2, (VAR_7 != 0) ? VAR_3 : 0);
 FUNC_5(VAR_9, VAR_4, VAR_5);
 FUNC_5(VAR_9, VAR_0, VAR_10);
 FUNC_5(VAR_9, VAR_4, 0);

 FUNC_2(VAR_9->dev);
 FUNC_3(VAR_9->dev);
}
