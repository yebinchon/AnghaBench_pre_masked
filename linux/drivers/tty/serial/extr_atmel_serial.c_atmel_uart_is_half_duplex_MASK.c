
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;
struct uart_port {TYPE_2__ iso7816; TYPE_1__ rs485; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct uart_port *VAR_3)
{
 return ((VAR_3->rs485.flags & VAR_1) &&
  !(VAR_3->rs485.flags & VAR_2)) ||
  (VAR_3->iso7816.flags & VAR_0);
}
