
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct list_head {int dummy; } ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {int hw_vsi_id; } ;
struct ice_fltr_info {TYPE_1__ fwd_id; int vsi_handle; int fltr_act; } ;
struct ice_fltr_list_entry {int list_entry; struct ice_fltr_info fltr_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ice_fltr_list_entry* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_3, u16 VAR_4,
          struct list_head *VAR_5,
          struct ice_fltr_info *VAR_6)
{
 struct ice_fltr_list_entry *VAR_7;




 VAR_7 = FUNC_0(FUNC_2(VAR_3), sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return VAR_1;

 VAR_7->fltr_info = *VAR_6;






 VAR_7->fltr_info.fltr_act = VAR_2;
 VAR_7->fltr_info.vsi_handle = VAR_4;
 VAR_7->fltr_info.fwd_id.hw_vsi_id = FUNC_1(VAR_3, VAR_4);

 FUNC_3(&VAR_7->list_entry, VAR_5);

 return 0;
}
