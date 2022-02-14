
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int global_load; } ;
struct TYPE_4__ {TYPE_1__ result; } ;
struct iwl_mvm {TYPE_2__ tcm; } ;
typedef enum iwl_mvm_traffic_load { ____Placeholder_iwl_mvm_traffic_load } iwl_mvm_traffic_load ;



__attribute__((used)) static enum iwl_mvm_traffic_load FUNC_0(struct iwl_mvm *VAR_0)
{
 return VAR_0->tcm.result.global_load;
}
