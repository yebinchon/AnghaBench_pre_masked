
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {int dummy; } ;
struct ipw_network {unsigned int ras_control_lines; struct ipw_tty*** associated_ttys; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_tty*,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(struct ipw_network *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5)
{
 int VAR_6;

 if (VAR_3 == VAR_0)
  VAR_2->ras_control_lines = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct ipw_tty *VAR_7 =
   VAR_2->associated_ttys[VAR_3][VAR_6];







  if (VAR_7)
   FUNC_0(VAR_7,
          VAR_3,
          VAR_4,
          VAR_5);
 }
}
