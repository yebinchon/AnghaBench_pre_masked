
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ pvid; } ;
struct ice_vsi {TYPE_3__ info; } ;
struct ice_vf {size_t lan_vsi_idx; int port_vlan_id; int vf_states; } ;
struct ice_pf {int num_alloc_vfs; TYPE_2__* pdev; struct ice_vsi** vsi; struct ice_vf* vf; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
typedef scalar_t__ __be16 ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct ice_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ice_vsi*,int) ;
 int FUNC_4 (struct ice_vsi*,int) ;
 int FUNC_5 (struct ice_vsi*,int,int) ;
 int FUNC_6 (scalar_t__) ;
 struct ice_netdev_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ) ;

int
FUNC_9(struct net_device *VAR_8, int VAR_9, u16 VAR_10, u8 VAR_11,
       __be16 VAR_12)
{
 u16 VAR_13 = VAR_10 | (VAR_11 << VAR_6);
 struct ice_netdev_priv *VAR_14 = FUNC_7(VAR_8);
 struct ice_pf *VAR_15 = VAR_14->vsi->back;
 struct ice_vsi *VAR_16;
 struct ice_vf *VAR_17;
 int VAR_18 = 0;


 if (VAR_9 >= VAR_15->num_alloc_vfs) {
  FUNC_0(&VAR_15->pdev->dev, "invalid VF id: %d\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_10 > VAR_4 || VAR_11 > 7) {
  FUNC_0(&VAR_15->pdev->dev, "Invalid VF Parameters\n");
  return -VAR_1;
 }

 if (VAR_12 != FUNC_2(VAR_3)) {
  FUNC_0(&VAR_15->pdev->dev, "VF VLAN protocol is not supported\n");
  return -VAR_2;
 }

 VAR_17 = &VAR_15->vf[VAR_9];
 VAR_16 = VAR_15->vsi[VAR_17->lan_vsi_idx];
 if (!FUNC_8(VAR_5, VAR_17->vf_states)) {
  FUNC_0(&VAR_15->pdev->dev, "VF %d in reset. Try again.\n", VAR_9);
  return -VAR_0;
 }

 if (FUNC_6(VAR_16->info.pvid) == VAR_13) {

  FUNC_1(&VAR_15->pdev->dev,
    "Duplicate pvid %d request\n", VAR_13);
  return VAR_18;
 }


 if (VAR_16->info.pvid)
  FUNC_4(VAR_16, (FUNC_6(VAR_16->info.pvid) &
      VAR_7));

 if (VAR_10 || VAR_11) {
  VAR_18 = FUNC_5(VAR_16, VAR_13, 1);
  if (VAR_18)
   goto error_set_pvid;
 } else {
  FUNC_5(VAR_16, 0, 0);
  VAR_16->info.pvid = 0;
 }

 if (VAR_10) {
  FUNC_1(&VAR_15->pdev->dev, "Setting VLAN %d, QOS 0x%x on VF %d\n",
    VAR_10, VAR_11, VAR_9);


  VAR_18 = FUNC_3(VAR_16, VAR_10);
  if (VAR_18)
   goto error_set_pvid;
 }




 VAR_17->port_vlan_id = FUNC_6(VAR_16->info.pvid);

error_set_pvid:
 return VAR_18;
}
