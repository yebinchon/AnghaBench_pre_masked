
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct wmi_tlv_vdev_stats {int dummy; } ;
struct wmi_tlv_stats_ev {int num_peer_stats_extd; int stats_id; int num_chan_stats; int num_bcnflt_stats; int num_peer_stats; int num_vdev_stats; int num_pdev_stats; } ;
struct wmi_tlv_peer_stats_extd {int rx_duration_high; int rx_duration; } ;
struct wmi_pdev_stats {int rx; int tx; int base; } ;
struct wmi_10x_peer_stats {int peer_rx_rate; int old; } ;
struct sk_buff {int len; int data; } ;
struct ath10k_fw_stats_vdev {int list; } ;
struct ath10k_fw_stats_peer {int rx_duration; int list; void* peer_rx_rate; } ;
struct ath10k_fw_stats_pdev {int list; } ;
struct ath10k_fw_stats {int peers; int vdevs; int pdevs; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void const**) ;
 int FUNC_2 (void const**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int,int,int,int,int,int) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_7 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_8 (int *,struct ath10k_fw_stats_pdev*) ;
 int FUNC_9 (int *,struct ath10k_fw_stats_peer*) ;
 size_t FUNC_10 (void const*) ;
 void** FUNC_11 (struct ath10k*,int ,int ,int ) ;
 int FUNC_12 (struct wmi_tlv_vdev_stats const*,struct ath10k_fw_stats_vdev*) ;
 int FUNC_13 (void const**) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 scalar_t__ FUNC_16 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_17(struct ath10k *VAR_9,
        struct sk_buff *VAR_10,
        struct ath10k_fw_stats *VAR_11)
{
 const void **VAR_12;
 const struct wmi_tlv_stats_ev *VAR_13;
 u32 VAR_14;
 const void *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 size_t VAR_21;
 u32 VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_12 = FUNC_11(VAR_9, VAR_10->data, VAR_10->len, VAR_2);
 if (FUNC_1(VAR_12)) {
  VAR_23 = FUNC_2(VAR_12);
  FUNC_5(VAR_9, "failed to parse tlv: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_13 = VAR_12[VAR_8];
 VAR_15 = VAR_12[VAR_7];

 if (!VAR_13 || !VAR_15) {
  FUNC_13(VAR_12);
  return -VAR_1;
 }

 VAR_21 = FUNC_10(VAR_15);
 VAR_16 = FUNC_3(VAR_13->num_pdev_stats);
 VAR_17 = FUNC_3(VAR_13->num_vdev_stats);
 VAR_18 = FUNC_3(VAR_13->num_peer_stats);
 VAR_19 = FUNC_3(VAR_13->num_bcnflt_stats);
 VAR_20 = FUNC_3(VAR_13->num_chan_stats);
 VAR_22 = FUNC_3(VAR_13->stats_id);
 VAR_14 = FUNC_3(VAR_13->num_peer_stats_extd);

 FUNC_4(VAR_9, VAR_0,
     "wmi tlv stats update pdev %i vdev %i peer %i bcnflt %i chan %i peer_extd %i\n",
     VAR_16, VAR_17, VAR_18,
     VAR_19, VAR_20, VAR_14);

 for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {
  const struct wmi_pdev_stats *VAR_25;
  struct ath10k_fw_stats_pdev *VAR_26;

  VAR_25 = VAR_15;
  if (VAR_21 < sizeof(*VAR_25)) {
   FUNC_13(VAR_12);
   return -VAR_1;
  }

  VAR_15 += sizeof(*VAR_25);
  VAR_21 -= sizeof(*VAR_25);

  VAR_26 = FUNC_14(sizeof(*VAR_26), VAR_2);
  if (!VAR_26)
   continue;

  FUNC_6(&VAR_25->base, VAR_26);
  FUNC_8(&VAR_25->tx, VAR_26);
  FUNC_7(&VAR_25->rx, VAR_26);
  FUNC_15(&VAR_26->list, &VAR_11->pdevs);
 }

 for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
  const struct wmi_tlv_vdev_stats *VAR_27;
  struct ath10k_fw_stats_vdev *VAR_28;

  VAR_27 = VAR_15;
  if (VAR_21 < sizeof(*VAR_27)) {
   FUNC_13(VAR_12);
   return -VAR_1;
  }

  VAR_15 += sizeof(*VAR_27);
  VAR_21 -= sizeof(*VAR_27);

  VAR_28 = FUNC_14(sizeof(*VAR_28), VAR_2);
  if (!VAR_28)
   continue;

  FUNC_12(VAR_27, VAR_28);
  FUNC_15(&VAR_28->list, &VAR_11->vdevs);
 }

 for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
  const struct wmi_10x_peer_stats *VAR_29;
  struct ath10k_fw_stats_peer *VAR_30;

  VAR_29 = VAR_15;
  if (VAR_21 < sizeof(*VAR_29)) {
   FUNC_13(VAR_12);
   return -VAR_1;
  }

  VAR_15 += sizeof(*VAR_29);
  VAR_21 -= sizeof(*VAR_29);

  VAR_30 = FUNC_14(sizeof(*VAR_30), VAR_2);
  if (!VAR_30)
   continue;

  FUNC_9(&VAR_29->old, VAR_30);
  VAR_30->peer_rx_rate = FUNC_3(VAR_29->peer_rx_rate);

  if (VAR_22 & VAR_6) {
   const struct wmi_tlv_peer_stats_extd *VAR_31;
   unsigned long VAR_32;

   VAR_31 = VAR_15 + sizeof(*VAR_29) * (VAR_18 - VAR_24 - 1)
          + sizeof(*VAR_31) * VAR_24;

   VAR_30->rx_duration = FUNC_3(VAR_31->rx_duration);
   VAR_32 = FUNC_3
      (VAR_31->rx_duration_high);

   if (FUNC_16(VAR_4,
         &VAR_32)) {
    VAR_32 =
     FUNC_0(VAR_3,
        VAR_32);
    VAR_30->rx_duration |= (u64)VAR_32 <<
          VAR_5;
   }
  }

  FUNC_15(&VAR_30->list, &VAR_11->peers);
 }

 FUNC_13(VAR_12);
 return 0;
}
