
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {size_t lan_vsi; struct i40e_vsi** vsi; } ;


 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (struct i40e_vsi*) ;

void FUNC_2(struct i40e_vsi *VAR_0)
{
 struct i40e_pf *VAR_1 = VAR_0->back;

 if (VAR_0 == VAR_1->vsi[VAR_1->lan_vsi])
  FUNC_0(VAR_1);

 FUNC_1(VAR_0);
}
