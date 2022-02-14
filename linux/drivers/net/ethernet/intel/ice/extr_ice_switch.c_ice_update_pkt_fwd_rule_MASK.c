
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_fltr_info {int fltr_rule_id; } ;
struct TYPE_3__ {int index; } ;
struct TYPE_4__ {TYPE_1__ lkup_tx_rx; } ;
struct ice_aqc_sw_rules_elem {TYPE_2__ pdata; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ice_aqc_sw_rules_elem*) ;
 struct ice_aqc_sw_rules_elem* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ice_hw*,struct ice_aqc_sw_rules_elem*,int ,int,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct ice_hw*,struct ice_fltr_info*,struct ice_aqc_sw_rules_elem*,int ) ;
 int FUNC_5 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_6(struct ice_hw *VAR_4, struct ice_fltr_info *VAR_5)
{
 struct ice_aqc_sw_rules_elem *VAR_6;
 enum ice_status VAR_7;

 VAR_6 = FUNC_2(FUNC_5(VAR_4),
         VAR_2, VAR_0);
 if (!VAR_6)
  return VAR_1;

 FUNC_4(VAR_4, VAR_5, VAR_6, VAR_3);

 VAR_6->pdata.lkup_tx_rx.index = FUNC_0(VAR_5->fltr_rule_id);


 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_2, 1,
     VAR_3, ((void*)0));

 FUNC_1(FUNC_5(VAR_4), VAR_6);
 return VAR_7;
}
