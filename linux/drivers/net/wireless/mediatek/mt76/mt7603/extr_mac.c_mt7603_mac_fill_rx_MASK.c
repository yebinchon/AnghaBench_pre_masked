
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct sk_buff {void** data; int len; scalar_t__ cb; } ;
struct mt76_rx_status {int flag; int enc_flags; int rate_idx; int chains; int aggr; int tid; int seqno; int wcid; int bw; scalar_t__* chain_signal; scalar_t__ signal; int encoding; void** iv; int freq; int band; } ;
struct ieee80211_supported_band {int n_channels; TYPE_3__* channels; int band; } ;
struct TYPE_6__ {struct ieee80211_supported_band sband; } ;
struct TYPE_5__ {struct ieee80211_supported_band sband; } ;
struct TYPE_8__ {int antenna_mask; TYPE_2__ sband_2g; TYPE_1__ sband_5g; } ;
struct mt7603_dev {scalar_t__* rssi_offset; TYPE_4__ mt76; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef int __le32 ;
struct TYPE_7__ {int center_freq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct mt76_rx_status*,int ,int) ;
 int FUNC_10 (struct mt7603_dev*,int,int) ;
 int FUNC_11 (TYPE_4__*,struct ieee80211_supported_band*,int,int) ;
 int FUNC_12 (struct sk_buff*,void*) ;
 int FUNC_13 (struct sk_buff*,int) ;

int
FUNC_14(struct mt7603_dev *VAR_37, struct sk_buff *VAR_38)
{
 struct mt76_rx_status *VAR_39 = (struct mt76_rx_status *)VAR_38->cb;
 struct ieee80211_supported_band *VAR_40;
 struct ieee80211_hdr *VAR_41;
 __le32 *VAR_42 = (__le32 *)VAR_38->data;
 u32 VAR_43 = FUNC_7(VAR_42[0]);
 u32 VAR_44 = FUNC_7(VAR_42[1]);
 u32 VAR_45 = FUNC_7(VAR_42[2]);
 bool VAR_46 = VAR_44 & VAR_9;
 bool VAR_47 = 0;
 bool VAR_48;
 int VAR_49;
 int VAR_50;

 FUNC_9(VAR_39, 0, sizeof(*VAR_39));

 VAR_50 = FUNC_1(VAR_6, VAR_44);
 VAR_40 = (VAR_50 & 1) ? &VAR_37->mt76.sband_5g.sband : &VAR_37->mt76.sband_2g.sband;
 VAR_50 >>= 1;

 VAR_49 = FUNC_1(VAR_17, VAR_45);
 VAR_39->wcid = FUNC_10(VAR_37, VAR_49, VAR_46);

 VAR_39->band = VAR_40->band;
 if (VAR_50 < VAR_40->n_channels)
  VAR_39->freq = VAR_40->channels[VAR_50].center_freq;

 if (VAR_45 & VAR_12)
  VAR_39->flag |= VAR_32;

 if (VAR_45 & VAR_16)
  VAR_39->flag |= VAR_35;

 if (FUNC_1(VAR_15, VAR_45) != 0 &&
     !(VAR_45 & (VAR_10 | VAR_11))) {
  VAR_39->flag |= VAR_31;
  VAR_39->flag |= VAR_33;
  VAR_39->flag |= VAR_36 | VAR_34;
 }

 VAR_48 = VAR_44 & VAR_7;

 if (VAR_45 & VAR_14)
  return -VAR_0;

 if (!VAR_40->channels)
  return -VAR_0;

 VAR_42 += 4;
 if (VAR_43 & VAR_5) {
  VAR_42 += 4;
  if ((u8 *)VAR_42 - VAR_38->data >= VAR_38->len)
   return -VAR_0;
 }
 if (VAR_43 & VAR_2) {
  u8 *VAR_51 = (u8 *)VAR_42;

  if (VAR_39->flag & VAR_31) {
   VAR_39->iv[0] = VAR_51[5];
   VAR_39->iv[1] = VAR_51[4];
   VAR_39->iv[2] = VAR_51[3];
   VAR_39->iv[3] = VAR_51[2];
   VAR_39->iv[4] = VAR_51[1];
   VAR_39->iv[5] = VAR_51[0];

   VAR_47 = FUNC_1(VAR_13, VAR_45);
  }

  VAR_42 += 4;
  if ((u8 *)VAR_42 - VAR_38->data >= VAR_38->len)
   return -VAR_0;
 }
 if (VAR_43 & VAR_3) {
  VAR_42 += 2;
  if ((u8 *)VAR_42 - VAR_38->data >= VAR_38->len)
   return -VAR_0;
 }
 if (VAR_43 & VAR_4) {
  u32 VAR_52 = FUNC_7(VAR_42[0]);
  u32 VAR_53 = FUNC_7(VAR_42[3]);
  bool VAR_54 = 0;

  VAR_50 = FUNC_1(VAR_23, VAR_52);
  switch (FUNC_1(VAR_22, VAR_52)) {
  case 131:
   VAR_54 = 1;

  case 128:
   VAR_50 = FUNC_11(&VAR_37->mt76, VAR_40, VAR_50, VAR_54);
   break;
  case 129:
  case 130:
   VAR_39->encoding = VAR_30;
   if (VAR_50 > 15)
    return -VAR_0;
   break;
  default:
   return -VAR_0;
  }

  if (VAR_52 & VAR_20)
   VAR_39->enc_flags |= VAR_28;
  if (VAR_52 & VAR_19)
   VAR_39->enc_flags |= VAR_27;

  VAR_39->enc_flags |= VAR_29 *
        FUNC_1(VAR_21, VAR_52);

  VAR_39->rate_idx = VAR_50;

  VAR_39->chains = VAR_37->mt76.antenna_mask;
  VAR_39->chain_signal[0] = FUNC_1(VAR_24, VAR_53) +
       VAR_37->rssi_offset[0];
  VAR_39->chain_signal[1] = FUNC_1(VAR_25, VAR_53) +
       VAR_37->rssi_offset[1];

  VAR_39->signal = VAR_39->chain_signal[0];
  if (VAR_39->chains & FUNC_0(1))
   VAR_39->signal = FUNC_8(VAR_39->signal,
          VAR_39->chain_signal[1]);

  if (FUNC_1(VAR_18, VAR_52) == 1)
   VAR_39->bw = VAR_26;

  VAR_42 += 6;
  if ((u8 *)VAR_42 - VAR_38->data >= VAR_38->len)
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 FUNC_13(VAR_38, (u8 *)VAR_42 - VAR_38->data + 2 * VAR_48);

 if (VAR_47) {
  u8 VAR_55 = FUNC_1(VAR_8, VAR_44);

  FUNC_12(VAR_38, VAR_55);
 }

 VAR_41 = (struct ieee80211_hdr *)VAR_38->data;
 if (!VAR_39->wcid || !FUNC_4(VAR_41->frame_control))
  return 0;

 VAR_39->aggr = VAR_46 &&
         !FUNC_5(VAR_41->frame_control);
 VAR_39->tid = *FUNC_3(VAR_41) & VAR_1;
 VAR_39->seqno = FUNC_2(FUNC_6(VAR_41->seq_ctrl));

 return 0;
}
