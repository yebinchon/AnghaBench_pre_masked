
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_scan_umac_chan_param {int dummy; } ;
struct TYPE_8__ {struct iwl_scan_umac_chan_param channel; } ;
struct TYPE_7__ {struct iwl_scan_umac_chan_param channel; } ;
struct TYPE_6__ {struct iwl_scan_umac_chan_param channel; } ;
struct TYPE_5__ {struct iwl_scan_umac_chan_param channel; } ;
struct iwl_scan_req_umac {TYPE_4__ v1; TYPE_3__ v6; TYPE_2__ v7; TYPE_1__ v8; } ;
struct iwl_mvm {struct iwl_scan_req_umac* scan_cmd; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;

__attribute__((used)) static inline struct iwl_scan_umac_chan_param *
FUNC_3(struct iwl_mvm *VAR_0)
{
 struct iwl_scan_req_umac *VAR_1 = VAR_0->scan_cmd;

 if (FUNC_2(VAR_0))
  return &VAR_1->v8.channel;

 if (FUNC_1(VAR_0))
  return &VAR_1->v7.channel;

 if (FUNC_0(VAR_0))
  return &VAR_1->v6.channel;

 return &VAR_1->v1.channel;
}
