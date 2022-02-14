
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int priority; scalar_t__ data; } ;
struct mt76_wcid {int idx; } ;
struct mt7615_vif {int omac_idx; int wmm_idx; } ;
struct mt7615_sta {int rate_count; } ;
struct mt7615_dev {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_rate {scalar_t__ idx; int count; int flags; } ;
struct TYPE_2__ {struct ieee80211_vif* vif; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; int addr1; } ;
struct ieee80211_bar {int start_seq_num; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
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
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ VAR_50 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct mt7615_dev*,struct ieee80211_tx_rate*,int,int*) ;
 int FUNC_14 (struct sk_buff*) ;

int FUNC_15(struct mt7615_dev *VAR_51, __le32 *VAR_52,
     struct sk_buff *VAR_53, struct mt76_wcid *VAR_54,
     struct ieee80211_sta *VAR_55, int VAR_56,
     struct ieee80211_key_conf *VAR_57)
{
 struct ieee80211_tx_info *VAR_58 = FUNC_2(VAR_53);
 struct ieee80211_tx_rate *VAR_59 = &VAR_58->control.rates[0];
 struct ieee80211_hdr *VAR_60 = (struct ieee80211_hdr *)VAR_53->data;
 bool VAR_61 = FUNC_11(VAR_60->addr1);
 struct ieee80211_vif *VAR_62 = VAR_58->control.vif;
 int VAR_63 = 8;
 u8 VAR_64, VAR_65, VAR_66, VAR_67, VAR_68 = 0, VAR_69 = 0;
 __le16 VAR_70 = VAR_60->frame_control;
 u16 VAR_71 = 0;
 u32 VAR_72;

 if (VAR_62) {
  struct mt7615_vif *VAR_73 = (struct mt7615_vif *)VAR_62->drv_priv;

  VAR_68 = VAR_73->omac_idx;
  VAR_69 = VAR_73->wmm_idx;
 }

 if (VAR_55) {
  struct mt7615_sta *VAR_74 = (struct mt7615_sta *)VAR_55->drv_priv;

  VAR_63 = VAR_74->rate_count;
 }

 VAR_64 = (FUNC_12(VAR_70) & VAR_0) >> 2;
 VAR_65 = (FUNC_12(VAR_70) & VAR_1) >> 4;

 if (FUNC_8(VAR_70) || FUNC_7(VAR_70)) {
  VAR_67 = VAR_69 * VAR_11 +
   FUNC_14(VAR_53);
  VAR_66 = VAR_48;
 } else if (FUNC_6(VAR_70)) {
  VAR_67 = VAR_14;
  VAR_66 = VAR_49;
 } else {
  VAR_67 = VAR_13;
  VAR_66 = VAR_48;
 }

 VAR_72 = FUNC_0(VAR_17, VAR_53->len + VAR_46) |
       FUNC_0(VAR_15, VAR_47) |
       FUNC_0(VAR_16, VAR_67);
 VAR_52[0] = FUNC_3(VAR_72);

 VAR_72 = VAR_20 |
       FUNC_0(VAR_24, VAR_54->idx) |
       FUNC_0(VAR_18, VAR_12) |
       FUNC_0(VAR_19,
    FUNC_4(VAR_53) / 2) |
       FUNC_0(VAR_23,
    VAR_53->priority & VAR_2) |
       FUNC_0(VAR_22, VAR_66) |
       FUNC_0(VAR_21, VAR_68);
 VAR_52[1] = FUNC_3(VAR_72);

 VAR_72 = FUNC_0(VAR_28, VAR_64) |
       FUNC_0(VAR_30, VAR_65) |
       FUNC_0(VAR_29, VAR_61);
 if (VAR_57) {
  if (VAR_61 && FUNC_10(VAR_53) &&
      VAR_57->cipher == VAR_50) {
   VAR_72 |= VAR_26;
   VAR_52[3] = 0;
  } else {
   VAR_52[3] = FUNC_3(VAR_32);
  }
 } else {
  VAR_52[3] = 0;
 }
 VAR_52[2] = FUNC_3(VAR_72);

 if (!(VAR_58->flags & VAR_3))
  VAR_52[2] |= FUNC_3(VAR_25);

 VAR_52[4] = 0;
 VAR_52[6] = 0;

 if (VAR_59->idx >= 0 && VAR_59->count &&
     !(VAR_58->flags & VAR_6)) {
  bool VAR_75 = VAR_58->flags & VAR_7;
  u8 VAR_76;
  u16 VAR_77 = FUNC_13(VAR_51, VAR_59, VAR_75, &VAR_76);

  VAR_52[2] |= FUNC_3(VAR_27);

  VAR_72 = VAR_40 |
        FUNC_0(VAR_39, VAR_76) |
        FUNC_0(VAR_43, VAR_77);
  VAR_52[6] |= FUNC_3(VAR_72);

  if (VAR_59->flags & VAR_9)
   VAR_52[6] |= FUNC_3(VAR_42);

  if (VAR_58->flags & VAR_4)
   VAR_52[6] |= FUNC_3(VAR_41);

  if (!(VAR_59->flags & (VAR_8 |
         VAR_10)))
   VAR_52[2] |= FUNC_3(VAR_25);

  VAR_63 = VAR_59->count;
 }

 if (!FUNC_6(VAR_70)) {
  VAR_72 = VAR_38 | VAR_37 |
        FUNC_0(VAR_36, VAR_56);
  VAR_52[5] = FUNC_3(VAR_72);
 } else {
  VAR_52[5] = 0;

  VAR_63 = 0x1f;
 }

 VAR_72 = FUNC_0(VAR_33, VAR_63);
 if (FUNC_9(VAR_60->frame_control)) {
  VAR_71 = FUNC_1(FUNC_12(VAR_60->seq_ctrl));
  VAR_72 |= VAR_35;
 } else if (FUNC_5(VAR_60->frame_control)) {
  struct ieee80211_bar *VAR_78 = (struct ieee80211_bar *)VAR_53->data;

  VAR_71 = FUNC_1(FUNC_12(VAR_78->start_seq_num));
  VAR_72 |= VAR_35;
 }
 VAR_72 |= FUNC_0(VAR_34, VAR_71);

 VAR_52[3] |= FUNC_3(VAR_72);

 if (VAR_58->flags & VAR_5)
  VAR_52[3] |= FUNC_3(VAR_31);

 VAR_52[7] = FUNC_0(VAR_45, VAR_64) |
    FUNC_0(VAR_44, VAR_65);

 return 0;
}
