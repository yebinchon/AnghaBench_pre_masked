
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_time_quota_cmd_v1 {int dummy; } ;
struct iwl_time_quota_cmd {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;

__attribute__((used)) static inline size_t FUNC_1(struct iwl_mvm *VAR_0)
{
 return FUNC_0(VAR_0) ?
  sizeof(struct iwl_time_quota_cmd) :
  sizeof(struct iwl_time_quota_cmd_v1);
}
