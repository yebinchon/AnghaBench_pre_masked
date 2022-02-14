
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_vdev_stats_extd {int dummy; } ;
struct wmi_vdev_stats {int dummy; } ;
struct wmi_10_4_peer_stats {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct wmi_10_4_peer_extd_stats {int rx_duration; TYPE_1__ peer_macaddr; } ;
struct wmi_10_4_pdev_stats {int extra; int rx_ovfl_errs; int rx; int tx; int base; } ;
struct wmi_10_4_bss_bcn_filter_stats {int dummy; } ;
struct wmi_10_2_stats_event {int stats_id; int num_bcnflt_stats; int num_peer_stats; int num_vdev_stats; int num_pdev_ext_stats; int num_pdev_stats; } ;
struct wmi_10_2_pdev_ext_stats {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_fw_stats_vdev_extd {int list; } ;
struct ath10k_fw_stats_peer {int list; } ;
struct ath10k_fw_stats_pdev {int list; void* rx_ovfl_errs; } ;
struct ath10k_fw_stats {int extended; int vdevs; int peers_extd; int peers; int pdevs; } ;
struct ath10k_fw_extd_stats_peer {int list; void* rx_duration; int peer_macaddr; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_2 (struct wmi_10_4_peer_stats const*,struct ath10k_fw_stats_peer*) ;
 int FUNC_3 (struct wmi_vdev_stats_extd const*,struct ath10k_fw_stats_vdev_extd*) ;
 int FUNC_4 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_5 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_6 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_7 (int ,int ) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_4,
         struct sk_buff *VAR_5,
         struct ath10k_fw_stats *VAR_6)
{
 const struct wmi_10_2_stats_event *VAR_7 = (void *)VAR_5->data;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (!FUNC_10(VAR_5, sizeof(*VAR_7)))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7->num_pdev_stats);
 VAR_9 = FUNC_0(VAR_7->num_pdev_ext_stats);
 VAR_10 = FUNC_0(VAR_7->num_vdev_stats);
 VAR_11 = FUNC_0(VAR_7->num_peer_stats);
 VAR_12 = FUNC_0(VAR_7->num_bcnflt_stats);
 VAR_13 = FUNC_0(VAR_7->stats_id);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  const struct wmi_10_4_pdev_stats *VAR_15;
  struct ath10k_fw_stats_pdev *VAR_16;

  VAR_15 = (void *)VAR_5->data;
  if (!FUNC_10(VAR_5, sizeof(*VAR_15)))
   return -VAR_0;

  VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_1);
  if (!VAR_16)
   continue;

  FUNC_4(&VAR_15->base, VAR_16);
  FUNC_1(&VAR_15->tx, VAR_16);
  FUNC_6(&VAR_15->rx, VAR_16);
  VAR_16->rx_ovfl_errs = FUNC_0(VAR_15->rx_ovfl_errs);
  FUNC_5(&VAR_15->extra, VAR_16);

  FUNC_9(&VAR_16->list, &VAR_6->pdevs);
 }

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  const struct wmi_10_2_pdev_ext_stats *VAR_17;

  VAR_17 = (void *)VAR_5->data;
  if (!FUNC_10(VAR_5, sizeof(*VAR_17)))
   return -VAR_0;






 }

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  const struct wmi_vdev_stats *VAR_18;




  VAR_18 = (void *)VAR_5->data;
  if (!FUNC_10(VAR_5, sizeof(*VAR_18)))
   return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  const struct wmi_10_4_peer_stats *VAR_19;
  struct ath10k_fw_stats_peer *VAR_20;

  VAR_19 = (void *)VAR_5->data;
  if (!FUNC_10(VAR_5, sizeof(*VAR_19)))
   return -VAR_0;

  VAR_20 = FUNC_8(sizeof(*VAR_20), VAR_1);
  if (!VAR_20)
   continue;

  FUNC_2(VAR_19, VAR_20);
  FUNC_9(&VAR_20->list, &VAR_6->peers);
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  const struct wmi_10_4_bss_bcn_filter_stats *VAR_21;

  VAR_21 = (void *)VAR_5->data;
  if (!FUNC_10(VAR_5, sizeof(*VAR_21)))
   return -VAR_0;






 }

 if (VAR_13 & VAR_2) {
  VAR_6->extended = 1;

  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   const struct wmi_10_4_peer_extd_stats *VAR_22;
   struct ath10k_fw_extd_stats_peer *VAR_23;

   VAR_22 = (void *)VAR_5->data;
   if (!FUNC_10(VAR_5, sizeof(*VAR_22)))
    return -VAR_0;

   VAR_23 = FUNC_8(sizeof(*VAR_23), VAR_1);
   if (!VAR_23)
    continue;

   FUNC_7(VAR_23->peer_macaddr,
     VAR_22->peer_macaddr.addr);
   VAR_23->rx_duration = FUNC_0(VAR_22->rx_duration);
   FUNC_9(&VAR_23->list, &VAR_6->peers_extd);
  }
 }

 if (VAR_13 & VAR_3) {
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
   const struct wmi_vdev_stats_extd *VAR_24;
   struct ath10k_fw_stats_vdev_extd *VAR_25;

   VAR_24 = (void *)VAR_5->data;
   if (!FUNC_10(VAR_5, sizeof(*VAR_24)))
    return -VAR_0;

   VAR_25 = FUNC_8(sizeof(*VAR_25), VAR_1);
   if (!VAR_25)
    continue;
   FUNC_3(VAR_24, VAR_25);
   FUNC_9(&VAR_25->list, &VAR_6->vdevs);
  }
 }

 return 0;
}
