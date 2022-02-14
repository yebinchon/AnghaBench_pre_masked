
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct mutex {int dummy; } ;
struct ice_switch_info {TYPE_1__* recp_list; } ;
struct ice_hw {TYPE_2__* port_info; struct ice_switch_info* switch_info; } ;
struct TYPE_6__ {int hw_vsi_id; } ;
struct ice_fltr_info {int flag; TYPE_3__ fwd_id; int src; int vsi_handle; } ;
struct ice_fltr_mgmt_list_entry {struct ice_fltr_info fltr_info; } ;
struct ice_fltr_list_entry {struct ice_fltr_info fltr_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {int lport; } ;
struct TYPE_4__ {struct mutex filt_rule_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_hw*,struct ice_fltr_mgmt_list_entry*,struct ice_fltr_info*,struct ice_fltr_info*) ;
 int FUNC_1 (struct ice_hw*,struct ice_fltr_list_entry*) ;
 struct ice_fltr_mgmt_list_entry* FUNC_2 (struct ice_hw*,size_t,struct ice_fltr_info*) ;
 int FUNC_3 (struct ice_hw*,int ) ;
 int FUNC_4 (struct ice_hw*,int ) ;
 int FUNC_5 (struct mutex*) ;
 int FUNC_6 (struct mutex*) ;

__attribute__((used)) static enum ice_status
FUNC_7(struct ice_hw *VAR_3, u8 VAR_4,
        struct ice_fltr_list_entry *VAR_5)
{
 struct ice_switch_info *VAR_6 = VAR_3->switch_info;
 struct ice_fltr_info *VAR_7, *VAR_8;
 struct ice_fltr_mgmt_list_entry *VAR_9;
 struct mutex *VAR_10;
 enum ice_status VAR_11 = 0;

 if (!FUNC_4(VAR_3, VAR_5->fltr_info.vsi_handle))
  return VAR_0;
 VAR_5->fltr_info.fwd_id.hw_vsi_id =
  FUNC_3(VAR_3, VAR_5->fltr_info.vsi_handle);

 VAR_10 = &VAR_6->recp_list[VAR_4].filt_rule_lock;

 FUNC_5(VAR_10);
 VAR_7 = &VAR_5->fltr_info;
 if (VAR_7->flag & VAR_1)
  VAR_7->src = VAR_3->port_info->lport;
 else if (VAR_7->flag & VAR_2)
  VAR_7->src = VAR_5->fltr_info.fwd_id.hw_vsi_id;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_7);
 if (!VAR_9) {
  FUNC_6(VAR_10);
  return FUNC_1(VAR_3, VAR_5);
 }

 VAR_8 = &VAR_9->fltr_info;
 VAR_11 = FUNC_0(VAR_3, VAR_9, VAR_8, VAR_7);
 FUNC_6(VAR_10);

 return VAR_11;
}
