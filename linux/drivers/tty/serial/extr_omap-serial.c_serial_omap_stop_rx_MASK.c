
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int read_status_mask; } ;
struct uart_omap_port {int ier; int dev; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_omap_port*,int ,int) ;
 struct uart_omap_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4)
{
 struct uart_omap_port *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_5->dev);
 VAR_5->ier &= ~(VAR_2 | VAR_1);
 VAR_5->port.read_status_mask &= ~VAR_3;
 FUNC_3(VAR_5, VAR_0, VAR_5->ier);
 FUNC_1(VAR_5->dev);
 FUNC_2(VAR_5->dev);
}
