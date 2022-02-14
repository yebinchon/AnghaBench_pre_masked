
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int ls_num_nodes; int ls_total_weight; int* ls_node_array; } ;


 int FUNC_0 () ;

int FUNC_1(struct dlm_ls *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 if (VAR_0->ls_num_nodes == 1)
  return FUNC_0();
 else {
  VAR_2 = (VAR_1 >> 16) % VAR_0->ls_total_weight;
  return VAR_0->ls_node_array[VAR_2];
 }
}
