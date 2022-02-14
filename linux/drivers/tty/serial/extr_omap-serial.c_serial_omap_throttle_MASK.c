
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct uart_omap_port {int ier; int dev; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_omap_port*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct uart_omap_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_3)
{
 struct uart_omap_port *VAR_4 = FUNC_6(VAR_3);
 unsigned long VAR_5;

 FUNC_0(VAR_4->dev);
 FUNC_4(&VAR_4->port.lock, VAR_5);
 VAR_4->ier &= ~(VAR_2 | VAR_1);
 FUNC_3(VAR_4, VAR_0, VAR_4->ier);
 FUNC_5(&VAR_4->port.lock, VAR_5);
 FUNC_1(VAR_4->dev);
 FUNC_2(VAR_4->dev);
}
