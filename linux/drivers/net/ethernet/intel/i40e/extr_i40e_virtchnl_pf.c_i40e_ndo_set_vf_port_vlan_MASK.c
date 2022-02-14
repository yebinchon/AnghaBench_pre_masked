
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_12__ {scalar_t__ pvid; } ;
struct i40e_vsi {int id; TYPE_5__ info; TYPE_7__* back; int mac_filter_hash_lock; } ;
struct i40e_vf {size_t lan_vsi_idx; int port_vlan_id; int vf_states; int lan_vsi_id; } ;
struct i40e_pf {int state; TYPE_6__* pdev; struct i40e_vsi** vsi; struct i40e_vf* vf; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
typedef scalar_t__ __be16 ;
struct TYPE_10__ {int asq_last_status; } ;
struct TYPE_11__ {TYPE_3__ aq; } ;
struct TYPE_14__ {TYPE_4__ hw; TYPE_2__* pdev; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,int,...) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct i40e_vsi*,int) ;
 int FUNC_6 (struct i40e_vf*,int ,int,int) ;
 int FUNC_7 (struct i40e_vsi*,int) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (struct i40e_pf*,int) ;
 int FUNC_10 (struct i40e_vf*) ;
 int FUNC_11 (struct i40e_vsi*,int) ;
 scalar_t__ FUNC_12 (struct i40e_vsi*) ;
 int FUNC_13 (struct i40e_vsi*) ;
 int FUNC_14 (scalar_t__) ;
 struct i40e_netdev_priv* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ,int *) ;

int FUNC_20(struct net_device *VAR_12, int VAR_13,
         u16 VAR_14, u8 VAR_15, __be16 VAR_16)
{
 u16 VAR_17 = VAR_14 | (VAR_15 << VAR_9);
 struct i40e_netdev_priv *VAR_18 = FUNC_15(VAR_12);
 bool VAR_19 = 0, VAR_20 = 0;
 struct i40e_pf *VAR_21 = VAR_18->vsi->back;
 struct i40e_vsi *VAR_22;
 struct i40e_vf *VAR_23;
 int VAR_24 = 0;

 if (FUNC_18(VAR_11, VAR_21->state)) {
  FUNC_3(&VAR_21->pdev->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }


 VAR_24 = FUNC_9(VAR_21, VAR_13);
 if (VAR_24)
  goto error_pvid;

 if ((VAR_14 > VAR_4) || (VAR_15 > 7)) {
  FUNC_1(&VAR_21->pdev->dev, "Invalid VF Parameters\n");
  VAR_24 = -VAR_1;
  goto error_pvid;
 }

 if (VAR_16 != FUNC_4(VAR_3)) {
  FUNC_1(&VAR_21->pdev->dev, "VF VLAN protocol is not supported\n");
  VAR_24 = -VAR_2;
  goto error_pvid;
 }

 VAR_23 = &VAR_21->vf[VAR_13];
 VAR_22 = VAR_21->vsi[VAR_23->lan_vsi_idx];
 if (!FUNC_19(VAR_5, &VAR_23->vf_states)) {
  FUNC_1(&VAR_21->pdev->dev, "VF %d still in reset. Try again.\n",
   VAR_13);
  VAR_24 = -VAR_0;
  goto error_pvid;
 }

 if (FUNC_14(VAR_22->info.pvid) == VAR_17)

  goto error_pvid;

 if (FUNC_12(VAR_22)) {
  FUNC_1(&VAR_21->pdev->dev,
   "VF %d has already configured VLAN filters and the administrator is requesting a port VLAN override.\nPlease unload and reload the VF driver for this change to take effect.\n",
   VAR_13);




  FUNC_10(VAR_23);

  VAR_22 = VAR_21->vsi[VAR_23->lan_vsi_idx];
 }


 FUNC_16(&VAR_22->mac_filter_hash_lock);
 if ((!(VAR_14 || VAR_15) ||
     VAR_17 != FUNC_14(VAR_22->info.pvid)) &&
     VAR_22->info.pvid) {
  VAR_24 = FUNC_5(VAR_22, VAR_8);
  if (VAR_24) {
   FUNC_2(&VAR_22->back->pdev->dev,
     "add VF VLAN failed, ret=%d aq_err=%d\n", VAR_24,
     VAR_22->back->hw.aq.asq_last_status);
   FUNC_17(&VAR_22->mac_filter_hash_lock);
   goto error_pvid;
  }
 }

 if (VAR_22->info.pvid) {

  FUNC_7(VAR_22, (FUNC_14(VAR_22->info.pvid) &
        VAR_10));
 }

 FUNC_17(&VAR_22->mac_filter_hash_lock);


 VAR_24 = FUNC_6(VAR_23, VAR_23->lan_vsi_id,
           VAR_19, VAR_20);
 if (VAR_24) {
  FUNC_1(&VAR_21->pdev->dev, "Unable to config VF promiscuous mode\n");
  goto error_pvid;
 }

 if (VAR_14 || VAR_15)
  VAR_24 = FUNC_11(VAR_22, VAR_17);
 else
  FUNC_13(VAR_22);
 FUNC_16(&VAR_22->mac_filter_hash_lock);

 if (VAR_14) {
  FUNC_2(&VAR_21->pdev->dev, "Setting VLAN %d, QOS 0x%x on VF %d\n",
    VAR_14, VAR_15, VAR_13);


  VAR_24 = FUNC_5(VAR_22, VAR_14);
  if (VAR_24) {
   FUNC_2(&VAR_22->back->pdev->dev,
     "add VF VLAN failed, ret=%d aq_err=%d\n", VAR_24,
     VAR_22->back->hw.aq.asq_last_status);
   FUNC_17(&VAR_22->mac_filter_hash_lock);
   goto error_pvid;
  }


  FUNC_7(VAR_22, VAR_8);
 }

 FUNC_17(&VAR_22->mac_filter_hash_lock);

 if (FUNC_19(VAR_7, &VAR_23->vf_states))
  VAR_20 = 1;

 if (FUNC_19(VAR_6, &VAR_23->vf_states))
  VAR_19 = 1;


 FUNC_8(VAR_22->back);

 if (VAR_24) {
  FUNC_1(&VAR_21->pdev->dev, "Unable to update VF vsi context\n");
  goto error_pvid;
 }




 VAR_23->port_vlan_id = FUNC_14(VAR_22->info.pvid);

 VAR_24 = FUNC_6(VAR_23, VAR_22->id, VAR_19, VAR_20);
 if (VAR_24) {
  FUNC_1(&VAR_21->pdev->dev, "Unable to config vf promiscuous mode\n");
  goto error_pvid;
 }

 VAR_24 = 0;

error_pvid:
 FUNC_0(VAR_11, VAR_21->state);
 return VAR_24;
}
