
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txentry_desc {int flags; int iv_len; int header_length; int iv_offset; int key_idx; int cipher; } ;
struct sk_buff {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int flags; int iv_len; int hw_key_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct ieee80211_key_conf*) ;

void FUNC_4(struct rt2x00_dev *VAR_7,
           struct sk_buff *VAR_8,
           struct txentry_desc *VAR_9)
{
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_8);
 struct ieee80211_key_conf *VAR_11 = VAR_10->control.hw_key;

 if (!FUNC_2(VAR_7) || !VAR_11)
  return;

 FUNC_1(VAR_0, &VAR_9->flags);

 VAR_9->cipher = FUNC_3(VAR_11);

 if (VAR_11->flags & VAR_6)
  FUNC_1(VAR_3, &VAR_9->flags);

 VAR_9->key_idx = VAR_11->hw_key_idx;
 VAR_9->iv_offset = VAR_9->header_length;
 VAR_9->iv_len = VAR_11->iv_len;

 if (!(VAR_11->flags & VAR_4))
  FUNC_1(VAR_1, &VAR_9->flags);

 if (!(VAR_11->flags & VAR_5))
  FUNC_1(VAR_2, &VAR_9->flags);
}
