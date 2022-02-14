
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct ath10k_vif {int beacon_state; int vdev_id; struct ath10k* ar; struct sk_buff* beacon; } ;
struct ath10k_skb_cb {int flags; int paddr; } ;
struct ath10k {int data_lock; } ;





 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k_vif *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 struct ath10k_skb_cb *VAR_4;
 struct sk_buff *VAR_5;
 bool VAR_6;
 bool VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3->data_lock);

 VAR_5 = VAR_2->beacon;

 if (!VAR_5)
  goto unlock;

 VAR_4 = FUNC_0(VAR_5);

 switch (VAR_2->beacon_state) {
 case 129:
 case 128:
  break;
 case 130:
  VAR_2->beacon_state = 129;
  FUNC_3(&VAR_3->data_lock);

  VAR_6 = !!(VAR_4->flags & VAR_1);
  VAR_7 = !!(VAR_4->flags & VAR_0);
  VAR_8 = FUNC_1(VAR_2->ar,
       VAR_2->vdev_id,
       VAR_5->data, VAR_5->len,
       VAR_4->paddr,
       VAR_6,
       VAR_7);

  FUNC_2(&VAR_3->data_lock);

  if (VAR_8 == 0)
   VAR_2->beacon_state = 128;
  else
   VAR_2->beacon_state = 130;
 }

unlock:
 FUNC_3(&VAR_3->data_lock);
}
