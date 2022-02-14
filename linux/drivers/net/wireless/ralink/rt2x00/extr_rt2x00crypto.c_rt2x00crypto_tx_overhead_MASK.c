
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int flags; scalar_t__ cipher; scalar_t__ iv_len; scalar_t__ icv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rt2x00_dev*) ;

unsigned int FUNC_2(struct rt2x00_dev *VAR_3,
          struct sk_buff *VAR_4)
{
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_4);
 struct ieee80211_key_conf *VAR_6 = VAR_5->control.hw_key;
 unsigned int VAR_7 = 0;

 if (!FUNC_1(VAR_3) || !VAR_6)
  return VAR_7;






 VAR_7 += VAR_6->icv_len;

 if (!(VAR_6->flags & VAR_0))
  VAR_7 += VAR_6->iv_len;

 if (!(VAR_6->flags & VAR_1)) {
  if (VAR_6->cipher == VAR_2)
   VAR_7 += 8;
 }

 return VAR_7;
}
