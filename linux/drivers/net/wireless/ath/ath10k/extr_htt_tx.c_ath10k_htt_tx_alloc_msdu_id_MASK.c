
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k_htt {int tx_lock; int max_num_pending_tx; int pending_tx; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath10k_htt *VAR_2, struct sk_buff *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->ar;
 int VAR_5;

 FUNC_2(&VAR_2->tx_lock);
 VAR_5 = FUNC_1(&VAR_2->pending_tx, VAR_3, 0,
   VAR_2->max_num_pending_tx, VAR_1);
 FUNC_3(&VAR_2->tx_lock);

 FUNC_0(VAR_4, VAR_0, "htt tx alloc msdu_id %d\n", VAR_5);

 return VAR_5;
}
