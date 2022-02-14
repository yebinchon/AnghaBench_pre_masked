
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; int bssidx; int cipher; int address; int rx_mic; int tx_mic; int key; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {int hw_key_idx; int flags; } ;
struct hw_pairwise_ta_entry {int cipher; struct hw_pairwise_ta_entry* rx_mic; struct hw_pairwise_ta_entry* tx_mic; struct hw_pairwise_ta_entry* key; } ;
struct hw_key_entry {int cipher; struct hw_key_entry* rx_mic; struct hw_key_entry* tx_mic; struct hw_key_entry* key; } ;
typedef int key_entry ;
typedef int addr_entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hw_pairwise_ta_entry*,int ,int) ;
 int FUNC_4 (struct hw_pairwise_ta_entry*,int ,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,struct hw_pairwise_ta_entry*,int) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_8,
           struct rt2x00lib_crypto *VAR_9,
           struct ieee80211_key_conf *VAR_10)
{
 struct hw_pairwise_ta_entry VAR_11;
 struct hw_key_entry VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 if (VAR_9->cmd == VAR_7) {
  VAR_14 = FUNC_6(VAR_8, VAR_4);
  if (VAR_14 && VAR_14 == ~0) {
   VAR_10->hw_key_idx = 32;
   VAR_14 = FUNC_6(VAR_8, VAR_5);
   if (VAR_14 && VAR_14 == ~0)
    return -VAR_1;
  }

  VAR_10->hw_key_idx += VAR_14 ? FUNC_2(VAR_14) : 0;




  FUNC_3(VAR_12.key, VAR_9->key,
         sizeof(VAR_12.key));
  FUNC_3(VAR_12.tx_mic, VAR_9->tx_mic,
         sizeof(VAR_12.tx_mic));
  FUNC_3(VAR_12.rx_mic, VAR_9->rx_mic,
         sizeof(VAR_12.rx_mic));

  FUNC_4(&VAR_11, 0, sizeof(VAR_11));
  FUNC_3(&VAR_11, VAR_9->address, VAR_2);
  VAR_11.cipher = VAR_9->cipher;

  VAR_14 = FUNC_0(VAR_10->hw_key_idx);
  FUNC_5(VAR_8, VAR_14,
            &VAR_12, sizeof(VAR_12));

  VAR_14 = FUNC_1(VAR_10->hw_key_idx);
  FUNC_5(VAR_8, VAR_14,
            &VAR_11, sizeof(VAR_11));






  VAR_14 = FUNC_6(VAR_8, VAR_6);
  VAR_14 |= (1 << VAR_9->bssidx);
  FUNC_7(VAR_8, VAR_6, VAR_14);
  VAR_10->flags |= VAR_3;
 }







 if (VAR_10->hw_key_idx < 32) {
  VAR_13 = 1 << VAR_10->hw_key_idx;

  VAR_14 = FUNC_6(VAR_8, VAR_4);
  if (VAR_9->cmd == VAR_7)
   VAR_14 |= VAR_13;
  else if (VAR_9->cmd == VAR_0)
   VAR_14 &= ~VAR_13;
  FUNC_7(VAR_8, VAR_4, VAR_14);
 } else {
  VAR_13 = 1 << (VAR_10->hw_key_idx - 32);

  VAR_14 = FUNC_6(VAR_8, VAR_5);
  if (VAR_9->cmd == VAR_7)
   VAR_14 |= VAR_13;
  else if (VAR_9->cmd == VAR_0)
   VAR_14 &= ~VAR_13;
  FUNC_7(VAR_8, VAR_5, VAR_14);
 }

 return 0;
}
