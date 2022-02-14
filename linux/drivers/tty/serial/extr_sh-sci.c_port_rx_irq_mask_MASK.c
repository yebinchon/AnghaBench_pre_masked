
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {unsigned long scscr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct uart_port *VAR_2)
{







 return VAR_1 | (FUNC_0(VAR_2)->cfg->scscr & VAR_0);
}
