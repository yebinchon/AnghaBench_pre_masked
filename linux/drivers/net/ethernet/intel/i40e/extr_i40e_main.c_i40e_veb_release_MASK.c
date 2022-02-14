
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ uplink_seid; int veb_idx; int flags; } ;
struct i40e_veb {scalar_t__ seid; scalar_t__ uplink_seid; int veb_idx; struct i40e_pf* pf; } ;
struct i40e_pf {int num_alloc_vsi; scalar_t__ mac_seid; size_t lan_vsi; int hw; struct i40e_vsi** vsi; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (struct i40e_veb*) ;

void FUNC_3(struct i40e_veb *VAR_2)
{
 struct i40e_vsi *VAR_3 = ((void*)0);
 struct i40e_pf *VAR_4;
 int VAR_5, VAR_6 = 0;

 VAR_4 = VAR_2->pf;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_alloc_vsi; VAR_5++) {
  if (VAR_4->vsi[VAR_5] && VAR_4->vsi[VAR_5]->uplink_seid == VAR_2->seid) {
   VAR_6++;
   VAR_3 = VAR_4->vsi[VAR_5];
  }
 }
 if (VAR_6 != 1) {
  FUNC_0(&VAR_4->pdev->dev,
    "can't remove VEB %d with %d VSIs left\n",
    VAR_2->seid, VAR_6);
  return;
 }


 VAR_3->flags &= ~VAR_1;
 if (VAR_2->uplink_seid) {
  VAR_3->uplink_seid = VAR_2->uplink_seid;
  if (VAR_2->uplink_seid == VAR_4->mac_seid)
   VAR_3->veb_idx = VAR_0;
  else
   VAR_3->veb_idx = VAR_2->veb_idx;
 } else {

  VAR_3->uplink_seid = VAR_4->vsi[VAR_4->lan_vsi]->uplink_seid;
  VAR_3->veb_idx = VAR_4->vsi[VAR_4->lan_vsi]->veb_idx;
 }

 FUNC_1(&VAR_4->hw, VAR_2->seid, ((void*)0));
 FUNC_2(VAR_2);
}
