
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_lookup {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct pwm_lookup *VAR_1, size_t VAR_2)
{
 FUNC_1(&VAR_0);

 while (VAR_2--) {
  FUNC_0(&VAR_1->list);
  VAR_1++;
 }

 FUNC_2(&VAR_0);
}
