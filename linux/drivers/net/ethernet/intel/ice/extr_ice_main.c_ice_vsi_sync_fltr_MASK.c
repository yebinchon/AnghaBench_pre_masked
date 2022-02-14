
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int flags; } ;
struct ice_vsi {int current_netdev_flags; int state; int flags; int vsi_num; int idx; scalar_t__ vlan_ena; int tmp_sync_list; int tmp_unsync_list; struct net_device* netdev; struct ice_pf* back; } ;
struct TYPE_4__ {scalar_t__ sq_last_status; } ;
struct ice_hw {TYPE_2__ adminq; } ;
struct ice_pf {struct ice_hw hw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ice_hw*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct ice_hw*,int ,int,int ) ;
 int FUNC_6 (struct ice_vsi*,int ,int) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct ice_hw*,int *) ;
 scalar_t__ FUNC_9 (struct ice_vsi*) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 int FUNC_11 (struct net_device*,char*,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct ice_vsi *VAR_19)
{
 struct device *VAR_20 = &VAR_19->back->pdev->dev;
 struct net_device *VAR_21 = VAR_19->netdev;
 bool VAR_22 = 0;
 struct ice_pf *VAR_23 = VAR_19->back;
 struct ice_hw *VAR_24 = &VAR_23->hw;
 enum ice_status VAR_25 = 0;
 u32 VAR_26 = 0;
 u8 VAR_27;
 int VAR_28 = 0;

 if (!VAR_19->netdev)
  return -VAR_0;

 while (FUNC_15(VAR_15, VAR_19->state))
  FUNC_17(1000, 2000);

 VAR_26 = VAR_19->current_netdev_flags ^ VAR_19->netdev->flags;
 VAR_19->current_netdev_flags = VAR_19->netdev->flags;

 FUNC_0(&VAR_19->tmp_sync_list);
 FUNC_0(&VAR_19->tmp_unsync_list);

 if (FUNC_9(VAR_19)) {
  FUNC_3(VAR_11, VAR_19->flags);
  FUNC_3(VAR_9, VAR_19->flags);
  FUNC_3(VAR_12, VAR_19->flags);


  FUNC_12(VAR_21);
  FUNC_2(VAR_21, VAR_17,
         VAR_18);
  FUNC_1(VAR_21, VAR_17,
         VAR_18);

  FUNC_13(VAR_21);
 }


 VAR_25 = FUNC_8(VAR_24, &VAR_19->tmp_unsync_list);
 FUNC_7(VAR_20, &VAR_19->tmp_unsync_list);
 if (VAR_25) {
  FUNC_10(VAR_21, "Failed to delete MAC filters\n");

  if (VAR_25 == VAR_5) {
   VAR_28 = -VAR_2;
   goto out;
  }
 }


 VAR_25 = FUNC_4(VAR_24, &VAR_19->tmp_sync_list);
 FUNC_7(VAR_20, &VAR_19->tmp_sync_list);




 if (VAR_25 && VAR_25 != VAR_4) {
  FUNC_10(VAR_21, "Failed to add MAC filters\n");




  if (VAR_24->adminq.sq_last_status == VAR_3 &&
      !FUNC_15(VAR_16,
          VAR_19->state)) {
   VAR_22 = 1;
   FUNC_11(VAR_21,
        "Reached MAC filter limit, forcing promisc mode on VSI %d\n",
        VAR_19->vsi_num);
  } else {
   VAR_28 = -VAR_1;
   goto out;
  }
 }

 if (VAR_26 & VAR_13) {
  if (VAR_19->current_netdev_flags & VAR_13) {
   if (VAR_19->vlan_ena)
    VAR_27 = VAR_8;
   else
    VAR_27 = VAR_7;

   VAR_28 = FUNC_6(VAR_19, VAR_27, 1);
   if (VAR_28) {
    FUNC_10(VAR_21, "Error setting Multicast promiscuous mode on VSI %i\n",
        VAR_19->vsi_num);
    VAR_19->current_netdev_flags &= ~VAR_13;
    goto out_promisc;
   }
  } else if (!(VAR_19->current_netdev_flags & VAR_13)) {
   if (VAR_19->vlan_ena)
    VAR_27 = VAR_8;
   else
    VAR_27 = VAR_7;

   VAR_28 = FUNC_6(VAR_19, VAR_27, 0);
   if (VAR_28) {
    FUNC_10(VAR_21, "Error clearing Multicast promiscuous mode on VSI %i\n",
        VAR_19->vsi_num);
    VAR_19->current_netdev_flags |= VAR_13;
    goto out_promisc;
   }
  }
 }

 if (((VAR_26 & VAR_14) || VAR_22) ||
     FUNC_16(VAR_10, VAR_19->flags)) {
  FUNC_3(VAR_10, VAR_19->flags);
  if (VAR_19->current_netdev_flags & VAR_14) {

   VAR_25 = FUNC_5(VAR_24, VAR_19->idx, 1,
        VAR_6);
   if (VAR_25) {
    FUNC_10(VAR_21, "Error setting default VSI %i Rx rule\n",
        VAR_19->vsi_num);
    VAR_19->current_netdev_flags &= ~VAR_14;
    VAR_28 = -VAR_1;
    goto out_promisc;
   }
  } else {

   VAR_25 = FUNC_5(VAR_24, VAR_19->idx, 0,
        VAR_6);
   if (VAR_25) {
    FUNC_10(VAR_21, "Error clearing default VSI %i Rx rule\n",
        VAR_19->vsi_num);
    VAR_19->current_netdev_flags |= VAR_14;
    VAR_28 = -VAR_1;
    goto out_promisc;
   }
  }
 }
 goto exit;

out_promisc:
 FUNC_14(VAR_10, VAR_19->flags);
 goto exit;
out:

 FUNC_14(VAR_11, VAR_19->flags);
 FUNC_14(VAR_9, VAR_19->flags);
exit:
 FUNC_3(VAR_15, VAR_19->state);
 return VAR_28;
}
