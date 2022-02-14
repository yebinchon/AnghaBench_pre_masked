
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_sunsab_port {int cec_timeout; TYPE_2__* regs; } ;
struct TYPE_3__ {int star; } ;
struct TYPE_4__ {TYPE_1__ r; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __inline__ void FUNC_2(struct uart_sunsab_port *VAR_1)
{
 int VAR_2 = VAR_1->cec_timeout;

 while ((FUNC_0(&VAR_1->regs->r.star) & VAR_0) && --VAR_2)
  FUNC_1(1);
}
