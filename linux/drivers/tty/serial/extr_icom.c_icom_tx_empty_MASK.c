
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_6__ {TYPE_2__* statStg; } ;
struct TYPE_5__ {TYPE_1__* xmit; } ;
struct TYPE_4__ {int flags; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);
 if (FUNC_0(VAR_0->statStg->xmit[0].flags) &
     VAR_1)
  VAR_4 = VAR_2;
 else
  VAR_4 = 0;

 FUNC_2(&VAR_3->lock, VAR_5);
 return VAR_4;
}
