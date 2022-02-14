
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int rx_max_rate; int rx_mcs_set; int tx_max_rate; int tx_mcs_set; } ;
struct TYPE_12__ {int num_rates; int rates; } ;
struct TYPE_10__ {int num_rates; int rates; } ;
struct wmi_peer_assoc_complete_arg {int vdev_id; int peer_aid; int peer_flags; int peer_caps; int peer_listen_intval; int peer_ht_caps; int peer_max_mpdu; int peer_mpdu_density; int peer_rate_caps; int peer_num_spatial_streams; int peer_vht_caps; int peer_phymode; TYPE_7__ peer_vht_rates; TYPE_5__ peer_ht_rates; TYPE_3__ peer_legacy_rates; int addr; scalar_t__ peer_reassoc; } ;
struct TYPE_13__ {void* tx_mcs_set; void* tx_max_rate; void* rx_mcs_set; void* rx_max_rate; } ;
struct TYPE_11__ {int rates; void* num_rates; } ;
struct TYPE_9__ {int rates; void* num_rates; } ;
struct TYPE_8__ {int addr; } ;
struct wmi_common_peer_assoc_complete_cmd {TYPE_6__ peer_vht_rates; TYPE_4__ peer_ht_rates; TYPE_2__ peer_legacy_rates; TYPE_1__ peer_macaddr; void* peer_phymode; void* peer_vht_caps; void* peer_nss; void* peer_rate_caps; void* peer_mpdu_density; void* peer_max_mpdu; void* peer_ht_caps; void* peer_listen_intval; void* peer_caps; void* peer_flags; void* peer_associd; void* peer_new_assoc; void* vdev_id; } ;
struct ath10k {int dummy; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ath10k *VAR_0, void *VAR_1,
      const struct wmi_peer_assoc_complete_arg *VAR_2)
{
 struct wmi_common_peer_assoc_complete_cmd *VAR_3 = VAR_1;

 VAR_3->vdev_id = FUNC_0(VAR_2->vdev_id);
 VAR_3->peer_new_assoc = FUNC_0(VAR_2->peer_reassoc ? 0 : 1);
 VAR_3->peer_associd = FUNC_0(VAR_2->peer_aid);
 VAR_3->peer_flags = FUNC_0(VAR_2->peer_flags);
 VAR_3->peer_caps = FUNC_0(VAR_2->peer_caps);
 VAR_3->peer_listen_intval = FUNC_0(VAR_2->peer_listen_intval);
 VAR_3->peer_ht_caps = FUNC_0(VAR_2->peer_ht_caps);
 VAR_3->peer_max_mpdu = FUNC_0(VAR_2->peer_max_mpdu);
 VAR_3->peer_mpdu_density = FUNC_0(VAR_2->peer_mpdu_density);
 VAR_3->peer_rate_caps = FUNC_0(VAR_2->peer_rate_caps);
 VAR_3->peer_nss = FUNC_0(VAR_2->peer_num_spatial_streams);
 VAR_3->peer_vht_caps = FUNC_0(VAR_2->peer_vht_caps);
 VAR_3->peer_phymode = FUNC_0(VAR_2->peer_phymode);

 FUNC_1(VAR_3->peer_macaddr.addr, VAR_2->addr);

 VAR_3->peer_legacy_rates.num_rates =
  FUNC_0(VAR_2->peer_legacy_rates.num_rates);
 FUNC_2(VAR_3->peer_legacy_rates.rates, VAR_2->peer_legacy_rates.rates,
        VAR_2->peer_legacy_rates.num_rates);

 VAR_3->peer_ht_rates.num_rates =
  FUNC_0(VAR_2->peer_ht_rates.num_rates);
 FUNC_2(VAR_3->peer_ht_rates.rates, VAR_2->peer_ht_rates.rates,
        VAR_2->peer_ht_rates.num_rates);

 VAR_3->peer_vht_rates.rx_max_rate =
  FUNC_0(VAR_2->peer_vht_rates.rx_max_rate);
 VAR_3->peer_vht_rates.rx_mcs_set =
  FUNC_0(VAR_2->peer_vht_rates.rx_mcs_set);
 VAR_3->peer_vht_rates.tx_max_rate =
  FUNC_0(VAR_2->peer_vht_rates.tx_max_rate);
 VAR_3->peer_vht_rates.tx_mcs_set =
  FUNC_0(VAR_2->peer_vht_rates.tx_mcs_set);
}
