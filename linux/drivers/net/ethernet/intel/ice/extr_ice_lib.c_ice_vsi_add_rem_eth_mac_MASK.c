
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ice_vsi {int vsi_num; int ethtype; int idx; struct ice_pf* back; } ;
struct ice_pf {TYPE_4__* pdev; int hw; } ;
struct TYPE_5__ {int ethertype; } ;
struct TYPE_6__ {TYPE_1__ ethertype_mac; } ;
struct TYPE_7__ {TYPE_2__ l_data; int vsi_handle; int src_id; int flag; int fltr_act; int lkup_type; } ;
struct ice_fltr_list_entry {int list_entry; TYPE_3__ fltr_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 struct ice_fltr_list_entry* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8(struct ice_vsi *VAR_6, bool VAR_7)
{
 struct ice_fltr_list_entry *VAR_8;
 struct ice_pf *VAR_9 = VAR_6->back;
 FUNC_1(VAR_5);
 enum ice_status VAR_10;

 VAR_8 = FUNC_3(&VAR_9->pdev->dev, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return;

 VAR_8->fltr_info.lkup_type = VAR_4;
 VAR_8->fltr_info.fltr_act = VAR_1;
 VAR_8->fltr_info.flag = VAR_2;
 VAR_8->fltr_info.src_id = VAR_3;
 VAR_8->fltr_info.vsi_handle = VAR_6->idx;
 VAR_8->fltr_info.l_data.ethertype_mac.ethertype = VAR_6->ethtype;

 FUNC_0(&VAR_8->list_entry);
 FUNC_7(&VAR_8->list_entry, &VAR_5);

 if (VAR_7)
  VAR_10 = FUNC_4(&VAR_9->hw, &VAR_5);
 else
  VAR_10 = FUNC_6(&VAR_9->hw, &VAR_5);

 if (VAR_10)
  FUNC_2(&VAR_9->pdev->dev,
   "Failure Adding or Removing Ethertype on VSI %i error: %d\n",
   VAR_6->vsi_num, VAR_10);

 FUNC_5(&VAR_9->pdev->dev, &VAR_5);
}
