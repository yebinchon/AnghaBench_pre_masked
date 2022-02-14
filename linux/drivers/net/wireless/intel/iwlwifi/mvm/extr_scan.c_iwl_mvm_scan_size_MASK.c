
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_scan_req_umac_tail_v2 {int dummy; } ;
struct iwl_scan_req_umac_tail_v1 {int dummy; } ;
struct iwl_scan_req_lmac {int dummy; } ;
struct iwl_scan_probe_req_v1 {int dummy; } ;
struct iwl_scan_channel_cfg_umac {int dummy; } ;
struct iwl_scan_channel_cfg_lmac {int dummy; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_4__ {int n_scan_channels; } ;
struct TYPE_3__ {TYPE_2__ ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;

int FUNC_5(struct iwl_mvm *VAR_5)
{
 int VAR_6 = VAR_0;
 int VAR_7;

 if (FUNC_3(VAR_5))
  VAR_6 = VAR_3;
 else if (FUNC_2(VAR_5))
  VAR_6 = VAR_2;
 else if (FUNC_1(VAR_5))
  VAR_6 = VAR_1;

 if (FUNC_0(&VAR_5->fw->ucode_capa, VAR_4)) {
  if (FUNC_4(VAR_5))
   VAR_7 = sizeof(struct iwl_scan_req_umac_tail_v2);
  else
   VAR_7 = sizeof(struct iwl_scan_req_umac_tail_v1);

  return VAR_6 +
   sizeof(struct iwl_scan_channel_cfg_umac) *
    VAR_5->fw->ucode_capa.n_scan_channels +
   VAR_7;
 }
 return sizeof(struct iwl_scan_req_lmac) +
  sizeof(struct iwl_scan_channel_cfg_lmac) *
  VAR_5->fw->ucode_capa.n_scan_channels +
  sizeof(struct iwl_scan_probe_req_v1);
}
