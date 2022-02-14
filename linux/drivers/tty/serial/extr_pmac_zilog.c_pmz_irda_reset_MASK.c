
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_pmac_port {TYPE_1__ port; int * curregs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_pmac_port*,size_t,int ) ;
 int FUNC_4 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_pmac_port *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->port.lock, VAR_3);
 VAR_2->curregs[VAR_1] |= VAR_0;
 FUNC_3(VAR_2, VAR_1, VAR_2->curregs[VAR_1]);
 FUNC_4(VAR_2);
 FUNC_2(&VAR_2->port.lock, VAR_3);
 FUNC_0(110);

 FUNC_1(&VAR_2->port.lock, VAR_3);
 VAR_2->curregs[VAR_1] &= ~VAR_0;
 FUNC_3(VAR_2, VAR_1, VAR_2->curregs[VAR_1]);
 FUNC_4(VAR_2);
 FUNC_2(&VAR_2->port.lock, VAR_3);
 FUNC_0(10);
}
