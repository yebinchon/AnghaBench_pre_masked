
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int enabled_tc; } ;
struct i40e_vsi {scalar_t__ seid; scalar_t__ uplink_seid; int flags; int type; int alloc_queue_pairs; int base_queue; int netdev_registered; int * netdev; int idx; int vf_id; int veb_idx; TYPE_3__* back; TYPE_1__ tc_config; } ;
struct i40e_veb {scalar_t__ seid; int idx; int bridge_mode; } ;
struct i40e_pf {scalar_t__ mac_seid; int num_alloc_vsi; size_t lan_vsi; int flags; int hw_features; int hw; TYPE_4__* pdev; int qp_pile; struct i40e_vsi** vsi; struct i40e_veb** veb; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 scalar_t__ VAR_6 ;

 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 int FUNC_5 (struct i40e_veb*) ;
 int FUNC_6 (struct i40e_vsi*) ;
 int FUNC_7 (struct i40e_vsi*) ;
 scalar_t__ FUNC_8 (struct i40e_vsi*) ;
 int FUNC_9 (struct i40e_pf*,int ,scalar_t__,int ) ;
 struct i40e_veb* FUNC_10 (struct i40e_pf*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (struct i40e_vsi*) ;
 int FUNC_12 (struct i40e_vsi*) ;
 int FUNC_13 (struct i40e_vsi*) ;
 int FUNC_14 (struct i40e_vsi*) ;
 int FUNC_15 (struct i40e_pf*,scalar_t__) ;
 int FUNC_16 (struct i40e_vsi*) ;
 int FUNC_17 (struct i40e_vsi*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

struct i40e_vsi *FUNC_21(struct i40e_pf *VAR_7, u8 VAR_8,
    u16 VAR_9, u32 VAR_10)
{
 struct i40e_vsi *VAR_11 = ((void*)0);
 struct i40e_veb *VAR_12 = ((void*)0);
 u16 VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_7->veb[VAR_15] && VAR_7->veb[VAR_15]->seid == VAR_9) {
   VAR_12 = VAR_7->veb[VAR_15];
   break;
  }
 }

 if (!VAR_12 && VAR_9 != VAR_7->mac_seid) {

  for (VAR_15 = 0; VAR_15 < VAR_7->num_alloc_vsi; VAR_15++) {
   if (VAR_7->vsi[VAR_15] && VAR_7->vsi[VAR_15]->seid == VAR_9) {
    VAR_11 = VAR_7->vsi[VAR_15];
    break;
   }
  }
  if (!VAR_11) {
   FUNC_0(&VAR_7->pdev->dev, "no such uplink_seid %d\n",
     VAR_9);
   return ((void*)0);
  }

  if (VAR_11->uplink_seid == VAR_7->mac_seid)
   VAR_12 = FUNC_10(VAR_7, 0, VAR_7->mac_seid, VAR_11->seid,
          VAR_11->tc_config.enabled_tc);
  else if ((VAR_11->flags & VAR_5) == 0)
   VAR_12 = FUNC_10(VAR_7, 0, VAR_11->uplink_seid, VAR_11->seid,
          VAR_11->tc_config.enabled_tc);
  if (VAR_12) {
   if (VAR_11->seid != VAR_7->vsi[VAR_7->lan_vsi]->seid) {
    FUNC_0(&VAR_11->back->pdev->dev,
      "New VSI creation error, uplink seid of LAN VSI expected.\n");
    return ((void*)0);
   }




   if (!(VAR_7->flags & VAR_1)) {
    VAR_12->bridge_mode = VAR_0;
    VAR_7->flags &= ~VAR_1;
   }
   FUNC_5(VAR_12);
  }
  for (VAR_15 = 0; VAR_15 < VAR_3 && !VAR_12; VAR_15++) {
   if (VAR_7->veb[VAR_15] && VAR_7->veb[VAR_15]->seid == VAR_11->uplink_seid)
    VAR_12 = VAR_7->veb[VAR_15];
  }
  if (!VAR_12) {
   FUNC_0(&VAR_7->pdev->dev, "couldn't add VEB\n");
   return ((void*)0);
  }

  VAR_11->flags |= VAR_5;
  VAR_9 = VAR_12->seid;
 }


 VAR_16 = FUNC_15(VAR_7, VAR_8);
 if (VAR_16 < 0)
  goto err_alloc;
 VAR_11 = VAR_7->vsi[VAR_16];
 if (!VAR_11)
  goto err_alloc;
 VAR_11->type = VAR_8;
 VAR_11->veb_idx = (VAR_12 ? VAR_12->idx : VAR_4);

 if (VAR_8 == 129)
  VAR_7->lan_vsi = VAR_16;
 else if (VAR_8 == VAR_6)
  VAR_11->vf_id = VAR_10;

 VAR_13 = VAR_11->alloc_queue_pairs *
       (FUNC_8(VAR_11) ? 2 : 1);

 VAR_14 = FUNC_9(VAR_7, VAR_7->qp_pile, VAR_13, VAR_11->idx);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_7->pdev->dev,
    "failed to get tracking for %d queues for VSI %d err=%d\n",
    VAR_13, VAR_11->seid, VAR_14);
  goto err_vsi;
 }
 VAR_11->base_queue = VAR_14;


 VAR_11->uplink_seid = VAR_9;
 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14)
  goto err_vsi;

 switch (VAR_11->type) {

 case 129:
 case 128:
  VAR_14 = FUNC_6(VAR_11);
  if (VAR_14)
   goto err_netdev;
  VAR_14 = FUNC_19(VAR_11->netdev);
  if (VAR_14)
   goto err_netdev;
  VAR_11->netdev_registered = 1;
  FUNC_18(VAR_11->netdev);






 case 130:

  VAR_14 = FUNC_17(VAR_11);
  if (VAR_14)
   goto err_msix;

  VAR_14 = FUNC_3(VAR_11);
  if (VAR_14)
   goto err_rings;


  FUNC_14(VAR_11);

  FUNC_16(VAR_11);
  break;

 default:

  break;
 }

 if ((VAR_7->hw_features & VAR_2) &&
     (VAR_11->type == 128)) {
  VAR_14 = FUNC_12(VAR_11);
 }
 return VAR_11;

err_rings:
 FUNC_13(VAR_11);
err_msix:
 if (VAR_11->netdev_registered) {
  VAR_11->netdev_registered = 0;
  FUNC_20(VAR_11->netdev);
  FUNC_1(VAR_11->netdev);
  VAR_11->netdev = ((void*)0);
 }
err_netdev:
 FUNC_4(&VAR_7->hw, VAR_11->seid, ((void*)0));
err_vsi:
 FUNC_11(VAR_11);
err_alloc:
 return ((void*)0);
}
