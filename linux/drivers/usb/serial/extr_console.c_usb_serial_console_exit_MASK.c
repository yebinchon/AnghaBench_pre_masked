
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* port; } ;
struct TYPE_4__ {scalar_t__ console; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_1(void)
{
 if (VAR_1.port) {
  FUNC_0(&VAR_0);
  VAR_1.port->port.console = 0;
  VAR_1.port = ((void*)0);
 }
}
