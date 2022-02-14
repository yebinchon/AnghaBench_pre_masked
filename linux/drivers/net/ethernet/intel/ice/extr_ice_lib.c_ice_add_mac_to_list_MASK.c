
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct list_head {int dummy; } ;
struct ice_vsi {int idx; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_6__ {int mac_addr; } ;
struct TYPE_7__ {TYPE_2__ mac; } ;
struct TYPE_8__ {TYPE_3__ l_data; int vsi_handle; int fltr_act; int lkup_type; int src_id; int flag; } ;
struct ice_fltr_list_entry {int list_entry; TYPE_4__ fltr_info; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct ice_fltr_list_entry* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,struct list_head*) ;

int FUNC_4(struct ice_vsi *VAR_6, struct list_head *VAR_7,
   const u8 *VAR_8)
{
 struct ice_fltr_list_entry *VAR_9;
 struct ice_pf *VAR_10 = VAR_6->back;

 VAR_9 = FUNC_1(&VAR_10->pdev->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->fltr_info.flag = VAR_2;
 VAR_9->fltr_info.src_id = VAR_4;
 VAR_9->fltr_info.lkup_type = VAR_5;
 VAR_9->fltr_info.fltr_act = VAR_3;
 VAR_9->fltr_info.vsi_handle = VAR_6->idx;
 FUNC_2(VAR_9->fltr_info.l_data.mac.mac_addr, VAR_8);

 FUNC_0(&VAR_9->list_entry);
 FUNC_3(&VAR_9->list_entry, VAR_7);

 return 0;
}
