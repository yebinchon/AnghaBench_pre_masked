
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct htt_rx_indication_mpdu_range {int mpdu_count; } ;
struct ath10k_sta {int * tid_stats; } ;
struct ath10k_peer {TYPE_1__* sta; } ;
struct ath10k {int sta_tid_stats_mask; int data_lock; } ;
struct TYPE_2__ {scalar_t__ drv_priv; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct ath10k_peer* FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (struct ath10k*,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ath10k *VAR_1, u16 VAR_2, u8 VAR_3,
       struct htt_rx_indication_mpdu_range *VAR_4,
       int VAR_5)
{
 struct ath10k_sta *VAR_6;
 struct ath10k_peer *VAR_7;
 int VAR_8;

 if (VAR_3 > VAR_0 || !(VAR_1->sta_tid_stats_mask & FUNC_0(VAR_3)))
  return;

 FUNC_3();
 FUNC_5(&VAR_1->data_lock);

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_7 || !VAR_7->sta)
  goto out;

 VAR_6 = (struct ath10k_sta *)VAR_7->sta->drv_priv;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_2(VAR_1,
          &VAR_6->tid_stats[VAR_3],
          VAR_4[VAR_8].mpdu_count);

out:
 FUNC_6(&VAR_1->data_lock);
 FUNC_4();
}
