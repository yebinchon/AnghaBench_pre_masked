
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_lookup {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct pwm_lookup *VAR_2, size_t VAR_3)
{
 FUNC_1(&VAR_1);

 while (VAR_3--) {
  FUNC_0(&VAR_2->list, &VAR_0);
  VAR_2++;
 }

 FUNC_2(&VAR_1);
}
