
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_mac_tx_pause {int pause_id; int action; int vdev_id; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath10k {TYPE_1__ htt; int hw; } ;
typedef enum wmi_tlv_tx_pause_id { ____Placeholder_wmi_tlv_tx_pause_id } wmi_tlv_tx_pause_id ;
typedef enum wmi_tlv_tx_pause_action { ____Placeholder_wmi_tlv_tx_pause_action } wmi_tlv_tx_pause_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct ath10k_mac_tx_pause*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath10k *VAR_2, u32 VAR_3,
         enum wmi_tlv_tx_pause_id VAR_4,
         enum wmi_tlv_tx_pause_action VAR_5)
{
 struct ath10k_mac_tx_pause VAR_6 = {
  .vdev_id = VAR_3,
  .pause_id = VAR_4,
  .action = VAR_5,
 };

 FUNC_1(&VAR_2->htt.tx_lock);
 FUNC_0(VAR_2->hw,
         VAR_0,
         VAR_1,
         &VAR_6);
 FUNC_2(&VAR_2->htt.tx_lock);
}
