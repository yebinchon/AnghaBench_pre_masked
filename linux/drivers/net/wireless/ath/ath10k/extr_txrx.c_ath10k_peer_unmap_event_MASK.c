
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htt_peer_unmap_event {size_t peer_id; } ;
struct ath10k_peer {int list; int peer_ids; int addr; int vdev_id; } ;
struct ath10k_htt {struct ath10k* ar; } ;
struct ath10k {int data_lock; int peer_mapping_wq; int ** peer_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,size_t) ;
 struct ath10k_peer* FUNC_1 (struct ath10k*,size_t) ;
 int FUNC_2 (struct ath10k*,char*,size_t) ;
 scalar_t__ FUNC_3 (int ,size_t) ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct ath10k_peer*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct ath10k_htt *VAR_2,
        struct htt_peer_unmap_event *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->ar;
 struct ath10k_peer *VAR_5;

 if (VAR_3->peer_id >= VAR_1) {
  FUNC_2(VAR_4,
       "received htt peer unmap event with idx out of bounds: %hu\n",
       VAR_3->peer_id);
  return;
 }

 FUNC_7(&VAR_4->data_lock);
 VAR_5 = FUNC_1(VAR_4, VAR_3->peer_id);
 if (!VAR_5) {
  FUNC_2(VAR_4, "peer-unmap-event: unknown peer id %d\n",
       VAR_3->peer_id);
  goto exit;
 }

 FUNC_0(VAR_4, VAR_0, "htt peer unmap vdev %d peer %pM id %d\n",
     VAR_5->vdev_id, VAR_5->addr, VAR_3->peer_id);

 VAR_4->peer_map[VAR_3->peer_id] = ((void*)0);
 FUNC_4(VAR_3->peer_id, VAR_5->peer_ids);

 if (FUNC_3(VAR_5->peer_ids, VAR_1)) {
  FUNC_6(&VAR_5->list);
  FUNC_5(VAR_5);
  FUNC_9(&VAR_4->peer_mapping_wq);
 }

exit:
 FUNC_8(&VAR_4->data_lock);
}
