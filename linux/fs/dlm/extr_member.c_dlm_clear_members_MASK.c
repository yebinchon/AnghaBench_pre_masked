
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {scalar_t__ ls_num_nodes; int ls_nodes; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dlm_ls *VAR_0)
{
 FUNC_0(&VAR_0->ls_nodes);
 VAR_0->ls_num_nodes = 0;
}
