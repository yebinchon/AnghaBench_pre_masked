
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; int bssidx; int cipher; int rx_mic; int tx_mic; int key; } ;
struct rt2x00_field32 {int bit_offset; int bit_mask; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {int hw_key_idx; int flags; } ;
struct hw_key_entry {int rx_mic; int tx_mic; int key; } ;
typedef int key_entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int*,struct rt2x00_field32,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int,struct hw_key_entry*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_7,
         struct rt2x00lib_crypto *VAR_8,
         struct ieee80211_key_conf *VAR_9)
{
 struct hw_key_entry VAR_10;
 struct rt2x00_field32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_8->cmd == VAR_6) {
  VAR_12 = (0xf << VAR_8->bssidx);

  VAR_13 = FUNC_5(VAR_7, VAR_3);
  VAR_13 &= VAR_12;

  if (VAR_13 && VAR_13 == VAR_12)
   return -VAR_1;

  VAR_9->hw_key_idx += VAR_13 ? FUNC_1(VAR_13) : 0;




  FUNC_2(VAR_10.key, VAR_8->key,
         sizeof(VAR_10.key));
  FUNC_2(VAR_10.tx_mic, VAR_8->tx_mic,
         sizeof(VAR_10.tx_mic));
  FUNC_2(VAR_10.rx_mic, VAR_8->rx_mic,
         sizeof(VAR_10.rx_mic));

  VAR_13 = FUNC_0(VAR_9->hw_key_idx);
  FUNC_4(VAR_7, VAR_13,
           &VAR_10, sizeof(VAR_10));
  if (VAR_9->hw_key_idx < 8) {
   VAR_11.bit_offset = (3 * VAR_9->hw_key_idx);
   VAR_11.bit_mask = 0x7 << VAR_11.bit_offset;

   VAR_13 = FUNC_5(VAR_7, VAR_4);
   FUNC_3(&VAR_13, VAR_11, VAR_8->cipher);
   FUNC_6(VAR_7, VAR_4, VAR_13);
  } else {
   VAR_11.bit_offset = (3 * (VAR_9->hw_key_idx - 8));
   VAR_11.bit_mask = 0x7 << VAR_11.bit_offset;

   VAR_13 = FUNC_5(VAR_7, VAR_5);
   FUNC_3(&VAR_13, VAR_11, VAR_8->cipher);
   FUNC_6(VAR_7, VAR_5, VAR_13);
  }
  VAR_9->flags |= VAR_2;
 }







 VAR_12 = 1 << VAR_9->hw_key_idx;

 VAR_13 = FUNC_5(VAR_7, VAR_3);
 if (VAR_8->cmd == VAR_6)
  VAR_13 |= VAR_12;
 else if (VAR_8->cmd == VAR_0)
  VAR_13 &= ~VAR_12;
 FUNC_6(VAR_7, VAR_3, VAR_13);

 return 0;
}
