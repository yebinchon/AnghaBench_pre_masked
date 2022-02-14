
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int base_queue; int num_queue_pairs; struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;


 int FUNC_0 (struct i40e_pf*,int,int) ;
 int FUNC_1 (struct i40e_pf*,int,int) ;

void FUNC_2(struct i40e_vsi *VAR_0)
{
 struct i40e_pf *VAR_1 = VAR_0->back;
 int VAR_2, VAR_3;

 VAR_3 = VAR_0->base_queue;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_queue_pairs; VAR_2++, VAR_3++) {
  FUNC_1(VAR_1, VAR_3, 0);
  FUNC_0(VAR_1, VAR_3, 0);
 }
}
