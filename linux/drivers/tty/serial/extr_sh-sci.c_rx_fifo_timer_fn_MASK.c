
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct timer_list {int dummy; } ;
struct sci_port {struct uart_port port; } ;


 int FUNC_0 (int ,char*) ;
 struct sci_port* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct sci_port* VAR_1 ;
 int FUNC_2 (struct uart_port*,int) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct sci_port *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 struct uart_port *VAR_4 = &VAR_3->port;

 FUNC_0(VAR_4->dev, "Rx timed out\n");
 FUNC_2(VAR_4, 1);
}
