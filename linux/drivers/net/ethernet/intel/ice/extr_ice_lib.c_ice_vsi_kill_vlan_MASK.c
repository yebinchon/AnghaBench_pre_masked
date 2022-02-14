
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ice_vsi {int vsi_num; int idx; struct ice_pf* back; } ;
struct ice_pf {TYPE_4__* pdev; int hw; } ;
struct TYPE_5__ {int vlan_id; } ;
struct TYPE_6__ {TYPE_1__ vlan; } ;
struct TYPE_7__ {int src_id; int flag; TYPE_2__ l_data; int fltr_act; int vsi_handle; int lkup_type; } ;
struct ice_fltr_list_entry {int list_entry; TYPE_3__ fltr_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int ,int) ;
 int FUNC_3 (int *,char*,int ,int ,int) ;
 struct ice_fltr_list_entry* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_8 ;

int FUNC_8(struct ice_vsi *VAR_9, u16 VAR_10)
{
 struct ice_fltr_list_entry *VAR_11;
 struct ice_pf *VAR_12 = VAR_9->back;
 FUNC_1(VAR_8);
 enum ice_status VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_4(&VAR_12->pdev->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->fltr_info.lkup_type = VAR_7;
 VAR_11->fltr_info.vsi_handle = VAR_9->idx;
 VAR_11->fltr_info.fltr_act = VAR_5;
 VAR_11->fltr_info.l_data.vlan.vlan_id = VAR_10;
 VAR_11->fltr_info.flag = VAR_4;
 VAR_11->fltr_info.src_id = VAR_6;

 FUNC_0(&VAR_11->list_entry);
 FUNC_7(&VAR_11->list_entry, &VAR_8);

 VAR_13 = FUNC_6(&VAR_12->hw, &VAR_8);
 if (VAR_13 == VAR_3) {
  FUNC_2(&VAR_12->pdev->dev,
   "Failed to remove VLAN %d on VSI %i, it does not exist, status: %d\n",
   VAR_10, VAR_9->vsi_num, VAR_13);
 } else if (VAR_13) {
  FUNC_3(&VAR_12->pdev->dev,
   "Error removing VLAN %d on vsi %i error: %d\n",
   VAR_10, VAR_9->vsi_num, VAR_13);
  VAR_14 = -VAR_0;
 }

 FUNC_5(&VAR_12->pdev->dev, &VAR_8);
 return VAR_14;
}
