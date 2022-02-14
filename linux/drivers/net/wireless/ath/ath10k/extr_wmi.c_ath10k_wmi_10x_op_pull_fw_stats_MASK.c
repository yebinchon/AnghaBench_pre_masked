
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_stats_event {int num_peer_stats; int num_pdev_stats; } ;
struct wmi_10x_peer_stats {int peer_rx_rate; int old; } ;
struct wmi_10x_pdev_stats {int extra; int rx; int tx; int base; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_fw_stats_peer {int list; void* peer_rx_rate; } ;
struct ath10k_fw_stats_pdev {int list; } ;
struct ath10k_fw_stats {int peers; int pdevs; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_2 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_3 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_4 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_5 (int *,struct ath10k_fw_stats_peer*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_2,
        struct sk_buff *VAR_3,
        struct ath10k_fw_stats *VAR_4)
{
 const struct wmi_stats_event *VAR_5 = (void *)VAR_3->data;
 u32 VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_8(VAR_3, sizeof(*VAR_5)))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->num_pdev_stats);
 VAR_7 = FUNC_0(VAR_5->num_peer_stats);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  const struct wmi_10x_pdev_stats *VAR_9;
  struct ath10k_fw_stats_pdev *VAR_10;

  VAR_9 = (void *)VAR_3->data;
  if (!FUNC_8(VAR_3, sizeof(*VAR_9)))
   return -VAR_0;

  VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_1);
  if (!VAR_10)
   continue;

  FUNC_1(&VAR_9->base, VAR_10);
  FUNC_4(&VAR_9->tx, VAR_10);
  FUNC_3(&VAR_9->rx, VAR_10);
  FUNC_2(&VAR_9->extra, VAR_10);

  FUNC_7(&VAR_10->list, &VAR_4->pdevs);
 }



 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  const struct wmi_10x_peer_stats *VAR_11;
  struct ath10k_fw_stats_peer *VAR_12;

  VAR_11 = (void *)VAR_3->data;
  if (!FUNC_8(VAR_3, sizeof(*VAR_11)))
   return -VAR_0;

  VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   continue;

  FUNC_5(&VAR_11->old, VAR_12);

  VAR_12->peer_rx_rate = FUNC_0(VAR_11->peer_rx_rate);

  FUNC_7(&VAR_12->list, &VAR_4->peers);
 }

 return 0;
}
