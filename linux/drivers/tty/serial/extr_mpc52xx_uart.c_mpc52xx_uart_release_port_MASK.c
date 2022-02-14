
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int mapbase; int * membase; } ;
struct mpc52xx_psc {int dummy; } ;
struct TYPE_2__ {int (* clock_relse ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_2)
{
 if (VAR_1->clock_relse)
  VAR_1->clock_relse(VAR_2);


 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_2->membase);
  VAR_2->membase = ((void*)0);
 }

 FUNC_1(VAR_2->mapbase, sizeof(struct mpc52xx_psc));
}
