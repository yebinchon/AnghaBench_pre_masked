
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t* prioritytable; } ;
struct i40e_dcbx_config {size_t numapps; TYPE_1__ etscfg; struct i40e_dcb_app_priority_table* app; } ;
struct i40e_hw {struct i40e_dcbx_config local_dcbx_config; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_dcb_app_priority_table {scalar_t__ selector; scalar_t__ protocolid; size_t priority; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 FUNC_1(struct i40e_pf *VAR_2)
{
 struct i40e_dcb_app_priority_table VAR_3;
 struct i40e_hw *VAR_4 = &VAR_2->hw;
 u8 VAR_5 = 1;
 u8 VAR_6, VAR_7;

 struct i40e_dcbx_config *VAR_8 = &VAR_4->local_dcbx_config;

 for (VAR_7 = 0; VAR_7 < VAR_8->numapps; VAR_7++) {
  VAR_3 = VAR_8->app[VAR_7];
  if (VAR_3.selector == VAR_1 &&
      VAR_3.protocolid == VAR_0) {
   VAR_6 = VAR_8->etscfg.prioritytable[VAR_3.priority];
   VAR_5 |= FUNC_0(VAR_6);
   break;
  }
 }

 return VAR_5;
}
