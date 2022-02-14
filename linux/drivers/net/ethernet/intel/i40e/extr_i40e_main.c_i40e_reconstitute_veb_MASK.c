
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {scalar_t__ veb_idx; int flags; int uplink_seid; } ;
struct i40e_veb {scalar_t__ idx; scalar_t__ veb_idx; int seid; int uplink_seid; int bridge_mode; struct i40e_pf* pf; } ;
struct i40e_pf {int num_alloc_vsi; size_t lan_vsi; int flags; struct i40e_veb** veb; TYPE_1__* pdev; struct i40e_vsi** vsi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i40e_veb*,struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_veb*) ;
 int FUNC_4 (struct i40e_vsi*) ;

__attribute__((used)) static int FUNC_5(struct i40e_veb *VAR_6)
{
 struct i40e_vsi *VAR_7 = ((void*)0);
 struct i40e_pf *VAR_8 = VAR_6->pf;
 int VAR_9, VAR_10;
 int VAR_11;


 for (VAR_9 = 0; VAR_9 < VAR_8->num_alloc_vsi && !VAR_7; VAR_9++) {
  if (VAR_8->vsi[VAR_9] &&
      VAR_8->vsi[VAR_9]->veb_idx == VAR_6->idx &&
      VAR_8->vsi[VAR_9]->flags & VAR_5) {
   VAR_7 = VAR_8->vsi[VAR_9];
   break;
  }
 }
 if (!VAR_7) {
  FUNC_0(&VAR_8->pdev->dev,
    "missing owner VSI for veb_idx %d\n", VAR_6->idx);
  VAR_11 = -VAR_2;
  goto end_reconstitute;
 }
 if (VAR_7 != VAR_8->vsi[VAR_8->lan_vsi])
  VAR_7->uplink_seid = VAR_8->vsi[VAR_8->lan_vsi]->uplink_seid;
 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11) {
  FUNC_0(&VAR_8->pdev->dev,
    "rebuild of veb_idx %d owner VSI failed: %d\n",
    VAR_6->idx, VAR_11);
  goto end_reconstitute;
 }
 FUNC_4(VAR_7);


 VAR_11 = FUNC_1(VAR_6, VAR_7);
 if (VAR_11)
  goto end_reconstitute;

 if (VAR_8->flags & VAR_3)
  VAR_6->bridge_mode = VAR_0;
 else
  VAR_6->bridge_mode = VAR_1;
 FUNC_3(VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_8->num_alloc_vsi; VAR_9++) {
  if (!VAR_8->vsi[VAR_9] || VAR_8->vsi[VAR_9] == VAR_7)
   continue;

  if (VAR_8->vsi[VAR_9]->veb_idx == VAR_6->idx) {
   struct i40e_vsi *VAR_12 = VAR_8->vsi[VAR_9];

   VAR_12->uplink_seid = VAR_6->seid;
   VAR_11 = FUNC_2(VAR_12);
   if (VAR_11) {
    FUNC_0(&VAR_8->pdev->dev,
      "rebuild of vsi_idx %d failed: %d\n",
      VAR_9, VAR_11);
    goto end_reconstitute;
   }
   FUNC_4(VAR_12);
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_8->veb[VAR_10] && VAR_8->veb[VAR_10]->veb_idx == VAR_6->idx) {
   VAR_8->veb[VAR_10]->uplink_seid = VAR_6->seid;
   VAR_11 = FUNC_5(VAR_8->veb[VAR_10]);
   if (VAR_11)
    break;
  }
 }

end_reconstitute:
 return VAR_11;
}
