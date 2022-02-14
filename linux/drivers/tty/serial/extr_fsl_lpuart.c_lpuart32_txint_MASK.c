
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct lpuart_port {TYPE_1__ port; } ;


 int FUNC_0 (struct lpuart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct lpuart_port *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->port.lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->port.lock, VAR_1);
}
