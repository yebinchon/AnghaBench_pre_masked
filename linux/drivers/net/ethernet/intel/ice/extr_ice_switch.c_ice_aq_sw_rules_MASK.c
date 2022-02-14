
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct TYPE_3__ {int num_rules_fltr_entry_index; } ;
struct TYPE_4__ {TYPE_1__ sw_rules; } ;
struct ice_aq_desc {TYPE_2__ params; int flags; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,void*,int ,struct ice_sq_cd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ice_aq_desc*,int) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_5, void *VAR_6, u16 VAR_7,
  u8 VAR_8, enum ice_adminq_opc VAR_9, struct ice_sq_cd *VAR_10)
{
 struct ice_aq_desc VAR_11;

 if (VAR_9 != VAR_2 &&
     VAR_9 != VAR_4 &&
     VAR_9 != VAR_3)
  return VAR_1;

 FUNC_2(&VAR_11, VAR_9);

 VAR_11.flags |= FUNC_0(VAR_0);
 VAR_11.params.sw_rules.num_rules_fltr_entry_index =
  FUNC_0(VAR_8);
 return FUNC_1(VAR_5, &VAR_11, VAR_6, VAR_7, VAR_10);
}
