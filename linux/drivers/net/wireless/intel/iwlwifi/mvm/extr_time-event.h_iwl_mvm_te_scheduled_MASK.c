
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_time_event_data {int uid; } ;



__attribute__((used)) static inline bool
FUNC_0(struct iwl_mvm_time_event_data *VAR_0)
{
 if (!VAR_0)
  return 0;

 return !!VAR_0->uid;
}
