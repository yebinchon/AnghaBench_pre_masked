
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath10k {TYPE_1__ htt; } ;
typedef enum wmi_tlv_tx_pause_id { ____Placeholder_wmi_tlv_tx_pause_id } wmi_tlv_tx_pause_id ;
typedef enum wmi_tlv_tx_pause_action { ____Placeholder_wmi_tlv_tx_pause_action } wmi_tlv_tx_pause_action ;


 int VAR_0 ;


 int FUNC_0 (struct ath10k*,int ,char*,int,int ) ;
 int FUNC_1 (struct ath10k_vif*,int) ;
 int FUNC_2 (struct ath10k_vif*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k_vif *VAR_1,
        enum wmi_tlv_tx_pause_id VAR_2,
        enum wmi_tlv_tx_pause_action VAR_3)
{
 struct ath10k *VAR_4 = VAR_1->ar;

 FUNC_3(&VAR_4->htt.tx_lock);

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_4, VAR_0,
      "received unknown tx pause action %d on vdev %i, ignoring\n",
       VAR_3, VAR_1->vdev_id);
  break;
 }
}
