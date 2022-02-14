
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_veb {size_t idx; struct i40e_pf* pf; } ;
struct i40e_pf {int switch_mutex; struct i40e_veb** veb; } ;


 int FUNC_0 (struct i40e_veb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct i40e_veb *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->pf) {
  struct i40e_pf *VAR_1 = VAR_0->pf;

  FUNC_1(&VAR_1->switch_mutex);
  if (VAR_1->veb[VAR_0->idx] == VAR_0)
   VAR_1->veb[VAR_0->idx] = ((void*)0);
  FUNC_2(&VAR_1->switch_mutex);
 }

 FUNC_0(VAR_0);
}
