
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; int dev; } ;
struct eg20t_port {int desc_rx; int trigger_level; int sg_rx; struct uart_port port; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct eg20t_port*,int ) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (struct eg20t_port*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 struct eg20t_port *VAR_4 = VAR_3;
 struct uart_port *VAR_5 = &VAR_4->port;
 int VAR_6;

 FUNC_2(VAR_5->dev, &VAR_4->sg_rx, 1, VAR_0);
 VAR_6 = FUNC_1(VAR_4, VAR_4->trigger_level);
 if (VAR_6)
  FUNC_4(&VAR_5->state->port);
 FUNC_0(VAR_4->desc_rx);
 FUNC_3(VAR_4, VAR_2 |
         VAR_1);
}
