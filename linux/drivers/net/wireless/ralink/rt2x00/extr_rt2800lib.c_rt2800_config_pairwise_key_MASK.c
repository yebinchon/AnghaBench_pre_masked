
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; scalar_t__ wcid; int rx_mic; int tx_mic; int key; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; } ;
struct hw_key_entry {int rx_mic; int tx_mic; int key; } ;
typedef int key_entry ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,struct rt2x00lib_crypto*,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct hw_key_entry*,int) ;

int FUNC_4(struct rt2x00_dev *VAR_3,
          struct rt2x00lib_crypto *VAR_4,
          struct ieee80211_key_conf *VAR_5)
{
 struct hw_key_entry VAR_6;
 u32 VAR_7;

 if (VAR_4->cmd == VAR_1) {




  if (VAR_4->wcid > VAR_2)
   return -VAR_0;
  VAR_5->hw_key_idx = VAR_4->wcid;

  FUNC_1(VAR_6.key, VAR_4->key,
         sizeof(VAR_6.key));
  FUNC_1(VAR_6.tx_mic, VAR_4->tx_mic,
         sizeof(VAR_6.tx_mic));
  FUNC_1(VAR_6.rx_mic, VAR_4->rx_mic,
         sizeof(VAR_6.rx_mic));

  VAR_7 = FUNC_0(VAR_5->hw_key_idx);
  FUNC_3(VAR_3, VAR_7,
           &VAR_6, sizeof(VAR_6));
 }




 FUNC_2(VAR_3, VAR_4, VAR_5);

 return 0;
}
