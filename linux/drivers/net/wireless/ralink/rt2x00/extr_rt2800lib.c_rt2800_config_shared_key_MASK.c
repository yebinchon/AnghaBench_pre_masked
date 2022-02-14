
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; int bssidx; int cipher; int address; int rx_mic; int tx_mic; int key; } ;
struct rt2x00_field32 {int bit_offset; int bit_mask; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {int hw_key_idx; int keyidx; } ;
struct hw_key_entry {int rx_mic; int tx_mic; int key; } ;
typedef int key_entry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 int FUNC_5 (struct rt2x00_dev*,struct rt2x00lib_crypto*,struct ieee80211_key_conf*) ;
 int FUNC_6 (struct rt2x00_dev*,int ,struct hw_key_entry*,int) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_9 (int *,struct rt2x00_field32,int) ;

int FUNC_10(struct rt2x00_dev *VAR_1,
        struct rt2x00lib_crypto *VAR_2,
        struct ieee80211_key_conf *VAR_3)
{
 struct hw_key_entry VAR_4;
 struct rt2x00_field32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_2->cmd == VAR_0) {
  VAR_3->hw_key_idx = (4 * VAR_2->bssidx) + VAR_3->keyidx;

  FUNC_2(VAR_4.key, VAR_2->key,
         sizeof(VAR_4.key));
  FUNC_2(VAR_4.tx_mic, VAR_2->tx_mic,
         sizeof(VAR_4.tx_mic));
  FUNC_2(VAR_4.rx_mic, VAR_2->rx_mic,
         sizeof(VAR_4.rx_mic));

  VAR_6 = FUNC_0(VAR_3->hw_key_idx);
  FUNC_6(VAR_1, VAR_6,
           &VAR_4, sizeof(VAR_4));
 }
 VAR_5.bit_offset = 4 * (VAR_3->hw_key_idx % 8);
 VAR_5.bit_mask = 0x7 << VAR_5.bit_offset;

 VAR_6 = FUNC_1(VAR_3->hw_key_idx / 8);

 VAR_7 = FUNC_7(VAR_1, VAR_6);
 FUNC_9(&VAR_7, VAR_5,
      (VAR_2->cmd == VAR_0) * VAR_2->cipher);
 FUNC_8(VAR_1, VAR_6, VAR_7);




 FUNC_3(VAR_1, VAR_2->address, VAR_3->hw_key_idx);
 FUNC_4(VAR_1, VAR_3->hw_key_idx,
           VAR_2->bssidx);
 FUNC_5(VAR_1, VAR_2, VAR_3);

 return 0;
}
