
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct TYPE_2__ {int remove_wait; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct uart_port *VAR_0)
{
 if (FUNC_0(&VAR_0->state->refcount))
  FUNC_1(&VAR_0->state->remove_wait);
}
