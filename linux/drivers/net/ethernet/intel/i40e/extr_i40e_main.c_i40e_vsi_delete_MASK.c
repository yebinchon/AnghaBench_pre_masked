
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int seid; TYPE_1__* back; } ;
struct TYPE_2__ {size_t lan_vsi; int hw; struct i40e_vsi** vsi; } ;


 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0)
{

 if (VAR_0 == VAR_0->back->vsi[VAR_0->back->lan_vsi])
  return;

 FUNC_0(&VAR_0->back->hw, VAR_0->seid, ((void*)0));
}
