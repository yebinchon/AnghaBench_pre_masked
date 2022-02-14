
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_2__* mac; int bssid; int vifid; } ;
struct qlink_auth_encr {int privacy; void* control_port_ethertype; int control_port_no_encrypt; int control_port; void** akm_suites; void* n_akm_suites; void** ciphers_pairwise; void* n_ciphers_pairwise; void* cipher_group; void* wpa_versions; int auth_type; } ;
struct qlink_cmd_connect {int mfp; struct qlink_auth_encr aen; int pbss; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; void* flags; void* bg_scan_period; int prev_bssid; int bssid_hint; int bssid; } ;
struct TYPE_3__ {int control_port_ethertype; int control_port_no_encrypt; int control_port; int * akm_suites; int n_akm_suites; int * ciphers_pairwise; int n_ciphers_pairwise; int cipher_group; int wpa_versions; } ;
struct cfg80211_connect_params {scalar_t__ bg_scan_period; int flags; scalar_t__ ie_len; int channel; int ie; int ssid_len; int ssid; TYPE_1__ crypto; int mfp; int privacy; int auth_type; int pbss; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int prev_bssid; int bssid_hint; } ;
struct TYPE_4__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int ,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_12 (struct sk_buff*,int ,int ,scalar_t__) ;

int FUNC_13(struct qtnf_vif *VAR_13,
     struct cfg80211_connect_params *VAR_14)
{
 struct sk_buff *VAR_15;
 struct qlink_cmd_connect *VAR_16;
 struct qlink_auth_encr *VAR_17;
 int VAR_18;
 int VAR_19;
 u32 VAR_20 = 0;

 VAR_15 = FUNC_8(VAR_13->mac->macid, VAR_13->vifid,
         VAR_4,
         sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_3;

 VAR_16 = (struct qlink_cmd_connect *)VAR_15->data;

 FUNC_4(VAR_16->bssid, VAR_13->bssid);

 if (VAR_14->bssid_hint)
  FUNC_4(VAR_16->bssid_hint, VAR_14->bssid_hint);
 else
  FUNC_3(VAR_16->bssid_hint);

 if (VAR_14->prev_bssid)
  FUNC_4(VAR_16->prev_bssid, VAR_14->prev_bssid);
 else
  FUNC_3(VAR_16->prev_bssid);

 if ((VAR_14->bg_scan_period >= 0) &&
     (VAR_14->bg_scan_period <= VAR_11))
  VAR_16->bg_scan_period = FUNC_1(VAR_14->bg_scan_period);
 else
  VAR_16->bg_scan_period = FUNC_1(-1);

 if (VAR_14->flags & VAR_0)
  VAR_20 |= VAR_8;
 if (VAR_14->flags & VAR_1)
  VAR_20 |= VAR_9;
 if (VAR_14->flags & VAR_2)
  VAR_20 |= VAR_10;

 VAR_16->flags = FUNC_2(VAR_20);
 FUNC_5(&VAR_16->ht_capa, &VAR_14->ht_capa, sizeof(VAR_16->ht_capa));
 FUNC_5(&VAR_16->ht_capa_mask, &VAR_14->ht_capa_mask,
        sizeof(VAR_16->ht_capa_mask));
 FUNC_5(&VAR_16->vht_capa, &VAR_14->vht_capa, sizeof(VAR_16->vht_capa));
 FUNC_5(&VAR_16->vht_capa_mask, &VAR_14->vht_capa_mask,
        sizeof(VAR_16->vht_capa_mask));
 VAR_16->pbss = VAR_14->pbss;

 VAR_17 = &VAR_16->aen;
 VAR_17->auth_type = VAR_14->auth_type;
 VAR_17->privacy = !!VAR_14->privacy;
 VAR_16->mfp = VAR_14->mfp;
 VAR_17->wpa_versions = FUNC_2(VAR_14->crypto.wpa_versions);
 VAR_17->cipher_group = FUNC_2(VAR_14->crypto.cipher_group);
 VAR_17->n_ciphers_pairwise = FUNC_2(VAR_14->crypto.n_ciphers_pairwise);

 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++)
  VAR_17->ciphers_pairwise[VAR_19] =
   FUNC_2(VAR_14->crypto.ciphers_pairwise[VAR_19]);

 VAR_17->n_akm_suites = FUNC_2(VAR_14->crypto.n_akm_suites);

 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
  VAR_17->akm_suites[VAR_19] = FUNC_2(VAR_14->crypto.akm_suites[VAR_19]);

 VAR_17->control_port = VAR_14->crypto.control_port;
 VAR_17->control_port_no_encrypt =
  VAR_14->crypto.control_port_no_encrypt;
 VAR_17->control_port_ethertype =
  FUNC_1(FUNC_0(VAR_14->crypto.control_port_ethertype));

 FUNC_11(VAR_15, VAR_12, VAR_14->ssid,
     VAR_14->ssid_len);

 if (VAR_14->ie_len != 0)
  FUNC_12(VAR_15, VAR_5,
     VAR_14->ie, VAR_14->ie_len);

 if (VAR_14->channel)
  FUNC_9(VAR_15, VAR_14->channel);

 FUNC_6(VAR_13->mac->bus);
 VAR_18 = FUNC_10(VAR_13->mac->bus, VAR_15);
 if (VAR_18)
  goto out;

out:
 FUNC_7(VAR_13->mac->bus);

 return VAR_18;
}
