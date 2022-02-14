
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath10k_htt {int pending_tx; int tx_lock; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath10k_htt *VAR_1, u16 VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->ar;

 FUNC_2(&VAR_1->tx_lock);

 FUNC_0(VAR_3, VAR_0, "htt tx free msdu_id %hu\n", VAR_2);

 FUNC_1(&VAR_1->pending_tx, VAR_2);
}
