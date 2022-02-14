
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htt_peer_map_event {size_t peer_id; int addr; int vdev_id; } ;
struct ath10k_peer {int peer_ids; int list; int addr; int vdev_id; } ;
struct ath10k_htt {struct ath10k* ar; } ;
struct ath10k {int data_lock; struct ath10k_peer** peer_map; int peer_mapping_wq; int peers; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,size_t) ;
 struct ath10k_peer* FUNC_2 (struct ath10k*,int ,int ) ;
 int FUNC_3 (struct ath10k*,char*,size_t) ;
 int FUNC_4 (int ,int ) ;
 struct ath10k_peer* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct ath10k_htt *VAR_3,
      struct htt_peer_map_event *VAR_4)
{
 struct ath10k *VAR_5 = VAR_3->ar;
 struct ath10k_peer *VAR_6;

 if (VAR_4->peer_id >= VAR_1) {
  FUNC_3(VAR_5,
       "received htt peer map event with idx out of bounds: %hu\n",
       VAR_4->peer_id);
  return;
 }

 FUNC_8(&VAR_5->data_lock);
 VAR_6 = FUNC_2(VAR_5, VAR_4->vdev_id, VAR_4->addr);
 if (!VAR_6) {
  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   goto exit;

  VAR_6->vdev_id = VAR_4->vdev_id;
  FUNC_4(VAR_6->addr, VAR_4->addr);
  FUNC_6(&VAR_6->list, &VAR_5->peers);
  FUNC_10(&VAR_5->peer_mapping_wq);
 }

 FUNC_1(VAR_5, VAR_0, "htt peer map vdev %d peer %pM id %d\n",
     VAR_4->vdev_id, VAR_4->addr, VAR_4->peer_id);

 FUNC_0(VAR_5->peer_map[VAR_4->peer_id] && (VAR_5->peer_map[VAR_4->peer_id] != VAR_6));
 VAR_5->peer_map[VAR_4->peer_id] = VAR_6;
 FUNC_7(VAR_4->peer_id, VAR_6->peer_ids);
exit:
 FUNC_9(&VAR_5->data_lock);
}
