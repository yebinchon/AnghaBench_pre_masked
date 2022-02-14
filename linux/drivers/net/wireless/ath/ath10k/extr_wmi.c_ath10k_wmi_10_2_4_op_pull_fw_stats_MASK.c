
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wmi_10_2_stats_event {int num_peer_stats; int num_pdev_ext_stats; int num_pdev_stats; } ;
struct wmi_10_2_pdev_stats {int extra; int rx; int tx; int base; } ;
struct wmi_10_2_pdev_ext_stats {int dummy; } ;
struct wmi_10_2_4_peer_stats {int dummy; } ;
struct TYPE_4__ {int peer_rx_rate; int old; } ;
struct wmi_10_2_4_ext_peer_stats {int rx_duration; TYPE_2__ common; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_fw_stats_peer {int list; void* rx_duration; void* peer_rx_rate; } ;
struct ath10k_fw_stats_pdev {int list; } ;
struct ath10k_fw_stats {int peers; int pdevs; } ;
struct TYPE_3__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_3 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_4 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_5 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_6 (int *,struct ath10k_fw_stats_peer*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_3,
           struct sk_buff *VAR_4,
           struct ath10k_fw_stats *VAR_5)
{
 const struct wmi_10_2_stats_event *VAR_6 = (void *)VAR_4->data;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (!FUNC_9(VAR_4, sizeof(*VAR_6)))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->num_pdev_stats);
 VAR_8 = FUNC_0(VAR_6->num_pdev_ext_stats);
 VAR_9 = FUNC_0(VAR_6->num_peer_stats);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  const struct wmi_10_2_pdev_stats *VAR_11;
  struct ath10k_fw_stats_pdev *VAR_12;

  VAR_11 = (void *)VAR_4->data;
  if (!FUNC_9(VAR_4, sizeof(*VAR_11)))
   return -VAR_0;

  VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   continue;

  FUNC_2(&VAR_11->base, VAR_12);
  FUNC_5(&VAR_11->tx, VAR_12);
  FUNC_4(&VAR_11->rx, VAR_12);
  FUNC_3(&VAR_11->extra, VAR_12);


  FUNC_8(&VAR_12->list, &VAR_5->pdevs);
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  const struct wmi_10_2_pdev_ext_stats *VAR_13;

  VAR_13 = (void *)VAR_4->data;
  if (!FUNC_9(VAR_4, sizeof(*VAR_13)))
   return -VAR_0;






 }



 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  const struct wmi_10_2_4_ext_peer_stats *VAR_14;
  struct ath10k_fw_stats_peer *VAR_15;
  int VAR_16;

  if (FUNC_10(VAR_2, VAR_3->wmi.svc_map))
   VAR_16 = sizeof(struct wmi_10_2_4_ext_peer_stats);
  else
   VAR_16 = sizeof(struct wmi_10_2_4_peer_stats);

  VAR_14 = (void *)VAR_4->data;
  if (!FUNC_9(VAR_4, VAR_16))
   return -VAR_0;

  VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_1);
  if (!VAR_15)
   continue;

  FUNC_6(&VAR_14->common.old, VAR_15);

  VAR_15->peer_rx_rate = FUNC_0(VAR_14->common.peer_rx_rate);

  if (FUNC_1(VAR_3))
   VAR_15->rx_duration = FUNC_0(VAR_14->rx_duration);


  FUNC_8(&VAR_15->list, &VAR_5->peers);
 }

 return 0;
}
