
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct wl12xx_vif {scalar_t__ default_key; scalar_t__ bss_type; } ;
struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int quirks; scalar_t__ aggr_buf; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_4__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct TYPE_3__ {scalar_t__ cipher; scalar_t__ hw_key_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,scalar_t__) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,struct sk_buff*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,struct sk_buff*) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,struct sk_buff*,scalar_t__,struct ieee80211_tx_info*,scalar_t__) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,scalar_t__) ;
 int FUNC_11 (struct wl1271*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct wl1271*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct wl1271 *VAR_9, struct wl12xx_vif *VAR_10,
       struct sk_buff *VAR_11, u32 VAR_12, u8 VAR_13)
{
 struct ieee80211_tx_info *VAR_14;
 u32 VAR_15 = 0;
 int VAR_16 = 0;
 u32 VAR_17;
 bool VAR_18;
 bool VAR_19 = 0;

 if (!VAR_11) {
  FUNC_5("discarding null skb");
  return -VAR_1;
 }

 if (VAR_13 == VAR_4) {
  FUNC_5("invalid hlid. dropping skb 0x%p", VAR_11);
  return -VAR_1;
 }

 VAR_14 = FUNC_0(VAR_11);

 VAR_18 = FUNC_11(VAR_9, VAR_11);

 if ((VAR_9->quirks & VAR_8) &&
     VAR_14->control.hw_key &&
     VAR_14->control.hw_key->cipher == VAR_5)
  VAR_15 = VAR_3;

 if (VAR_14->control.hw_key) {
  bool VAR_20;
  u8 VAR_21 = VAR_14->control.hw_key->hw_key_idx;
  u32 VAR_22 = VAR_14->control.hw_key->cipher;

  VAR_20 = (VAR_22 == VAR_7) ||
    (VAR_22 == VAR_6);

  if (FUNC_1(VAR_20 && VAR_10 && VAR_10->default_key != VAR_21)) {
   VAR_16 = FUNC_6(VAR_9, VAR_10, VAR_21);
   if (VAR_16 < 0)
    return VAR_16;
   VAR_10->default_key = VAR_21;
  }

  VAR_19 = (VAR_22 == VAR_2);
 }

 VAR_16 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_15, VAR_12, VAR_13,
     VAR_19);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_9(VAR_9, VAR_10, VAR_11, VAR_15, VAR_14, VAR_13);

 if (!VAR_18 && VAR_10 && VAR_10->bss_type == VAR_0) {
  FUNC_8(VAR_9, VAR_10, VAR_11);
  FUNC_10(VAR_9, VAR_10, VAR_13);
 }
 VAR_17 = FUNC_12(VAR_9, VAR_11->len);

 FUNC_2(VAR_9->aggr_buf + VAR_12, VAR_11->data, VAR_11->len);
 FUNC_3(VAR_9->aggr_buf + VAR_12 + VAR_11->len, 0, VAR_17 - VAR_11->len);


 if (VAR_18)
  FUNC_4(VAR_11, sizeof(struct wl1271_tx_hw_descr));

 return VAR_17;
}
