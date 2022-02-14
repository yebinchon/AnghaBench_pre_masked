
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {int dummy; } ;
struct ipw_network {struct ipw_tty*** associated_ttys; } ;


 int VAR_0 ;

void FUNC_0(struct ipw_network *VAR_1,
          unsigned int VAR_2,
          struct ipw_tty *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->associated_ttys[VAR_2][VAR_4] == ((void*)0)) {
   VAR_1->associated_ttys[VAR_2][VAR_4] = VAR_3;
   break;
  }
}
