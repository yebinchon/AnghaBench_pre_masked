
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_key_conf {int tx_pn; } ;
typedef enum mt76x02_cipher_type { ____Placeholder_mt76x02_cipher_type } mt76x02_cipher_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_3 (struct ieee80211_key_conf*,int *) ;

void FUNC_4(struct mt76x02_dev *VAR_2, u8 VAR_3,
         struct ieee80211_key_conf *VAR_4)
{
 enum mt76x02_cipher_type VAR_5;
 u8 VAR_6[32];
 u32 VAR_7, VAR_8;
 u64 VAR_9;

 VAR_5 = FUNC_3(VAR_4, VAR_6);
 VAR_7 = FUNC_2(VAR_2, FUNC_0(VAR_3));
 VAR_8 = FUNC_2(VAR_2, FUNC_0(VAR_3) + 4);

 VAR_9 = (u64)VAR_8 << 16;
 if (VAR_5 == VAR_1) {
  VAR_9 |= (VAR_7 >> 16) & 0xff;
  VAR_9 |= (VAR_7 & 0xff) << 8;
 } else if (VAR_5 >= VAR_0) {
  VAR_9 |= VAR_7 & 0xffff;
 } else {
  return;
 }

 FUNC_1(&VAR_4->tx_pn, VAR_9);
}
