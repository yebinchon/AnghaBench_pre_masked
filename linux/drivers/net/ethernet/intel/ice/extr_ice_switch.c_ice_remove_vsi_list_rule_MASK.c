
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_3__ {void* index; } ;
struct TYPE_4__ {TYPE_1__ vsi_list; } ;
struct ice_aqc_sw_rules_elem {TYPE_2__ pdata; void* type; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct ice_aqc_sw_rules_elem*) ;
 struct ice_aqc_sw_rules_elem* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (struct ice_hw*,scalar_t__*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_6(struct ice_hw *VAR_4, u16 VAR_5,
    enum ice_sw_lkup_type VAR_6)
{
 struct ice_aqc_sw_rules_elem *VAR_7;
 enum ice_status VAR_8;
 u16 VAR_9;

 VAR_9 = (u16)FUNC_0(0);
 VAR_7 = FUNC_3(FUNC_5(VAR_4), VAR_9, VAR_0);
 if (!VAR_7)
  return VAR_2;

 VAR_7->type = FUNC_1(VAR_1);
 VAR_7->pdata.vsi_list.index = FUNC_1(VAR_5);




 VAR_8 = FUNC_4(VAR_4, &VAR_5, VAR_6,
         VAR_3);

 FUNC_2(FUNC_5(VAR_4), VAR_7);
 return VAR_8;
}
