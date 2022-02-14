
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tty; } ;
struct ipw_tty {unsigned int control_lines; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct ipw_tty *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_1->control_lines;

 VAR_1->control_lines = (VAR_1->control_lines & ~VAR_4)
  | (VAR_3 & VAR_4);





 if ((VAR_5 & VAR_0)
   && !(VAR_1->control_lines & VAR_0)
   && VAR_1->port.tty) {
  FUNC_0(VAR_1->port.tty);
 }
}
