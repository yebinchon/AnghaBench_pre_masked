
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ fltr_act; scalar_t__ vsi_handle; } ;
struct ice_fltr_mgmt_list_entry {TYPE_2__* vsi_list_info; TYPE_1__ fltr_info; } ;
struct TYPE_4__ {int vsi_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_1(struct ice_fltr_mgmt_list_entry *VAR_2, u16 VAR_3)
{
 return ((VAR_2->fltr_info.fltr_act == VAR_0 &&
   VAR_2->fltr_info.vsi_handle == VAR_3) ||
  (VAR_2->fltr_info.fltr_act == VAR_1 &&
   (FUNC_0(VAR_3, VAR_2->vsi_list_info->vsi_map))));
}
