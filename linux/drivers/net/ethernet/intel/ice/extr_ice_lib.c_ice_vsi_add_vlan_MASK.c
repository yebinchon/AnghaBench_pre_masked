
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
struct TYPE_7__ {TYPE_2__ l_data; int vsi_handle; int src_id; int flag; int fltr_act; int lkup_type; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 struct ice_fltr_list_entry* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_7 ;

int FUNC_7(struct ice_vsi *VAR_8, u16 VAR_9)
{
 struct ice_fltr_list_entry *VAR_10;
 struct ice_pf *VAR_11 = VAR_8->back;
 FUNC_1(VAR_7);
 enum ice_status VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_3(&VAR_11->pdev->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->fltr_info.lkup_type = VAR_6;
 VAR_10->fltr_info.fltr_act = VAR_4;
 VAR_10->fltr_info.flag = VAR_3;
 VAR_10->fltr_info.src_id = VAR_5;
 VAR_10->fltr_info.vsi_handle = VAR_8->idx;
 VAR_10->fltr_info.l_data.vlan.vlan_id = VAR_9;

 FUNC_0(&VAR_10->list_entry);
 FUNC_6(&VAR_10->list_entry, &VAR_7);

 VAR_12 = FUNC_4(&VAR_11->hw, &VAR_7);
 if (VAR_12) {
  VAR_13 = -VAR_0;
  FUNC_2(&VAR_11->pdev->dev, "Failure Adding VLAN %d on VSI %i\n",
   VAR_9, VAR_8->vsi_num);
 }

 FUNC_5(&VAR_11->pdev->dev, &VAR_7);
 return VAR_13;
}
