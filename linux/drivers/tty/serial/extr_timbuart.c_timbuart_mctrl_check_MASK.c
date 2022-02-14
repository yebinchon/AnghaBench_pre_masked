
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {TYPE_2__* state; scalar_t__ membase; } ;
struct TYPE_3__ {int delta_msr_wait; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 unsigned int VAR_6;

 if (VAR_4 & VAR_0) {

  FUNC_0(VAR_0, VAR_3->membase + VAR_1);
  VAR_6 = FUNC_1(VAR_3);
  FUNC_2(VAR_3, VAR_6 & VAR_2);
  FUNC_3(&VAR_3->state->port.delta_msr_wait);
 }

 *VAR_5 |= VAR_0;
}
