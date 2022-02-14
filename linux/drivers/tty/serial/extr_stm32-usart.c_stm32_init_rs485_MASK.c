
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_rs485 {scalar_t__ delay_rts_after_send; scalar_t__ delay_rts_before_send; scalar_t__ flags; } ;
struct uart_port {struct serial_rs485 rs485; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct serial_rs485*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_1,
       struct platform_device *VAR_2)
{
 struct serial_rs485 *VAR_3 = &VAR_1->rs485;

 VAR_3->flags = 0;
 VAR_3->delay_rts_before_send = 0;
 VAR_3->delay_rts_after_send = 0;

 if (!VAR_2->dev.of_node)
  return -VAR_0;

 FUNC_0(&VAR_2->dev, VAR_3);

 return 0;
}
