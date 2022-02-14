
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_10_2_stats_event {int num_peer_stats; int num_pdev_ext_stats; int num_pdev_stats; } ;
struct wmi_10_2_peer_stats {int peer_rx_rate; int old; } ;
struct wmi_10_2_pdev_stats {int extra; int rx; int tx; int base; } ;
struct wmi_10_2_pdev_ext_stats {int dummy; } ;
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
 const struct wmi_10_2_stats_event *VAR_5 = (void *)VAR_3->data;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!FUNC_8(VAR_3, sizeof(*VAR_5)))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->num_pdev_stats);
 VAR_7 = FUNC_0(VAR_5->num_pdev_ext_stats);
 VAR_8 = FUNC_0(VAR_5->num_peer_stats);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  const struct wmi_10_2_pdev_stats *VAR_10;
  struct ath10k_fw_stats_pdev *VAR_11;

  VAR_10 = (void *)VAR_3->data;
  if (!FUNC_8(VAR_3, sizeof(*VAR_10)))
   return -VAR_0;

  VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   continue;

  FUNC_1(&VAR_10->base, VAR_11);
  FUNC_4(&VAR_10->tx, VAR_11);
  FUNC_3(&VAR_10->rx, VAR_11);
  FUNC_2(&VAR_10->extra, VAR_11);


  FUNC_7(&VAR_11->list, &VAR_4->pdevs);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  const struct wmi_10_2_pdev_ext_stats *VAR_12;

  VAR_12 = (void *)VAR_3->data;
  if (!FUNC_8(VAR_3, sizeof(*VAR_12)))
   return -VAR_0;






 }



 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  const struct wmi_10_2_peer_stats *VAR_13;
  struct ath10k_fw_stats_peer *VAR_14;

  VAR_13 = (void *)VAR_3->data;
  if (!FUNC_8(VAR_3, sizeof(*VAR_13)))
   return -VAR_0;

  VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_1);
  if (!VAR_14)
   continue;

  FUNC_5(&VAR_13->old, VAR_14);

  VAR_14->peer_rx_rate = FUNC_0(VAR_13->peer_rx_rate);


  FUNC_7(&VAR_14->list, &VAR_4->peers);
 }

 return 0;
}
