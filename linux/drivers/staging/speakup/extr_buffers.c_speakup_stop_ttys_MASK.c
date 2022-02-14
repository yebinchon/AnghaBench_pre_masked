
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* d; } ;
struct TYPE_4__ {scalar_t__ tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1[VAR_2].d && VAR_1[VAR_2].d->port.tty)
   FUNC_0(VAR_1[VAR_2].d->port.tty);
}
