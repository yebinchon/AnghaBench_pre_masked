
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_veb {scalar_t__ seid; scalar_t__ idx; scalar_t__ uplink_seid; struct i40e_pf* pf; } ;
struct i40e_pf {int num_alloc_vsi; struct i40e_veb** veb; TYPE_1__** vsi; } ;
struct TYPE_2__ {scalar_t__ uplink_seid; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_veb*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct i40e_veb *VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_2->pf;
 u16 VAR_4 = VAR_2->seid;
 u16 VAR_5 = VAR_2->idx;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!VAR_3->veb[VAR_6])
   continue;
  if (VAR_3->veb[VAR_6]->uplink_seid == VAR_2->seid)
   FUNC_2(VAR_3->veb[VAR_6]);
 }






 for (VAR_6 = 0; VAR_6 < VAR_3->num_alloc_vsi; VAR_6++) {
  if (!VAR_3->vsi[VAR_6])
   continue;
  if (VAR_3->vsi[VAR_6]->uplink_seid == VAR_4 &&
     (VAR_3->vsi[VAR_6]->flags & VAR_1) == 0) {
   FUNC_1(VAR_3->vsi[VAR_6]);
  }
 }






 if (VAR_3->veb[VAR_5])
  FUNC_0(VAR_3->veb[VAR_5]);
}
