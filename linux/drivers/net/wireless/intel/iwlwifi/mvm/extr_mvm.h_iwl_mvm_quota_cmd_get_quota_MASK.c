
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_time_quota_data_v1 {int dummy; } ;
struct iwl_time_quota_data {int dummy; } ;
struct iwl_time_quota_cmd {struct iwl_time_quota_data* quotas; } ;
struct iwl_mvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;

__attribute__((used)) static inline struct iwl_time_quota_data
*FUNC_1(struct iwl_mvm *VAR_0,
        struct iwl_time_quota_cmd *VAR_1,
        int VAR_2)
{
 struct iwl_time_quota_data_v1 *VAR_3;

 if (FUNC_0(VAR_0))
  return &VAR_1->quotas[VAR_2];

 VAR_3 = (struct iwl_time_quota_data_v1 *)VAR_1->quotas;
 return (struct iwl_time_quota_data *)&VAR_3[VAR_2];
}
