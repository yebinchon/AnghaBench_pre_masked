
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
struct TYPE_5__ {int idx; } ;
struct TYPE_6__ {TYPE_1__ wcid; } ;
struct mt7615_vif {scalar_t__ omac_idx; int idx; TYPE_2__ sta; } ;
struct TYPE_8__ {int idx; } ;
struct mt7615_sta {TYPE_4__ wcid; } ;
struct mt7615_dev {int mt76; } ;
struct TYPE_7__ {int bssid; } ;
struct ieee80211_vif {int type; TYPE_3__ bss_conf; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct bss_info_omac {int dummy; } ;
struct bss_info_ext_bss {int dummy; } ;
struct bss_info_basic {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct ieee80211_sta* FUNC_5 (struct ieee80211_vif*,int ) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;
 int FUNC_8 (struct ieee80211_vif*,int*,int ,int,int) ;
 int FUNC_9 (struct mt7615_vif*,int*) ;
 int FUNC_10 (struct mt7615_vif*,int*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int FUNC_13(struct mt7615_dev *VAR_9,
       struct ieee80211_vif *VAR_10, int VAR_11)
{
 struct mt7615_vif *VAR_12 = (struct mt7615_vif *)VAR_10->drv_priv;
 struct req_hdr {
  u8 bss_idx;
  u8 rsv0;
  __le16 tlv_num;
  u8 is_tlv_append;
  u8 rsv1[3];
 } VAR_13;
 int VAR_14 = sizeof(struct req_hdr) + sizeof(struct bss_info_basic);
 int VAR_15, VAR_16, VAR_17 = FUNC_0(133), VAR_18 = 1;
 u32 VAR_19 = 0, VAR_20 = VAR_8;
 u8 *VAR_21, *VAR_22, VAR_23 = 0;
 struct req_hdr *VAR_24;

 if (VAR_11) {
  VAR_14 += sizeof(struct bss_info_omac);
  VAR_17 |= FUNC_0(131);
  if (VAR_12->omac_idx > VAR_5) {
   VAR_14 += sizeof(struct bss_info_ext_bss);
   VAR_17 |= FUNC_0(132);
   VAR_18++;
  }
  VAR_18++;
 }

 switch (VAR_10->type) {
 case 130:
 case 129:
  VAR_23 = VAR_12->sta.wcid.idx;
  VAR_19 = VAR_1;
  break;
 case 128: {

  if (VAR_11) {
   struct ieee80211_sta *VAR_25;
   struct mt7615_sta *VAR_26;

   FUNC_11();
   VAR_25 = FUNC_5(VAR_10, VAR_10->bss_conf.bssid);
   if (!VAR_25) {
    FUNC_12();
    return -VAR_3;
   }

   VAR_26 = (struct mt7615_sta *)VAR_25->drv_priv;
   VAR_23 = VAR_26->wcid.idx;
   FUNC_12();
  }
  VAR_19 = VAR_2;
  break;
 }
 default:
  FUNC_1(1);
  break;
 }

 VAR_21 = FUNC_7(VAR_14, VAR_6);
 if (!VAR_21)
  return -VAR_4;

 VAR_24 = (struct req_hdr *)VAR_21;
 VAR_24->bss_idx = VAR_12->idx;
 VAR_24->tlv_num = FUNC_3(VAR_18);
 VAR_24->is_tlv_append = 1;

 VAR_22 = VAR_21 + sizeof(*VAR_24);
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  int VAR_27 = FUNC_4(VAR_17 & FUNC_0(VAR_16)) - 1;

  switch (VAR_27) {
  case 131:
   FUNC_10(VAR_12, VAR_22,
       VAR_19);
   VAR_22 += sizeof(struct bss_info_omac);
   break;
  case 133:
   FUNC_8(VAR_10, VAR_22, VAR_20,
        VAR_23, VAR_11);
   VAR_22 += sizeof(struct bss_info_basic);
   break;
  case 132:
   FUNC_9(VAR_12, VAR_22);
   VAR_22 += sizeof(struct bss_info_ext_bss);
   break;
  default:
   break;
  }
 }

 VAR_15 = FUNC_2(&VAR_9->mt76, VAR_7,
      VAR_21, VAR_14, 1);
 FUNC_6(VAR_21);

 return VAR_15;
}
