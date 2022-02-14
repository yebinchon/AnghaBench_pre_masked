
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct i40e_veb {scalar_t__ seid; int enabled_tc; int idx; int veb_idx; scalar_t__ uplink_seid; scalar_t__ flags; } ;
struct i40e_pf {int num_alloc_vsi; scalar_t__ mac_seid; int lan_vsi; int lan_veb; TYPE_2__** vsi; struct i40e_veb** veb; TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ seid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (struct i40e_veb*,TYPE_2__*) ;
 int FUNC_2 (struct i40e_veb*) ;
 int FUNC_3 (struct i40e_pf*) ;

struct i40e_veb *FUNC_4(struct i40e_pf *VAR_2, u16 VAR_3,
    u16 VAR_4, u16 VAR_5,
    u8 VAR_6)
{
 struct i40e_veb *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 int VAR_11;


 if ((VAR_4 == 0 || VAR_5 == 0) &&
     (VAR_4 + VAR_5 != 0)) {
  FUNC_0(&VAR_2->pdev->dev,
    "one, not both seid's are 0: uplink=%d vsi=%d\n",
    VAR_4, VAR_5);
  return ((void*)0);
 }


 for (VAR_9 = 0; VAR_9 < VAR_2->num_alloc_vsi; VAR_9++)
  if (VAR_2->vsi[VAR_9] && VAR_2->vsi[VAR_9]->seid == VAR_5)
   break;
 if (VAR_9 == VAR_2->num_alloc_vsi && VAR_5 != 0) {
  FUNC_0(&VAR_2->pdev->dev, "vsi seid %d not found\n",
    VAR_5);
  return ((void*)0);
 }

 if (VAR_4 && VAR_4 != VAR_2->mac_seid) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_2->veb[VAR_10] &&
       VAR_2->veb[VAR_10]->seid == VAR_4) {
    VAR_8 = VAR_2->veb[VAR_10];
    break;
   }
  }
  if (!VAR_8) {
   FUNC_0(&VAR_2->pdev->dev,
     "uplink seid %d not found\n", VAR_4);
   return ((void*)0);
  }
 }


 VAR_10 = FUNC_3(VAR_2);
 if (VAR_10 < 0)
  goto err_alloc;
 VAR_7 = VAR_2->veb[VAR_10];
 VAR_7->flags = VAR_3;
 VAR_7->uplink_seid = VAR_4;
 VAR_7->veb_idx = (VAR_8 ? VAR_8->idx : VAR_1);
 VAR_7->enabled_tc = (VAR_6 ? VAR_6 : 0x1);


 VAR_11 = FUNC_1(VAR_7, VAR_2->vsi[VAR_9]);
 if (VAR_11)
  goto err_veb;
 if (VAR_9 == VAR_2->lan_vsi)
  VAR_2->lan_veb = VAR_7->idx;

 return VAR_7;

err_veb:
 FUNC_2(VAR_7);
err_alloc:
 return ((void*)0);
}
