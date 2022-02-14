
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tty_stopped; } ;
struct TYPE_7__ {TYPE_2__* d; } ;
struct TYPE_5__ {scalar_t__ tty; } ;
struct TYPE_6__ {TYPE_1__ port; } ;


 int VAR_0 ;
 TYPE_4__** VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_2 ;

void FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] && VAR_1[VAR_3]->tty_stopped)
   continue;
  if (VAR_2[VAR_3].d && VAR_2[VAR_3].d->port.tty)
   FUNC_0(VAR_2[VAR_3].d->port.tty);
 }
}
