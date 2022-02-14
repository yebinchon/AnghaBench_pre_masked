
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tlv_bcn_tx_status_ev {int vdev_id; int tx_status; } ;
struct sk_buff {int len; int data; } ;
struct ath10k_vif {int ap_csa_work; TYPE_1__* vif; scalar_t__ is_up; } ;
struct ath10k {int hw; } ;
struct TYPE_2__ {scalar_t__ csa_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;




 size_t VAR_2 ;
 int FUNC_2 (int ) ;
 struct ath10k_vif* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (struct ath10k*,char*,int,...) ;
 void** FUNC_5 (struct ath10k*,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (void const**) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_3,
           struct sk_buff *VAR_4)
{
 const void **VAR_5;
 const struct wmi_tlv_bcn_tx_status_ev *VAR_6;
 struct ath10k_vif *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = FUNC_5(VAR_3, VAR_4->data, VAR_4->len, VAR_1);
 if (FUNC_0(VAR_5)) {
  VAR_10 = FUNC_1(VAR_5);
  FUNC_4(VAR_3, "failed to parse tlv: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_6 = VAR_5[VAR_2];
 if (!VAR_6) {
  FUNC_7(VAR_5);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6->tx_status);
 VAR_8 = FUNC_2(VAR_6->vdev_id);

 switch (VAR_9) {
 case 129:
  break;
 case 128:
 case 131:
 case 130:



  FUNC_4(VAR_3, "received bcn tmpl tx status on vdev %i: %d",
       VAR_8, VAR_9);
  break;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_8);
 if (VAR_7 && VAR_7->is_up && VAR_7->vif->csa_active)
  FUNC_6(VAR_3->hw, &VAR_7->ap_csa_work);

 FUNC_7(VAR_5);
 return 0;
}
