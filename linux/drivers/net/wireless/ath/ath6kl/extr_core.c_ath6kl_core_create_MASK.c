
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct ath6kl_sta {int dummy; } ;
struct ath6kl {int p2p; int vif_max; int max_norm_iface; int intra_bss; int ap_country_code; int mcastpsq; TYPE_1__* sta_list; int state; int lrssi_roam_threshold; scalar_t__ tx_pwr; int flag; int vif_list; int amsdu_rx_buffer_queue; int sem; int event_wq; int list_lock; int mcastpsq_lock; int lock; struct device* dev; } ;
struct aggr_info_conn {int dummy; } ;
struct TYPE_2__ {int aggr_conn; int mgmt_psq; scalar_t__ mgmt_psq_len; int apsdq; int psq; int psq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ath6kl* FUNC_1 () ;
 int FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct ath6kl *FUNC_12(struct device *VAR_9)
{
 struct ath6kl *VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_1();
 if (!VAR_10)
  return ((void*)0);

 VAR_10->p2p = !!VAR_8;
 VAR_10->dev = VAR_9;

 VAR_10->vif_max = 1;

 VAR_10->max_norm_iface = 1;

 FUNC_11(&VAR_10->lock);
 FUNC_11(&VAR_10->mcastpsq_lock);
 FUNC_11(&VAR_10->list_lock);

 FUNC_5(&VAR_10->event_wq);
 FUNC_9(&VAR_10->sem, 1);

 FUNC_0(&VAR_10->amsdu_rx_buffer_queue);
 FUNC_0(&VAR_10->vif_list);

 FUNC_4(VAR_7, &VAR_10->flag);
 FUNC_4(VAR_6, &VAR_10->flag);
 FUNC_4(VAR_4, &VAR_10->flag);

 VAR_10->tx_pwr = 0;
 VAR_10->intra_bss = 1;
 VAR_10->lrssi_roam_threshold = VAR_3;

 VAR_10->state = VAR_1;

 FUNC_8((u8 *)VAR_10->sta_list, 0,
        VAR_0 * sizeof(struct ath6kl_sta));


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_11(&VAR_10->sta_list[VAR_11].psq_lock);
  FUNC_10(&VAR_10->sta_list[VAR_11].psq);
  FUNC_10(&VAR_10->sta_list[VAR_11].apsdq);
  VAR_10->sta_list[VAR_11].mgmt_psq_len = 0;
  FUNC_0(&VAR_10->sta_list[VAR_11].mgmt_psq);
  VAR_10->sta_list[VAR_11].aggr_conn =
   FUNC_6(sizeof(struct aggr_info_conn), VAR_5);
  if (!VAR_10->sta_list[VAR_11].aggr_conn) {
   FUNC_3("Failed to allocate memory for sta aggregation information\n");
   FUNC_2(VAR_10);
   return ((void*)0);
  }
 }

 FUNC_10(&VAR_10->mcastpsq);

 FUNC_7(VAR_10->ap_country_code, VAR_2, 3);

 return VAR_10;
}
