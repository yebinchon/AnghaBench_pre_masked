
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_restriction {int is_ht; } ;
struct iwl_tt_mgmt {int state; struct iwl_tt_restriction* restriction; int advanced_tt; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; } ;



bool FUNC_0(struct iwl_priv *VAR_0)
{
 struct iwl_tt_mgmt *VAR_1 = &VAR_0->thermal_throttle;
 struct iwl_tt_restriction *VAR_2;

 if (!VAR_0->thermal_throttle.advanced_tt)
  return 1;
 VAR_2 = VAR_1->restriction + VAR_1->state;
 return VAR_2->is_ht;
}
