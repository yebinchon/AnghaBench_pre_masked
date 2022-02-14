
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wtbl_vht {int ldpc; int vht; void* len; void* tag; } ;
struct wtbl_smps {int smps; void* len; void* tag; } ;
struct wtbl_req_hdr {void* tlv_num; int operation; int wlan_idx; } ;
struct wtbl_raw {int wtbl_idx; int dw; void* val; void* msk; void* len; void* tag; } ;
struct wtbl_ht {int ht; int ldpc; int mm; int af; void* len; void* tag; } ;
struct sta_req_hdr {int is_tlv_append; int muar_idx; void* tlv_num; int wlan_idx; int bss_idx; } ;
struct sta_rec_vht {int vht_tx_mcs_map; int vht_rx_mcs_map; void* vht_cap; void* len; void* tag; } ;
struct sta_rec_ht {void* ht_cap; void* len; void* tag; } ;
struct mt7615_vif {int omac_idx; int idx; } ;
struct TYPE_6__ {int idx; } ;
struct mt7615_sta {TYPE_2__ wcid; } ;
struct mt7615_dev {int mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_5__ {int tx_mcs_map; int rx_mcs_map; } ;
struct TYPE_8__ {int cap; TYPE_1__ vht_mcs; scalar_t__ vht_supported; } ;
struct TYPE_7__ {int cap; int ampdu_density; int ampdu_factor; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_4__ vht_cap; TYPE_3__ ht_cap; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int *,int ,int *,int,int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct mt7615_dev *VAR_23, struct ieee80211_vif *VAR_24,
     struct ieee80211_sta *VAR_25)
{
 struct mt7615_sta *VAR_26 = (struct mt7615_sta *)VAR_25->drv_priv;
 struct mt7615_vif *VAR_27 = (struct mt7615_vif *)VAR_24->drv_priv;
 struct wtbl_req_hdr *VAR_28;
 struct sta_req_hdr *VAR_29;
 struct wtbl_raw *VAR_30;
 struct sta_rec_ht *VAR_31;
 struct wtbl_ht *VAR_32;
 int VAR_33, VAR_34, VAR_35 = 2;
 u32 VAR_36, VAR_37 = 0;
 u8 *VAR_38;

 VAR_38 = FUNC_4(VAR_11, VAR_1);
 if (!VAR_38)
  return -VAR_0;

 VAR_28 = (struct wtbl_req_hdr *)VAR_38;
 VAR_28->wlan_idx = VAR_26->wcid.idx;
 VAR_28->operation = VAR_20;
 VAR_33 = sizeof(*VAR_28);


 VAR_32 = (struct wtbl_ht *)(VAR_38 + VAR_33);
 VAR_32->tag = FUNC_1(VAR_18);
 VAR_32->len = FUNC_1(sizeof(*VAR_32));
 VAR_32->ht = 1;
 VAR_32->ldpc = VAR_25->ht_cap.cap & VAR_2;
 VAR_32->af = VAR_25->ht_cap.ampdu_factor;
 VAR_32->mm = VAR_25->ht_cap.ampdu_density;
 VAR_33 += sizeof(*VAR_32);

 if (VAR_25->ht_cap.cap & VAR_3)
  VAR_37 |= VAR_13;
 if (VAR_25->ht_cap.cap & VAR_4)
  VAR_37 |= VAR_14;


 if (VAR_25->vht_cap.vht_supported) {
  struct wtbl_vht *VAR_39;

  VAR_39 = (struct wtbl_vht *)(VAR_38 + VAR_33);
  VAR_33 += sizeof(*VAR_39);
  VAR_39->tag = FUNC_1(VAR_22);
  VAR_39->len = FUNC_1(sizeof(*VAR_39));
  VAR_39->ldpc = VAR_25->vht_cap.cap & VAR_6;
  VAR_39->vht = 1;
  VAR_35++;

  if (VAR_25->vht_cap.cap & VAR_8)
   VAR_37 |= VAR_15;
  if (VAR_25->vht_cap.cap & VAR_7)
   VAR_37 |= VAR_12;
 }


 if (VAR_25->smps_mode == VAR_5) {
  struct wtbl_smps *VAR_40;

  VAR_40 = (struct wtbl_smps *)(VAR_38 + VAR_33);
  VAR_33 += sizeof(*VAR_40);
  VAR_40->tag = FUNC_1(VAR_21);
  VAR_40->len = FUNC_1(sizeof(*VAR_40));
  VAR_40->smps = 1;
  VAR_35++;
 }


 VAR_36 = VAR_13 | VAR_14 |
       VAR_15 | VAR_12;

 VAR_30 = (struct wtbl_raw *)(VAR_38 + VAR_33);
 VAR_33 += sizeof(*VAR_30);
 VAR_30->tag = FUNC_1(VAR_19);
 VAR_30->len = FUNC_1(sizeof(*VAR_30));
 VAR_30->wtbl_idx = 1;
 VAR_30->dw = 5;
 VAR_30->msk = FUNC_2(~VAR_36);
 VAR_30->val = FUNC_2(VAR_37);

 VAR_28->tlv_num = FUNC_1(VAR_35);
 VAR_34 = FUNC_0(&VAR_23->mt76, VAR_10,
      VAR_38, VAR_33, 1);
 if (VAR_34)
  goto out;

 FUNC_5(VAR_38, 0, VAR_11);

 VAR_29 = (struct sta_req_hdr *)VAR_38;
 VAR_29->bss_idx = VAR_27->idx;
 VAR_29->wlan_idx = VAR_26->wcid.idx;
 VAR_29->is_tlv_append = 1;
 VAR_35 = VAR_25->vht_cap.vht_supported ? 2 : 1;
 VAR_29->tlv_num = FUNC_1(VAR_35);
 VAR_29->muar_idx = VAR_27->omac_idx;
 VAR_33 = sizeof(*VAR_29);

 VAR_31 = (struct sta_rec_ht *)(VAR_38 + VAR_33);
 VAR_31->tag = FUNC_1(VAR_16);
 VAR_31->len = FUNC_1(sizeof(*VAR_31));
 VAR_31->ht_cap = FUNC_1(VAR_25->ht_cap.cap);
 VAR_33 += sizeof(*VAR_31);

 if (VAR_25->vht_cap.vht_supported) {
  struct sta_rec_vht *VAR_41;

  VAR_41 = (struct sta_rec_vht *)(VAR_38 + VAR_33);
  VAR_33 += sizeof(*VAR_41);
  VAR_41->tag = FUNC_1(VAR_17);
  VAR_41->len = FUNC_1(sizeof(*VAR_41));
  VAR_41->vht_cap = FUNC_2(VAR_25->vht_cap.cap);
  VAR_41->vht_rx_mcs_map = VAR_25->vht_cap.vht_mcs.rx_mcs_map;
  VAR_41->vht_tx_mcs_map = VAR_25->vht_cap.vht_mcs.tx_mcs_map;
 }

 VAR_34 = FUNC_0(&VAR_23->mt76, VAR_9,
      VAR_38, VAR_33, 1);
out:
 FUNC_3(VAR_38);

 return VAR_34;
}
