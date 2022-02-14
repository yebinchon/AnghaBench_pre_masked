
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct htt_rx_delba {int info0; } ;
struct htt_resp {struct htt_rx_delba rx_delba; } ;
struct ath10k_vif {int vif; } ;
struct ath10k_peer {int addr; int vdev_id; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ) ;
 struct ath10k_vif* FUNC_3 (struct ath10k*,int ) ;
 struct ath10k_peer* FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (struct ath10k*,char*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ath10k *VAR_3, struct htt_resp *VAR_4)
{
 struct htt_rx_delba *VAR_5 = &VAR_4->rx_delba;
 struct ath10k_peer *VAR_6;
 struct ath10k_vif *VAR_7;
 u16 VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_5->info0);
 VAR_9 = FUNC_0(VAR_8, VAR_2);
 VAR_10 = FUNC_0(VAR_8, VAR_1);

 FUNC_2(VAR_3, VAR_0,
     "htt rx delba tid %hu peer_id %hu\n",
     VAR_9, VAR_10);

 FUNC_7(&VAR_3->data_lock);
 VAR_6 = FUNC_4(VAR_3, VAR_10);
 if (!VAR_6) {
  FUNC_5(VAR_3, "received addba event for invalid peer_id: %hu\n",
       VAR_10);
  FUNC_8(&VAR_3->data_lock);
  return;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_6->vdev_id);
 if (!VAR_7) {
  FUNC_5(VAR_3, "received addba event for invalid vdev_id: %u\n",
       VAR_6->vdev_id);
  FUNC_8(&VAR_3->data_lock);
  return;
 }

 FUNC_2(VAR_3, VAR_0,
     "htt rx stop rx ba session sta %pM tid %hu\n",
     VAR_6->addr, VAR_9);

 FUNC_6(VAR_7->vif, VAR_6->addr, VAR_9);
 FUNC_8(&VAR_3->data_lock);
}
