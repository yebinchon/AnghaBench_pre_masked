
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_veb {scalar_t__ uplink_seid; scalar_t__ seid; struct i40e_pf* pf; } ;
struct i40e_pf {int num_alloc_vsi; TYPE_1__** vsi; struct i40e_veb** veb; } ;
struct TYPE_2__ {scalar_t__ uplink_seid; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct i40e_veb *VAR_1, bool VAR_2)
{
 struct i40e_pf *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_1->pf)
  return;
 VAR_3 = VAR_1->pf;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->veb[VAR_4] && (VAR_3->veb[VAR_4]->uplink_seid == VAR_1->seid))
   FUNC_1(VAR_3->veb[VAR_4], VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_3->num_alloc_vsi; VAR_4++)
  if (VAR_3->vsi[VAR_4] && (VAR_3->vsi[VAR_4]->uplink_seid == VAR_1->seid))
   FUNC_0(VAR_3->vsi[VAR_4], VAR_2);
}
