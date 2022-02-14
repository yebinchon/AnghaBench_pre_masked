
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_mvm {int dummy; } ;
typedef enum iwl_mvm_traffic_load { ____Placeholder_iwl_mvm_traffic_load } iwl_mvm_traffic_load ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static enum iwl_mvm_traffic_load
FUNC_1(struct iwl_mvm *VAR_5, u32 VAR_6, unsigned long VAR_7)
{
 u8 VAR_8 = FUNC_0(VAR_6, VAR_7);

 if (VAR_8 > VAR_0)
  return VAR_2;
 if (VAR_8 > VAR_1)
  return VAR_4;

 return VAR_3;
}
