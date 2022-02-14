
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lock; TYPE_2__* state; } ;
struct rp2_uart_port {TYPE_3__ port; scalar_t__ base; } ;
struct TYPE_4__ {int delta_msr_wait; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rp2_uart_port*) ;
 int FUNC_2 (struct rp2_uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct rp2_uart_port *VAR_4)
{
 u32 VAR_5;

 FUNC_3(&VAR_4->port.lock);





 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 FUNC_6(VAR_5, VAR_4->base + VAR_0);

 if (VAR_5 & VAR_2)
  FUNC_1(VAR_4);
 if (VAR_5 & VAR_3)
  FUNC_2(VAR_4);
 if (VAR_5 & VAR_1)
  FUNC_5(&VAR_4->port.state->port.delta_msr_wait);

 FUNC_4(&VAR_4->port.lock);
}
