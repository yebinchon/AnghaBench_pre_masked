
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {int target_version_major; } ;
struct TYPE_7__ {int svc_map; } ;
struct ath10k {TYPE_4__ htt; TYPE_3__ wmi; TYPE_2__* running_fw; } ;
typedef enum ath10k_mac_tx_path { ____Placeholder_ath10k_mac_tx_path } ath10k_mac_tx_path ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;
struct TYPE_5__ {int fw_features; } ;
struct TYPE_6__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static enum ath10k_mac_tx_path
FUNC_1(struct ath10k *VAR_6,
      struct sk_buff *VAR_7,
      enum ath10k_hw_txrx_mode VAR_8)
{
 switch (VAR_8) {
 case 128:
 case 129:
 case 131:
  return VAR_1;
 case 130:
  if (FUNC_0(VAR_0,
        VAR_6->running_fw->fw_file.fw_features) ||
        FUNC_0(VAR_5,
          VAR_6->wmi.svc_map))
   return VAR_4;
  else if (VAR_6->htt.target_version_major >= 3)
   return VAR_1;
  else
   return VAR_2;
 }

 return VAR_3;
}
