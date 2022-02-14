
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ delay_rts_before_send; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct kthread_work {int dummy; } ;
struct TYPE_4__ {struct uart_port port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_port*) ;
 TYPE_2__* FUNC_2 (struct kthread_work*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct kthread_work *VAR_2)
{
 struct uart_port *VAR_3 = &(FUNC_2(VAR_2, VAR_1)->port);

 if ((VAR_3->rs485.flags & VAR_0) &&
     (VAR_3->rs485.delay_rts_before_send > 0))
  FUNC_0(VAR_3->rs485.delay_rts_before_send);

 FUNC_1(VAR_3);
}
