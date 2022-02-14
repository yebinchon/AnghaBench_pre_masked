
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ice_vsi {int vsi_num; int idx; struct ice_pf* back; } ;
struct ice_pf {TYPE_4__* pdev; int hw; } ;
struct TYPE_5__ {int ethertype; } ;
struct TYPE_6__ {TYPE_1__ ethertype_mac; } ;
struct TYPE_7__ {int src_id; int flag; int fltr_act; TYPE_2__ l_data; int vsi_handle; int lkup_type; } ;
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
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,char*,int ,int) ;
 struct ice_fltr_list_entry* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_9 ;

void FUNC_8(struct ice_vsi *VAR_10, bool VAR_11, bool VAR_12)
{
 struct ice_fltr_list_entry *VAR_13;
 struct ice_pf *VAR_14 = VAR_10->back;
 FUNC_1(VAR_9);
 enum ice_status VAR_15;

 VAR_13 = FUNC_3(&VAR_14->pdev->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return;

 VAR_13->fltr_info.lkup_type = VAR_8;
 VAR_13->fltr_info.vsi_handle = VAR_10->idx;
 VAR_13->fltr_info.l_data.ethertype_mac.ethertype = VAR_0;

 if (VAR_11) {
  VAR_13->fltr_info.fltr_act = VAR_2;
  VAR_13->fltr_info.flag = VAR_4;
  VAR_13->fltr_info.src_id = VAR_7;
 } else {
  VAR_13->fltr_info.fltr_act = VAR_5;
  VAR_13->fltr_info.flag = VAR_3;
  VAR_13->fltr_info.src_id = VAR_6;
 }

 FUNC_0(&VAR_13->list_entry);
 FUNC_7(&VAR_13->list_entry, &VAR_9);

 if (VAR_12)
  VAR_15 = FUNC_4(&VAR_14->hw, &VAR_9);
 else
  VAR_15 = FUNC_6(&VAR_14->hw, &VAR_9);

 if (VAR_15)
  FUNC_2(&VAR_14->pdev->dev,
   "Fail %s %s LLDP rule on VSI %i error: %d\n",
   VAR_12 ? "adding" : "removing", VAR_11 ? "TX" : "RX",
   VAR_10->vsi_num, VAR_15);

 FUNC_5(&VAR_14->pdev->dev, &VAR_9);
}
