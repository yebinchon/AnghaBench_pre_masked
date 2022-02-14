
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int dummy; } ;
typedef enum cfg_task_t { ____Placeholder_cfg_task_t } cfg_task_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chp_id*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(void)
{
 struct chp_id VAR_2;
 enum cfg_task_t VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(&VAR_2);
 FUNC_2(&VAR_0);

 return VAR_3 == VAR_1;
}
