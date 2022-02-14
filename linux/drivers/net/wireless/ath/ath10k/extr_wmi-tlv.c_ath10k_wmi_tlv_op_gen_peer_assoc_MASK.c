
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wmi_vht_rate_set {void* tx_mcs_set; void* tx_max_rate; void* rx_mcs_set; void* rx_max_rate; } ;
struct TYPE_5__ {int addr; } ;
struct wmi_tlv_peer_assoc_cmd {TYPE_1__ mac_addr; void* num_ht_rates; void* num_legacy_rates; void* phy_mode; void* vht_caps; void* nss; void* rate_caps; void* mpdu_density; void* max_mpdu; void* ht_caps; void* listen_intval; void* caps; void* flags; void* assoc_id; void* new_assoc; void* vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct TYPE_8__ {int rx_max_rate; int rx_mcs_set; int tx_max_rate; int tx_mcs_set; } ;
struct TYPE_7__ {int num_rates; int rates; } ;
struct TYPE_6__ {int num_rates; int rates; } ;
struct wmi_peer_assoc_complete_arg {int peer_mpdu_density; int vdev_id; int peer_aid; int peer_flags; int peer_caps; int peer_listen_intval; int peer_ht_caps; int peer_max_mpdu; int peer_rate_caps; int peer_num_spatial_streams; int peer_vht_caps; int peer_phymode; TYPE_4__ peer_vht_rates; TYPE_3__ peer_ht_rates; TYPE_2__ peer_legacy_rates; int addr; scalar_t__ peer_reassoc; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 size_t FUNC_7 (int,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_7,
     const struct wmi_peer_assoc_complete_arg *VAR_8)
{
 struct wmi_tlv_peer_assoc_cmd *VAR_9;
 struct wmi_vht_rate_set *VAR_10;
 struct wmi_tlv *VAR_11;
 struct sk_buff *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 void *VAR_16;

 if (VAR_8->peer_mpdu_density > 16)
  return FUNC_0(-VAR_1);
 if (VAR_8->peer_legacy_rates.num_rates > VAR_3)
  return FUNC_0(-VAR_1);
 if (VAR_8->peer_ht_rates.num_rates > VAR_3)
  return FUNC_0(-VAR_1);

 VAR_14 = FUNC_7(VAR_8->peer_legacy_rates.num_rates,
      sizeof(__le32));
 VAR_15 = FUNC_7(VAR_8->peer_ht_rates.num_rates, sizeof(__le32));
 VAR_13 = (sizeof(*VAR_11) + sizeof(*VAR_9)) +
       (sizeof(*VAR_11) + VAR_14) +
       (sizeof(*VAR_11) + VAR_15) +
       (sizeof(*VAR_11) + sizeof(*VAR_10));
 VAR_12 = FUNC_4(VAR_7, VAR_13);
 if (!VAR_12)
  return FUNC_0(-VAR_2);

 VAR_16 = (void *)VAR_12->data;
 VAR_11 = VAR_16;
 VAR_11->tag = FUNC_1(VAR_5);
 VAR_11->len = FUNC_1(sizeof(*VAR_9));
 VAR_9 = (void *)VAR_11->value;

 VAR_9->vdev_id = FUNC_2(VAR_8->vdev_id);
 VAR_9->new_assoc = FUNC_2(VAR_8->peer_reassoc ? 0 : 1);
 VAR_9->assoc_id = FUNC_2(VAR_8->peer_aid);
 VAR_9->flags = FUNC_2(VAR_8->peer_flags);
 VAR_9->caps = FUNC_2(VAR_8->peer_caps);
 VAR_9->listen_intval = FUNC_2(VAR_8->peer_listen_intval);
 VAR_9->ht_caps = FUNC_2(VAR_8->peer_ht_caps);
 VAR_9->max_mpdu = FUNC_2(VAR_8->peer_max_mpdu);
 VAR_9->mpdu_density = FUNC_2(VAR_8->peer_mpdu_density);
 VAR_9->rate_caps = FUNC_2(VAR_8->peer_rate_caps);
 VAR_9->nss = FUNC_2(VAR_8->peer_num_spatial_streams);
 VAR_9->vht_caps = FUNC_2(VAR_8->peer_vht_caps);
 VAR_9->phy_mode = FUNC_2(VAR_8->peer_phymode);
 VAR_9->num_legacy_rates = FUNC_2(VAR_8->peer_legacy_rates.num_rates);
 VAR_9->num_ht_rates = FUNC_2(VAR_8->peer_ht_rates.num_rates);
 FUNC_5(VAR_9->mac_addr.addr, VAR_8->addr);

 VAR_16 += sizeof(*VAR_11);
 VAR_16 += sizeof(*VAR_9);

 VAR_11 = VAR_16;
 VAR_11->tag = FUNC_1(VAR_4);
 VAR_11->len = FUNC_1(VAR_14);
 FUNC_6(VAR_11->value, VAR_8->peer_legacy_rates.rates,
        VAR_8->peer_legacy_rates.num_rates);

 VAR_16 += sizeof(*VAR_11);
 VAR_16 += VAR_14;

 VAR_11 = VAR_16;
 VAR_11->tag = FUNC_1(VAR_4);
 VAR_11->len = FUNC_1(VAR_15);
 FUNC_6(VAR_11->value, VAR_8->peer_ht_rates.rates,
        VAR_8->peer_ht_rates.num_rates);

 VAR_16 += sizeof(*VAR_11);
 VAR_16 += VAR_15;

 VAR_11 = VAR_16;
 VAR_11->tag = FUNC_1(VAR_6);
 VAR_11->len = FUNC_1(sizeof(*VAR_10));
 VAR_10 = (void *)VAR_11->value;

 VAR_10->rx_max_rate = FUNC_2(VAR_8->peer_vht_rates.rx_max_rate);
 VAR_10->rx_mcs_set = FUNC_2(VAR_8->peer_vht_rates.rx_mcs_set);
 VAR_10->tx_max_rate = FUNC_2(VAR_8->peer_vht_rates.tx_max_rate);
 VAR_10->tx_mcs_set = FUNC_2(VAR_8->peer_vht_rates.tx_mcs_set);

 VAR_16 += sizeof(*VAR_11);
 VAR_16 += sizeof(*VAR_10);

 FUNC_3(VAR_7, VAR_0, "wmi tlv peer assoc\n");
 return VAR_12;
}
