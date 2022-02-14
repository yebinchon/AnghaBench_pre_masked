
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int link_up; scalar_t__ state; int lp_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fc_lport *VAR_1)
{
 FUNC_1(&VAR_1->lp_mutex);

 if (!VAR_1->link_up) {
  VAR_1->link_up = 1;

  if (VAR_1->state == VAR_0)
   FUNC_0(VAR_1);
 }
}
