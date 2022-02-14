
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_data_nents; int * t_data_vmap; int t_data_sg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct se_cmd *VAR_0)
{
 if (!VAR_0->t_data_nents) {
  return;
 } else if (VAR_0->t_data_nents == 1) {
  FUNC_0(FUNC_1(VAR_0->t_data_sg));
  return;
 }

 FUNC_2(VAR_0->t_data_vmap);
 VAR_0->t_data_vmap = ((void*)0);
}
