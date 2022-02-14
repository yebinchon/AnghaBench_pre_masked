
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int priority; scalar_t__ data; } ;
struct mt76_wcid {int idx; } ;
struct mt76_queue {int hw_idx; } ;
struct mt7603_vif {int idx; } ;
struct mt7603_sta {int rate_count; } ;
struct TYPE_6__ {TYPE_2__* q_tx; } ;
struct mt7603_dev {TYPE_3__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int count; int flags; } ;
struct TYPE_4__ {struct ieee80211_vif* vif; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int tx_pn; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; int addr1; } ;
struct ieee80211_bar {int start_seq_num; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
typedef int __le32 ;
struct TYPE_5__ {struct mt76_queue* q; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mt7603_dev*,struct ieee80211_tx_rate*,int,int*) ;

__attribute__((used)) static int
FUNC_11(struct mt7603_dev *VAR_40, __le32 *VAR_41,
        struct sk_buff *VAR_42, enum mt76_txq_id VAR_43,
        struct mt76_wcid *VAR_44, struct ieee80211_sta *VAR_45,
        int VAR_46, struct ieee80211_key_conf *VAR_47)
{
 struct ieee80211_tx_info *VAR_48 = FUNC_2(VAR_42);
 struct ieee80211_tx_rate *VAR_49 = &VAR_48->control.rates[0];
 struct ieee80211_hdr *VAR_50 = (struct ieee80211_hdr *)VAR_42->data;
 struct ieee80211_bar *VAR_51 = (struct ieee80211_bar *)VAR_42->data;
 struct ieee80211_vif *VAR_52 = VAR_48->control.vif;
 struct mt76_queue *VAR_53 = VAR_40->mt76.q_tx[VAR_43].q;
 struct mt7603_vif *VAR_54;
 int VAR_55;
 int VAR_56 = FUNC_5(VAR_42);
 int VAR_57 = 8;
 u8 VAR_58, VAR_59;
 u16 VAR_60 = FUNC_9(VAR_50->frame_control);
 u16 VAR_61 = 0;
 u8 VAR_62 = 0;
 u32 VAR_63;
 u8 VAR_64;

 if (VAR_52) {
  VAR_54 = (struct mt7603_vif *)VAR_52->drv_priv;
  VAR_62 = VAR_54->idx;
  if (VAR_62 && VAR_43 >= VAR_39)
   VAR_62 += 0x10;
 }

 if (VAR_45) {
  struct mt7603_sta *VAR_65 = (struct mt7603_sta *)VAR_45->drv_priv;

  VAR_57 = VAR_65->rate_count;
 }

 if (VAR_44)
  VAR_55 = VAR_44->idx;
 else
  VAR_55 = VAR_9;

 VAR_58 = (VAR_60 & VAR_0) >> 2;
 VAR_59 = (VAR_60 & VAR_1) >> 4;

 VAR_63 = FUNC_0(VAR_12, VAR_42->len + VAR_38) |
       FUNC_0(VAR_11, VAR_53->hw_idx);
 VAR_41[0] = FUNC_4(VAR_63);

 VAR_63 = VAR_15 |
       FUNC_0(VAR_17, VAR_62) |
       FUNC_0(VAR_19,
    VAR_42->priority & VAR_2) |
       FUNC_0(VAR_13, VAR_10) |
       FUNC_0(VAR_14, VAR_56 / 2) |
       FUNC_0(VAR_20, VAR_55) |
       FUNC_0(VAR_18, !!VAR_47);
 VAR_41[1] = FUNC_4(VAR_63);

 if (VAR_48->flags & VAR_4)
  VAR_41[1] |= FUNC_4(VAR_16);

 VAR_63 = FUNC_0(VAR_23, VAR_58) |
       FUNC_0(VAR_25, VAR_59) |
       FUNC_0(VAR_24,
    FUNC_8(VAR_50->addr1));
 VAR_41[2] = FUNC_4(VAR_63);

 if (!(VAR_48->flags & VAR_3))
  VAR_41[2] |= FUNC_4(VAR_21);

 VAR_41[4] = 0;

 VAR_63 = VAR_33 | VAR_32 |
       FUNC_0(VAR_30, VAR_46);
 VAR_41[5] = FUNC_4(VAR_63);

 VAR_41[6] = 0;

 if (VAR_49->idx >= 0 && VAR_49->count &&
     !(VAR_48->flags & VAR_5)) {
  bool VAR_66 = VAR_48->flags & VAR_6;
  u16 VAR_67 = FUNC_10(VAR_40, VAR_49, VAR_66, &VAR_64);

  VAR_41[2] |= FUNC_4(VAR_22);

  VAR_63 = VAR_35 |
        FUNC_0(VAR_34, VAR_64) |
        FUNC_0(VAR_37, VAR_67);
  VAR_41[6] |= FUNC_4(VAR_63);

  if (VAR_49->flags & VAR_8)
   VAR_41[6] |= FUNC_4(VAR_36);

  if (!(VAR_49->flags & VAR_7))
   VAR_41[2] |= FUNC_4(VAR_21);

  VAR_57 = VAR_49->count;
 }


 if (VAR_43 >= VAR_39)
  VAR_57 = 0x1f;

 VAR_63 = FUNC_0(VAR_27, VAR_57) |
    VAR_29;

 if (FUNC_7(VAR_50->frame_control))
  VAR_61 = FUNC_9(VAR_50->seq_ctrl);
 else if (FUNC_6(VAR_50->frame_control))
  VAR_61 = FUNC_9(VAR_51->start_seq_num);
 else
  VAR_63 &= ~VAR_29;

 VAR_63 |= FUNC_0(VAR_28, VAR_61 >> 4);

 VAR_41[3] = FUNC_4(VAR_63);

 if (VAR_47) {
  u64 VAR_68 = FUNC_3(&VAR_47->tx_pn);

  VAR_41[3] |= FUNC_4(VAR_26);
  VAR_41[4] = FUNC_4(VAR_68 & FUNC_1(31, 0));
  VAR_41[5] |= FUNC_4(FUNC_0(VAR_31, VAR_68 >> 32));
 }

 VAR_41[7] = 0;

 return 0;
}
